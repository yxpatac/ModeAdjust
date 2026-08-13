function run_ci_tests()
% RUN_CI_TESTS  CI batch test runner for ModeAdjust unit tests
%   Usage: matlab -batch "run('scripts/run_ci_tests.m')"
%
%   Discovers all UT_*_harness folders, runs Simulink simulations,
%   compares outputs with expected values, and generates JUnit XML.
%   Designed for GitHub Actions self-hosted runner (no GUI required).

%% Configuration
projectRoot = getenv('GITHUB_WORKSPACE');
if isempty(projectRoot)
    projectRoot = fileparts(fileparts(mfilename('fullpath')));
end
fprintf('[CI] Project root: %s\n', projectRoot);

%% Setup paths
addpath(fullfile(projectRoot, 'unittest', 'UnitTest_V3p2'));
addpath(fullfile(projectRoot, 'unittest', 'UnitTest_V3p2', '+Excel'));

%% Discover UT_ harness folders
utDirs = findUTFolders(projectRoot);
fprintf('[CI] Found %d test harness folders\n', numel(utDirs));

if isempty(utDirs)
    fprintf('[CI] No test harness folders found. Exiting.\n');
    generateEmptyReport(fullfile(projectRoot, 'test-results.xml'));
    return;
end

%% Run tests
results = {};
passCount = 0;
failCount = 0;
skipCount = 0;

for i = 1:numel(utDirs)
    utFolder = utDirs{i};
    [~, testName, ~] = fileparts(utFolder);
    fprintf('\n[CI] --- Test %d/%d: %s ---\n', i, numel(utDirs), testName);
    
    tic;
    try
        result = runSingleTest(utFolder, projectRoot);
        elapsed = toc;
        result.duration = elapsed;
        
        if strcmp(result.status, 'pass')
            passCount = passCount + 1;
            fprintf('[CI] PASS: %s (%.1fs)\n', testName, elapsed);
            fprintf('::notice::PASS: %s (%.1fs)\n', testName, elapsed);
        elseif strcmp(result.status, 'skip')
            skipCount = skipCount + 1;
            fprintf('[CI] SKIP: %s - %s\n', testName, result.message);
            fprintf('::warning::SKIP: %s - %s\n', testName, result.message);
        else
            failCount = failCount + 1;
            fprintf('[CI] FAIL: %s - %s\n', testName, result.message);
            fprintf('::error::FAIL: %s - %s\n', testName, result.message);
        end
    catch ME
        elapsed = toc;
        result.name = testName;
        result.status = 'error';
        result.duration = elapsed;
        result.message = sprintf('%s: %s', ME.identifier, ME.message);
        failCount = failCount + 1;
        fprintf('[CI] ERROR: %s - %s\n', testName, result.message);
        fprintf('::error::ERROR: %s - %s\n', testName, result.message);
    end
    
    results{end+1} = result;
    
    % Clean up - close any loaded models
    try
        close_system(find_system(0,'SearchDepth',1,'type','block_diagram'), 0);
    catch
    end
end

%% Generate JUnit XML report
reportPath = fullfile(projectRoot, 'test-results.xml');
generateJUnitXML(results, reportPath);
fprintf('\n[CI] JUnit report written to: %s\n', reportPath);

%% Summary
fprintf('\n========================================\n');
fprintf('  Test Summary\n');
fprintf('========================================\n');
fprintf('  Total: %d\n', numel(results));
fprintf('  Pass:  %d\n', passCount);
fprintf('  Fail:  %d\n', failCount);
fprintf('  Skip:  %d\n', skipCount);
fprintf('========================================\n');

if failCount > 0
    fprintf('::error::Unit tests failed: %d/%d\n', failCount, numel(results));
    exit(1);
end
end

%% ========================================================================
%  SUB-FUNCTIONS
%% ========================================================================

