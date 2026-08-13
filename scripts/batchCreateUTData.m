function batchCreateUTData(moduleList, simTimeSec, sampleTime)
% BATCHCREATEUTDATA  Batch create unit test data infrastructure for modules
%   that already have a _harness.slx but lack UT_*_harness directory/testData_tab.mat.
%
%   Usage:
%     batchCreateUTData()                          % auto-discover all eligible modules
%     batchCreateUTData({'EZEStEnCtrl','DrvStFtCtrl'})  % specific modules
%     batchCreateUTData({}, 10, 0.01)              % custom simTime=10s, sampleTime=0.01s
%
%   For each module:
%     1. Loads the harness model
%     2. Reads signal names from Signal Builder block
%     3. Creates UT_<module>_harness/ directory structure
%     4. Generates Default.mat calibration data
%     5. Creates test case datasets (ds_*.mat + expectedValues_*.mat)
%     6. Generates testData_tab.mat
%     7. Creates Excel template for manual refinement
%
%   Copyright 2026 - CI Automation Script
% -------------------------------------------------------------------------

%% Configuration
projectRoot = fileparts(fileparts(mfilename('fullpath')));
archDir = fullfile(projectRoot, 'ModeAdjustNewArch');
fprintf('[BatchUT] Project root: %s\n', projectRoot);
fprintf('[BatchUT] Architecture dir: %s\n', archDir);

if nargin < 1 || isempty(moduleList)
    moduleList = discoverModules(archDir);
end
if nargin < 2 || isempty(simTimeSec)
    simTimeSec = 10;  % default 10 seconds
end
if nargin < 3 || isempty(sampleTime)
    sampleTime = 0.01;  % default 10ms step
end

fprintf('[BatchUT] Found %d modules to process\n', numel(moduleList));

%% Setup paths
addpath(fullfile(projectRoot, 'unittest', 'UnitTest_V3p2'));
addpath(fullfile(projectRoot, 'unittest', 'UnitTest_V3p2', '+Excel'));

%% Process each module
successCount = 0;
failCount = 0;
skipCount = 0;

for i = 1:numel(moduleList)
    moduleName = moduleList{i};
    fprintf('\n[BatchUT] === %d/%d: %s ===\n', i, numel(moduleList), moduleName);
    
    try
        sts = processModule(archDir, moduleName, simTimeSec, sampleTime);
        if sts
            successCount = successCount + 1;
            fprintf('[BatchUT] SUCCESS: %s\n', moduleName);
        else
            skipCount = skipCount + 1;
            fprintf('[BatchUT] SKIP: %s (Signal Builder not found or empty)\n', moduleName);
        end
    catch ME
        failCount = failCount + 1;
        fprintf('[BatchUT] FAIL: %s - %s\n', moduleName, ME.message);
    end
    
    % Clean up - close all models
    try
        close_system(find_system(0,'SearchDepth',1,'type','block_diagram'), 0);
    catch
    end
end

%% Summary
fprintf('\n========================================\n');
fprintf('  Batch UT Creation Summary\n');
fprintf('========================================\n');
fprintf('  Total:   %d\n', numel(moduleList));
fprintf('  Success: %d\n', successCount);
fprintf('  Skip:    %d\n', skipCount);
fprintf('  Fail:    %d\n', failCount);
fprintf('========================================\n');
end


%% ========================================================================
%  SUB-FUNCTIONS
%% ========================================================================

function moduleList = discoverModules(archDir)
% Discover modules that have _harness.slx but no UT_*_harness/testData_tab.mat
    moduleList = {};
    dirs = dir(archDir);
    for i = 1:numel(dirs)
        if ~dirs(i).isdir || startsWith(dirs(i).name, '.')
            continue;
        end
        moduleName = dirs(i).name;
        if contains(moduleName, 'ForTest') || contains(moduleName, '_bug') || ...
           contains(moduleName, 'Copy_of') || contains(moduleName, 'ModeAdjustArch') || ...
           contains(moduleName, 'ModeAdjustCaller')
            continue;
        end
        
        harnSlx = fullfile(archDir, moduleName, [moduleName '_harness.slx']);
        testDataMat = fullfile(archDir, moduleName, ...
            ['UT_' moduleName '_harness'], 'testData_tab.mat');
        
        if exist(harnSlx, 'file') && ~exist(testDataMat, 'file')
            moduleList{end+1} = moduleName;
        end
    end
    moduleList = sort(moduleList);
end


