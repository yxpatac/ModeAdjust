function fixCalSysDefaults()
% FIXCALSYSDEFAULTS  Fix Default.mat for modules with workspace variable references
%   Scans each module's .slx for Constant blocks in Cal_sys that reference
%   workspace variables (not hardcoded numbers), then creates/updates
%   Default.mat with those variables set to 0.
%
%   Usage: matlab -batch "cd('project_root'); run('scripts/fixCalSysDefaults.m')"

projectRoot = fileparts(fileparts(mfilename('fullpath')));
archDir = fullfile(projectRoot, 'ModeAdjustNewArch');
fprintf('[FixCal] Project root: %s\n', projectRoot);

% All modules that had "Invalid setting" errors in CI Run #12
failingModules = {
    'DrvStFtCtrl', 'DrvStFtIsPosChk', 'DrvStFtTrgtPosSelc', ...
    'EZEStEnCtrl', 'EZQ4sLStEnCtrl', 'EZQ4sRStEnCtrl', ...
    'LgrstClsLStEnCtrl', 'LgrstClsRStEnCtrl', ...
    'PassStFtIsPosChk', 'PassStFtTrgtPosSelc', ...
    'RecvL4sStEnCtrl', ...
    'SecRwLtStArmScrnCtrl', 'SecRwLtStFtrstCtrl', 'SecRwLtStFtrstIsPosChk', ...
    'SecRwLtStFtrstTrgtPosSelc', 'SecRwLtStFwdBkwdCtrl', ...
    'SecRwLtStHdrstFwdBkwdCtrl', 'SecRwLtStHdrstFwdBkwdTrgtPosSelc', ...
    'SecRwLtStHdrstUpwdDnwdCtrl', 'SecRwLtStHdrstUpwdDnwdIsPosChk', ...
    'SecRwLtStHeightChk', 'SecRwLtStLtwdRtwdCtrl', ...
    'SecRwRtStArmScrnCtrl', 'SecRwRtStBkReclnCtrl', ...
    'SecRwRtStFtrstCtrl', 'SecRwRtStFtrstIsPosChk', ...
    'SecRwRtStFtrstTrgtPosSelc', 'SecRwRtStFwdBkwdCtrl', ...
    'SecRwRtStHdrstFwdBkwdCtrl', 'SecRwRtStHdrstFwdBkwdIsPosChk', ...
    'SecRwRtStHdrstUpwdDnwdCtrl', 'SecRwRtStHdrstUpwdDnwdIsPosChk', ...
    'SecRwRtStHdrstUpwdDnwdTrgtPosSelc', 'SecRwRtStHeightChk', ...
    'SecRwRtStLtwdRtwdCtrl', ...
    'ThdRwLtStCshnFldCtrl', 'ThdRwRtStBkReclnCtrl', ...
    'ThdRwRtStCshnFldCtrl', 'ThdRwRtStFwdBkwdCtrl', ...
    'WelcomeFwdStEnCtrl', ...
    'MdXX_QuitReason'
};

successCount = 0;
failCount = 0;
skipCount = 0;