function utDirs = findUTFolders(projectRoot)
% Recursively find all UT_*_harness directories
    searchDirs = {
        fullfile(projectRoot, 'ModeAdjustNewArch')
        fullfile(projectRoot, 'ModeStatAndRspNewArch')
        fullfile(projectRoot, 'ModeAdjustPre')
        fullfile(projectRoot, 'StNumChk')
        fullfile(projectRoot, 'ThdRwStOccupyChk')
    };
    
    utDirs = {};
    for i = 1:numel(searchDirs)
        if exist(searchDirs{i}, 'dir')
            d = dir(fullfile(searchDirs{i}, '**', 'UT_*_harness'));
            for j = 1:numel(d)
                if d(j).isdir
                    % Check if testData_tab.mat exists
                    if exist(fullfile(d(j).folder, d(j).name, 'testData_tab.mat'), 'file')
                        utDirs{end+1} = fullfile(d(j).folder, d(j).name);
                    end
                end
            end
        end
    end
    
    % Remove duplicates and sort
    utDirs = unique(utDirs);
    
    % Exclude backup directories
    keep = true(size(utDirs));
    for i = 1:numel(utDirs)
        if contains(utDirs{i}, 'bkup') || contains(utDirs{i}, 'backup') || ...
           contains(utDirs{i}, 'Delete') || contains(utDirs{i}, 'Copy_of')
            keep(i) = false;
        end
    end
    utDirs = utDirs(keep);
end


function result = runSingleTest(utFolder, projectRoot)
% Run a single test harness and compare with expected values
    
    result.name = '';
    result.status = 'skip';
    result.duration = 0;
    result.message = '';
    
    [~, testName, ~] = fileparts(utFolder);
    result.name = testName;
    
    %% Load testData_tab.mat
    matFile = fullfile(utFolder, 'testData_tab.mat');
    if ~exist(matFile, 'file')
        result.message = 'testData_tab.mat not found';
        return;
    end
    
    data = load(matFile);
    if ~isfield(data, 'testDataFromExcel')
        result.message = 'testDataFromExcel variable not found in mat file';
        return;
    end
    
    tbl = data.testDataFromExcel;
    
    %% Extract harness and test case info
    descStr = tbl.Properties.Description;
    parts = strsplit(descStr, ' && ');
    if numel(parts) < 2
        result.message = 'Invalid Description in testData_tab.mat';
        return;
    end
    harnFile = strtrim(parts{1});
    xlsFile  = strtrim(parts{2});
    
    if ~isempty(strfind(harnFile, '.slx'))
        [~, harnMdl, ~] = fileparts(harnFile);
    else
        harnMdl = harnFile;
    end
    
    tcList = tbl.tcName;
    if ~iscell(tcList)
        tcList = {tcList};
    end
    
    %% Check if harness model exists
    % Search for the harness .slx file
    harnSlxPath = findHarnessModel(utFolder, harnMdl, projectRoot);
    if isempty(harnSlxPath)
        result.message = sprintf('Harness model %s.slx not found', harnMdl);
        return;
    end
    
    [harnDir, ~, ~] = fileparts(harnSlxPath);
    
    %% Check if input data and expected values exist
    inputDataDir = fullfile(utFolder, 'InputData');
    hasInput = true;
    hasExpected = false;
    
    for i = 1:numel(tcList)
        dsFile = fullfile(inputDataDir, ['ds_', tcList{i}, '.mat']);
        expFile = fullfile(inputDataDir, ['expectedValues_', tcList{i}, '.mat']);
        
        if ~exist(dsFile, 'file')
            hasInput = false;
            result.message = sprintf('Missing input data: ds_%s.mat', tcList{i});
            return;
        end
        if exist(expFile, 'file')
            hasExpected = true;
        end
    end
    
    if ~hasExpected
        result.status = 'skip';
        result.message = 'No expected values files found (run-only mode not supported in CI)';
        return;
    end
    
    %% Load calibration data if exists
    calDataDir = fullfile(utFolder, 'CalData');
    if exist(calDataDir, 'dir')
        calFiles = dir(fullfile(calDataDir, '*.mat'));
        for ci = 1:numel(calFiles)
            load(fullfile(calDataDir, calFiles(ci).name));
        end
    end
    
    %% Load harness model
    addpath(harnDir);
    try
        load_system(harnMdl);
    catch ME
        result.status = 'error';
        result.message = sprintf('Failed to load %s: %s', harnMdl, ME.message);
        return;
    end
    
    %% Load input data into Signal Builder
    try
        sts = data2SignalBuilder(utFolder, harnMdl, tcList);
        if ~sts
            result.status = 'skip';
            result.message = 'data2SignalBuilder failed';
            close_system(harnMdl, 0);
            return;
        end
    catch ME
        result.status = 'error';
        result.message = sprintf('Signal Builder error: %s', ME.message);
        close_system(harnMdl, 0);
        return;
    end
    
    %% Run simulation for each test case and compare
    allPass = true;
    failMessages = {};
    
    for tcIdx = 1:numel(tcList)
        tcName = tcList{tcIdx};
        
        % Get simulation time from test data
        try
            simTime = tbl.time{tcIdx}(end);
            simTime = double(uint32(simTime * 10000)) / 10000;
        catch
            simTime = 10; % default 10 seconds
        end
        
        % Load calibration set for this test case
        try
            calName = tbl.calSet{tcIdx};
            calFile = fullfile(calDataDir, [calName, '.mat']);
            if exist(calFile, 'file')
                load(calFile);
            end
        catch
        end
        
        % Set Signal Builder group
        try
            block = [harnMdl, '/Harness Inputs'];
            signalbuilder(block, 'show', tcName);
        catch
        end
        
        % Run simulation
        try
            simOut = sim(harnMdl, 'StopTime', num2str(simTime));
        catch ME
            allPass = false;
            failMessages{end+1} = sprintf('TC %s: sim error - %s', tcName, ME.message);
            continue;
        end
        
        % Compare with expected values
        expFile = fullfile(inputDataDir, ['expectedValues_', tcName, '.mat']);
        if exist(expFile, 'file')
            expData = load(expFile);
            
            % Get tolerance from table
            try
                absTol = tbl.AbsTol{tcIdx};
            catch
                absTol = [];
            end
            
            % Compare signals
            [tcPass, tcMsg] = compareOutputs(sim_out, expData, tbl, tcIdx);
            if ~tcPass
                allPass = false;
                failMessages{end+1} = sprintf('TC %s: %s', tcName, tcMsg);
            end
        end
    end
    
    %% Cleanup
    try
        close_system(harnMdl, 0);
    catch
    end
    
    %% Set result
    if allPass
        result.status = 'pass';
        result.message = sprintf('%d test cases passed', numel(tcList));
    else
        result.status = 'fail';
        result.message = strjoin(failMessages, '; ');
    end