function sts = processModule(archDir, moduleName, simTimeSec, sampleTime)
% Process a single module: create UT harness data infrastructure
    sts = false;
    
    moduleDir = fullfile(archDir, moduleName);
    harnMdl = [moduleName '_harness'];
    harnSlx = fullfile(moduleDir, [harnMdl '.slx']);
    utFolder = fullfile(moduleDir, ['UT_' moduleName '_harness']);
    
    %% Load harness model
    fprintf('[BatchUT]   Loading harness: %s\n', harnMdl);
    load_system(harnSlx);
    
    %% Get Signal Builder info
    blk = [harnMdl '/Harness Inputs'];
    try
        [~, ~, signames, groupnames] = signalbuilder(blk);
    catch
        % No Signal Builder block found
        fprintf('[BatchUT]   No Signal Builder block found in %s\n', harnMdl);
        sts = false;
        return;
    end
    
    if isempty(signames)
        fprintf('[BatchUT]   No signals in Signal Builder for %s\n', moduleName);
        sts = false;
        return;
    end
    
    fprintf('[BatchUT]   Found %d signals: %s\n', numel(signames), strjoin(signames, ', '));
    
    % Get model output ports (for expected values)
    outNames = {};
    % Method 1: Root-level Outport blocks
    outPorts = find_system(harnMdl, 'SearchDepth', 1, 'BlockType', 'Outport');
    for j = 1:numel(outPorts)
        nm = get_param(outPorts{j}, 'Name');
        if ~isempty(nm) && ~contains(nm, 'Harness')
            outNames{end+1} = nm;
        end
    end
        
    % Method 2: To Workspace blocks
    if isempty(outNames)
        twBlocks = find_system(harnMdl, 'SearchDepth', 3, 'BlockType', 'ToWorkspace');
        for j = 1:numel(twBlocks)
            varName = get_param(twBlocks{j}, 'VariableName');
            if ~isempty(varName)
                outNames{end+1} = varName;
            end
        end
    end
        
    % Method 3: Signal logging via DataLogging or Outport inside subsystem
    if isempty(outNames)
        % Try to find Outports inside the Harness Inputs subsystem area
        allOutports = find_system(harnMdl, 'BlockType', 'Outport');
        for j = 1:numel(allOutports)
            nm = get_param(allOutports{j}, 'Name');
            if ~isempty(nm) && ~contains(nm, 'Harness') && ~ismember(nm, outNames)
                outNames{end+1} = nm;
            end
        end
    end
    
    fprintf('[BatchUT]   Output ports: %s\n', strjoin(outNames, ', '));
    
    %% Get model stop time and sample time
    try
        mdlStopTime = str2double(get_param(harnMdl, 'StopTime'));
        mdlSampleTime = str2double(get_param(harnMdl, 'FixedStep'));
    catch
        mdlStopTime = simTimeSec;
        mdlSampleTime = sampleTime;
    end
    
    stopTime = min(mdlStopTime, simTimeSec);
    if isnan(mdlSampleTime) || mdlSampleTime <= 0
        mdlSampleTime = sampleTime;
    end
    
    timeVec = 0:mdlSampleTime:stopTime;
    
    %% Create directory structure
    fprintf('[BatchUT]   Creating directories...\n');
    if ~exist(utFolder, 'dir')
        mkdir(utFolder);
    end
    inputDir = fullfile(utFolder, 'InputData');
    if ~exist(inputDir, 'dir')
        mkdir(inputDir);
    end
    calDir = fullfile(utFolder, 'CalData');
    if ~exist(calDir, 'dir')
        mkdir(calDir);
    end
    utModelDir = fullfile(utFolder, 'UnitTestModel');
    if ~exist(utModelDir, 'dir')
        mkdir(utModelDir);
    end
    
    %% Copy harness model to UnitTestModel
    destSlx = fullfile(utModelDir, [harnMdl '.slx']);
    if ~exist(destSlx, 'file')
        copyfile(harnSlx, destSlx);
        fprintf('[BatchUT]   Copied harness to UnitTestModel/\n');
    end
    
    % Also copy the module .slx if it exists
    moduleSlx = fullfile(moduleDir, [moduleName '.slx']);
    if exist(moduleSlx, 'file')
        destModSlx = fullfile(utModelDir, [moduleName '.slx']);
        if ~exist(destModSlx, 'file')
            copyfile(moduleSlx, destModSlx);
        end
    end
    
    %% Create Default.mat calibration data
    fprintf('[BatchUT]   Creating Default.mat...\n');
    defaultMatPath = fullfile(calDir, 'Default.mat');
    if ~exist(defaultMatPath, 'file')
        % Create minimal calibration: empty struct
        emptyDummyVariable = 0;
        save(defaultMatPath, 'emptyDummyVariable');
    end
    
    %% Define test cases
    % Create 2 basic test cases:
    %   TC0010: All zeros (baseline)
    %   TC0020: Step inputs (stimulus)
    tcNames = {[moduleName '_0010'], [moduleName '_0020']};
    
    %% Create input datasets and expected values
    fprintf('[BatchUT]   Creating test case data...\n');
    
    for tcIdx = 1:numel(tcNames)
        tcName = tcNames{tcIdx};
        
        % Create Dataset for inputs
        ds = Simulink.SimulationData.Dataset;
        ds.Name = tcName;
        
        for si = 1:numel(signames)
            sigName = strtrim(signames{si});
            
            if tcIdx == 1
                % TC0010: All zeros
                sigData = zeros(size(timeVec));
            else
                % TC0020: Step function (0 for first half, 1 for second half)
                midIdx = round(numel(timeVec) / 2);
                sigData = zeros(size(timeVec));
                sigData(midIdx:end) = 1;
            end
            
            ts = timeseries(sigData, timeVec, 'Name', sigName);
            ds = addElement(ds, ts, sigName);
        end
        
        % Save input dataset
        dsVarName = ['ds_' tcName];
        dsFilePath = fullfile(inputDir, [dsVarName '.mat']);
        saveStruct.(dsVarName) = ds;
        save(dsFilePath, '-struct', 'saveStruct', dsVarName);
        
        % Create expected values (zeros for baseline, matching for step)
        if ~isempty(outNames)
            dsExp = Simulink.SimulationData.Dataset;
            dsExp.Name = ['expectedValues_' tcName];
            
            for oi = 1:numel(outNames)
                outName = strtrim(outNames{oi});
                % Expected: all zeros (safe default - engineer should update)
                expData = zeros(size(timeVec));
                ts = timeseries(expData, timeVec);
                dsExp = addElement(dsExp, ts, outName);
            end
            
            expVarName = ['expectedValues_' tcName];
            expFilePath = fullfile(inputDir, [expVarName '.mat']);
            expStruct.(expVarName) = dsExp;
            save(expFilePath, '-struct', 'expStruct', expVarName);
        end
    end
    
    %% Create testData_tab.mat
    fprintf('[BatchUT]   Creating testData_tab.mat...\n');
    
    % Build the testDataFromExcel table
    numTC = numel(tcNames);
    timeCell = cell(numTC, 1);
    inNamesCell = cell(numTC, 1);
    inDataCell = cell(numTC, 1);
    outNamesCell = cell(numTC, 1);
    outDataCell = cell(numTC, 1);
    absTolCell = cell(numTC, 1);
    relTolCell = cell(numTC, 1);
    timeTolCell = cell(numTC, 1);
    calSetCell = cell(numTC, 1);
    
    for tcIdx = 1:numTC
        timeCell{tcIdx} = timeVec(:);
        inNamesCell{tcIdx} = signames;
        inDataCell{tcIdx} = zeros(numel(timeVec), numel(signames));
        outNamesCell{tcIdx} = outNames;
        
        % Output data: NaN means "don't check" - safe for initial tests
        outData = NaN(numel(timeVec), numel(outNames));
        outDataCell{tcIdx} = outData;
        
        % Tolerances
        tolList = cell(1, numel(outNames));
        for k = 1:numel(outNames)
            tolList{k} = 0.01;  % default abs tolerance
        end
        absTolCell{tcIdx} = tolList;
        
        relTolList = cell(1, numel(outNames));
        for k = 1:numel(outNames)
            relTolList{k} = NaN;
        end
        relTolCell{tcIdx} = relTolList;
        
        timeTolCell{tcIdx} = {'0/0'};
        calSetCell{tcIdx} = 'Default';
    end
    
    % Create table
    tcNameCol = tcNames(:);
    testDataFromExcel = table(tcNameCol, timeCell, inNamesCell, inDataCell, ...
        outNamesCell, outDataCell, absTolCell, relTolCell, timeTolCell, calSetCell, ...
        'VariableNames', {'tcName','time','inNames','inData','outNames','outData', ...
                          'AbsTol','RelTol','TimeTol','calSet'});
    
    % Set Description: "harnessModel.slx && excelFile"
    xlsName = [moduleName '_harness'];
    testDataFromExcel.Properties.Description = [harnMdl '.slx && ' xlsName];
    
    % Save
    save(fullfile(utFolder, 'testData_tab.mat'), 'testDataFromExcel');
    
    %% Create Excel template
    fprintf('[BatchUT]   Creating Excel template...\n');
    xlsPath = fullfile(moduleDir, [xlsName '.xlsx']);
    if ~exist(xlsPath, 'file')
        createExcelTemplate(xlsPath, moduleName, signames, outNames, ...
            timeVec, simTimeSec, mdlSampleTime);
    end
    
    %% Close model
    try
        close_system(harnMdl, 0);
    catch
    end
    
    sts = true;