for i = 1:numel(failingModules)
    moduleName = failingModules{i};
    fprintf('\n[FixCal] %d/%d: %s\n', i, numel(failingModules), moduleName);
    
    moduleSlx = fullfile(archDir, moduleName, [moduleName '.slx']);
    utFolder = fullfile(archDir, moduleName, ['UT_' moduleName '_harness']);
    calDir = fullfile(utFolder, 'CalData');
    defaultMatPath = fullfile(calDir, 'Default.mat');
    
    % Check files exist
    if ~exist(moduleSlx, 'file')
        fprintf('  SKIP: module .slx not found\n');
        skipCount = skipCount + 1;
        continue;
    end
    if ~exist(utFolder, 'dir')
        fprintf('  SKIP: UT harness folder not found\n');
        skipCount = skipCount + 1;
        continue;
    end
    
    try
        load_system(moduleSlx);
        
        % Find all Constant blocks in Cal_sys / Init subsystems
        allConst = find_system(moduleName, 'BlockType', 'Constant');
        calConst = {};
        for ci = 1:numel(allConst)
            blk = allConst{ci};
            if contains(blk, 'Cal_sys') || contains(blk, 'Init') || contains(blk, '_Cal')
                calConst{end+1} = blk;
            end
        end
        
        % Extract variable references (not hardcoded numbers)
        varNames = {};
        for ci = 1:numel(calConst)
            blk = calConst{ci};
            try
                val = get_param(blk, 'Value');
                % Check if value is a variable reference (not a pure number)
                numVal = str2double(val);
                if isnan(numVal) && ~isempty(val)
                    % It's a variable reference
                    varNames{end+1} = val;
                end
            catch
            end
        end
        
        close_system(moduleName, 0);
        
        if isempty(varNames)
            fprintf('  SKIP: no variable references found\n');
            skipCount = skipCount + 1;
            continue;
        end
        
        % Remove duplicates
        varNames = unique(varNames);
        fprintf('  Found %d variable references\n', numel(varNames));
        
        % Create Default.mat with all variables set to 0
        if ~exist(calDir, 'dir')
            mkdir(calDir);
        end
        
        % Build struct with all variables = 0
        calStruct = struct();
        for vi = 1:numel(varNames)
            calStruct.(varNames{vi}) = int16(0);  % fixdt(1,16,0) = int16
        end
        
        % Save as Default.mat
        fieldNames = fieldnames(calStruct);
        saveArgs = {defaultMatPath};
        for fi = 1:numel(fieldNames)
            % Create variables in local workspace
            eval([fieldNames{fi} ' = calStruct.(fieldNames{fi});']);
            saveArgs{end+1} = fieldNames{fi};
        end
        save(saveArgs{:});
        
        fprintf('  OK: Default.mat updated with %d variables\n', numel(varNames));
        for vi = 1:numel(varNames)
            fprintf('    %s = 0\n', varNames{vi});
        end
        
        successCount = successCount + 1;
        
    catch ME
        fprintf('  ERROR: %s\n', ME.message);
        failCount = failCount + 1;
        try close_system(moduleName, 0); catch; end
    end
end

% Also handle MdXX_QuitReason which is in ModeStatAndRspNewArch
fprintf('\n[FixCal] Checking MdXX_QuitReason (ModeStatAndRspNewArch)...\n');
mdxxSlx = fullfile(projectRoot, 'ModeStatAndRspNewArch', 'MdXX_QuitReason', 'MdXX_QuitReason.slx');
mdxxUt = fullfile(projectRoot, 'ModeStatAndRspNewArch', 'MdXX_QuitReason', 'UT_MdXX_QuitReason_harness');
if exist(mdxxSlx, 'file') && exist(mdxxUt, 'dir')
    try
        load_system(mdxxSlx);
        allConst = find_system('MdXX_QuitReason', 'BlockType', 'Constant');
        calConst = {};
        for ci = 1:numel(allConst)
            blk = allConst{ci};
            if contains(blk, 'Calc_sys') || contains(blk, 'Cal_sys') || contains(blk, 'Init')
                calConst{end+1} = blk;
            end
        end
        varNames = {};
        for ci = 1:numel(calConst)
            blk = calConst{ci};
            try
                val = get_param(blk, 'Value');
                numVal = str2double(val);
                if isnan(numVal) && ~isempty(val)
                    varNames{end+1} = val;
                end
            catch
            end
        end
        close_system('MdXX_QuitReason', 0);
        
        % The error was about "Constant1" with hardcoded value - check all constants
        % in Calc_sys
        load_system(mdxxSlx);
        calcConst = find_system('MdXX_QuitReason', 'BlockType', 'Constant');
        for ci = 1:numel(calcConst)
            blk = calcConst{ci};
            if contains(blk, 'Calc_sys')
                val = get_param(blk, 'Value');
                [~, blkName] = fileparts(blk);
                fprintf('  %s => Value="%s"\n', blkName, val);
            end
        end
        close_system('MdXX_QuitReason', 0);
        
        fprintf('  Variable refs: %d\n', numel(varNames));
    catch ME
        fprintf('  ERROR: %s\n', ME.message);
        try close_system('MdXX_QuitReason', 0); catch; end
    end
end

fprintf('\n========================================\n');
fprintf('  Fix Summary\n');
fprintf('========================================\n');
fprintf('  Success: %d\n', successCount);
fprintf('  Skip:    %d\n', skipCount);
fprintf('  Fail:    %d\n', failCount);
fprintf('========================================\n');
end