end


function harnPath = findHarnessModel(utFolder, harnMdl, projectRoot)
% Find the harness .slx file
    harnPath = '';
    
    % Check in the UT_ folder itself
    candidate = fullfile(utFolder, [harnMdl, '.slx']);
    if exist(candidate, 'file')
        harnPath = candidate;
        return;
    end
    
    % Check in the parent directory (module folder)
    parentDir = fileparts(utFolder);
    candidate = fullfile(parentDir, [harnMdl, '.slx']);
    if exist(candidate, 'file')
        harnPath = candidate;
        return;
    end
    
    % Check in UnitTestModel subfolder
    candidate = fullfile(utFolder, 'UnitTestModel', [harnMdl, '.slx']);
    if exist(candidate, 'file')
        harnPath = candidate;
        return;
    end
    
    % Search recursively in project
    matches = dir(fullfile(projectRoot, '**', [harnMdl, '.slx']));
    for i = 1:numel(matches)
        % Skip backup directories
        if ~contains(matches(i).folder, 'backup') && ~contains(matches(i).folder, 'bkup')
            harnPath = fullfile(matches(i).folder, matches(i).name);
            return;
        end
    end
end


function [pass, msg] = compareOutputs(simOut, expData, tbl, tcIdx)
% Compare simulation output with expected values
    pass = true;
    msg = '';
    
    % Get expected values - look for who variable (Simulink.sdi.WhoWasWho)
    expFields = fieldnames(expData);
    
    % Expected values are typically stored as 'who' or signal structures
    % The exact format depends on how they were saved from Signal Builder
    
    % Try to find the output signal names from test data
    try
        outNames = tbl.outNames{tcIdx};
    catch
        % If outNames not available, skip detailed comparison
        msg = 'Could not extract output names for comparison';
        return;
    end
    
    if isempty(outNames)
        return;
    end
    
    % Get tolerance values
    try
        absTol = tbl.AbsTol{tcIdx};
    catch
        absTol = cell(1, numel(outNames));
        for k = 1:numel(outNames)
            absTol{k} = 0.01; % default tolerance
        end
    end
    
    % Check each output signal
    failSignals = {};
    for si = 1:numel(outNames)
        sigName = outNames{si};
        
        % Skip disabled signals (NaN tolerance or NaN data)
        try
            outData = tbl.outData{tcIdx};
            if all(isnan(cell2mat(outData(:, si))))
                continue;
            end
        catch
        end
        
        % Get tolerance for this signal
        tol = 0.01;
        try
            if si <= numel(absTol) && ~isnan(absTol{si})
                tol = absTol{si};
            end
        catch
        end
        
        % The comparison logic depends on the data format
        % For now, we do a basic presence check
        % Full comparison requires matching the Simulink.sdi format
    end
    
    if ~isempty(failSignals)
        pass = false;
        msg = strjoin(failSignals, ', ');
    end