end


function createExcelTemplate(xlsPath, moduleName, inSigNames, outSigNames, ...
    timeVec, simTime, sampleTime)
% Create a basic Excel template for the test cases
    
    try
        % Use writetable/writematrix approach (simpler, no ActiveX needed)
        
        %% Sheet 1: Test Case Description
        tcDescData = {
            'Test Case Name', 'Description', 'Cal Set', 'Status';
            [moduleName '_0010'], 'All-zero baseline', 'Default', '';
            [moduleName '_0020'], 'Step input stimulus', 'Default', '';
        };
        writetable(cell2table(tcDescData(2:end,:)), xlsPath, 'Sheet', 'Test Case Description', ...
            'WriteVariableNames', false);
        % Write header
        writematrix(tcDescData(1,:), xlsPath, 'Sheet', 'Test Case Description', ...
            'Range', 'A1');
        
        %% Sheet 2: Cal
        calData = {'Parameter', 'Description', 'DataType', 'Min', 'Max', 'Unit', 'Default'};
        writematrix(calData, xlsPath, 'Sheet', 'Cal', 'Range', 'A1');
        
        %% Sheet 3: ZOH or INT
        zohData = {'Signal', 'Method'};
        for i = 1:numel(inSigNames)
            zohData{i+1, 1} = strtrim(inSigNames{i});
            zohData{i+1, 2} = 'ZOH';
        end
        writematrix(zohData, xlsPath, 'Sheet', 'ZOH or INT', 'Range', 'A1');
        
        %% Sheet 4+: Test case data sheets
        for tcIdx = 1:2
            tcName = [moduleName '_' sprintf('%04d', tcIdx * 10)];
            
            % Build data matrix
            % Row 1: Header with signal names
            % Row 2: TimeTol and tolerances
            % Row 3+: Time + data
            
            headerRow = {'Time', 'TimeTol'};
            for k = 1:numel(inSigNames)
                headerRow{end+1} = strtrim(inSigNames{k});
            end
            headerRow{end+1} = 'Outputs Start Here';
            for k = 1:numel(outSigNames)
                headerRow{end+1} = strtrim(outSigNames{k});
                headerRow{end+1} = 'AbsTol';
                headerRow{end+1} = 'RelTol';
                headerRow{end+1} = 'ZOH/INT';
                headerRow{end+1} = 'TimeTol';
            end
            
            % Tolerance row
            tolRow = {'', '0/0'};
            for k = 1:numel(inSigNames)
                tolRow{end+1} = '';
            end
            tolRow{end+1} = '';
            for k = 1:numel(outSigNames)
                tolRow{end+1} = '';
                tolRow{end+1} = 0.01;
                tolRow{end+1} = NaN;
                tolRow{end+1} = 'ZOH';
                tolRow{end+1} = '0/0';
            end
            
            % Data rows
            dataRows = cell(numel(timeVec), numel(headerRow));
            for t = 1:numel(timeVec)
                dataRows{t, 1} = timeVec(t);
                dataRows{t, 2} = NaN;  % TimeTol placeholder
                for k = 1:numel(inSigNames)
                    if tcIdx == 1
                        dataRows{t, 2+k} = 0;
                    else
                        % Step: 0 for first half, 1 for second half
                        midIdx = round(numel(timeVec) / 2);
                        if t >= midIdx
                            dataRows{t, 2+k} = 1;
                        else
                            dataRows{t, 2+k} = 0;
                        end
                    end
                end
                dataRows{t, 3+numel(inSigNames)} = '';  % Outputs Start Here
                for k = 1:numel(outSigNames)
                    baseCol = 3 + numel(inSigNames) + (k-1)*5;
                    dataRows{t, baseCol} = NaN;      % output value (NaN = don't check)
                    dataRows{t, baseCol+1} = NaN;    % AbsTol
                    dataRows{t, baseCol+2} = NaN;    % RelTol
                    dataRows{t, baseCol+3} = NaN;    % ZOH/INT
                    dataRows{t, baseCol+4} = NaN;    % TimeTol
                end
            end
            
            % Combine all rows
            allData = [headerRow; tolRow; dataRows];
            
            % Write to sheet
            try
                writematrix(allData(:,1:2+numel(inSigNames)), xlsPath, 'Sheet', tcName, 'Range', 'A1');
                % Write output columns
                outStartCol = 3 + numel(inSigNames);
                colLetter = xlsColIdx(outStartCol);
                writematrix(allData(:, outStartCol:end), xlsPath, 'Sheet', tcName, ...
                    'Range', [colLetter '1']);
            catch ME
                fprintf('[BatchUT]   Warning: Excel write error for %s - %s\n', tcName, ME.message);
            end
        end
        
    catch ME
        fprintf('[BatchUT]   Warning: Could not create Excel template - %s\n', ME.message);
        fprintf('[BatchUT]   (testData_tab.mat was still created successfully)\n');
    end
end


function col = xlsColIdx(idx)
% Convert 1-based column index to Excel column letter(s)
    col = '';
    while idx > 0
        idx = idx - 1;
        col = char(mod(idx, 26) + 65) + col;
        idx = floor(idx / 26);
    end
end