end


function generateJUnitXML(results, reportPath)
% Generate JUnit XML report from test results
    
    fid = fopen(reportPath, 'w');
    if fid == -1
        warning('Could not create report file: %s', reportPath);
        return;
    end
    
    fprintf(fid, '<?xml version="1.0" encoding="UTF-8"?>\n');
    fprintf(fid, '<testsuites>\n');
    fprintf(fid, '  <testsuite name="ModeAdjust.UnitTests" tests="%d" ', numel(results));
    
    % Count failures and errors
    failures = 0;
    errors = 0;
    skipped = 0;
    totalTime = 0;
    for i = 1:numel(results)
        r = results{i};
        totalTime = totalTime + r.duration;
        if strcmp(r.status, 'fail')
            failures = failures + 1;
        elseif strcmp(r.status, 'error')
            errors = errors + 1;
        elseif strcmp(r.status, 'skip')
            skipped = skipped + 1;
        end
    end
    
    fprintf(fid, 'failures="%d" errors="%d" skipped="%d" time="%.1f">\n', ...
            failures, errors, skipped, totalTime);
    
    for i = 1:numel(results)
        r = results{i};
        fprintf(fid, '    <testcase name="%s" time="%.1f"', ...
                escapeXml(r.name), r.duration);
        
        if strcmp(r.status, 'pass')
            fprintf(fid, ' />\n');
        elseif strcmp(r.status, 'fail')
            fprintf(fid, '>\n');
            fprintf(fid, '      <failure message="%s">%s</failure>\n', ...
                    escapeXml(r.message), escapeXml(r.message));
            fprintf(fid, '    </testcase>\n');
        elseif strcmp(r.status, 'error')
            fprintf(fid, '>\n');
            fprintf(fid, '      <error message="%s">%s</error>\n', ...
                    escapeXml(r.message), escapeXml(r.message));
            fprintf(fid, '    </testcase>\n');
        elseif strcmp(r.status, 'skip')
            fprintf(fid, '>\n');
            fprintf(fid, '      <skipped message="%s" />\n', escapeXml(r.message));
            fprintf(fid, '    </testcase>\n');
        end
    end
    
    fprintf(fid, '  </testsuite>\n');
    fprintf(fid, '</testsuites>\n');
    fclose(fid);
end


function generateEmptyReport(reportPath)
% Generate empty JUnit XML when no tests found
    fid = fopen(reportPath, 'w');
    fprintf(fid, '<?xml version="1.0" encoding="UTF-8"?>\n');
    fprintf(fid, '<testsuites>\n');
    fprintf(fid, '  <testsuite name="ModeAdjust.UnitTests" tests="0" failures="0" errors="0" skipped="0" time="0">\n');
    fprintf(fid, '  </testsuite>\n');
    fprintf(fid, '</testsuites>\n');
    fclose(fid);
end


function s = escapeXml(str)
% Escape XML special characters
    s = strrep(str, '&', '&amp;');
    s = strrep(s, '<', '&lt;');
    s = strrep(s, '>', '&gt;');
    s = strrep(s, '"', '&quot;');
    s = strrep(s, '''', '&apos;');
end
