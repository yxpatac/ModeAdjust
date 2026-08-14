function fixRemainingCalSys()
% FIXREMAININGCALSYS  Fix Default.mat for remaining 8 Invalid parameter modules
%   Run #15 showed 8 modules still with "Invalid setting" errors.
%   This script finds their Cal_sys/Init variable references and updates Default.mat.

projectRoot = fileparts(fileparts(mfilename('fullpath')));
fprintf('[Fix2] Project root: %s\n', projectRoot);

% 8 modules that still have Invalid parameter errors in Run #15
failingModules = {
    'DrvStRclCmdSrvCal', ...
    'SecRwLtStHeightChk', ...
    'SecRwLtStLgrstInwdOtwdCtrl', ...
    'SecRwLtStLgrstUpwdDnwdCtrl', ...
    'SecRwRtStHeightChk', ...
    'SecRwRtStLgrstUpwdDnwdCtrl', ...
    'ThdRwLtStBkReclnCtrl', ...
    'ThdRwLtStFwdBkwdCtrl'
};

% Search directories for module .slx files
searchDirs = {
    fullfile(projectRoot, 'ModeAdjustNewArch')
    fullfile(projectRoot, 'ModeStatAndRspNewArch')
    fullfile(projectRoot, 'ModeAdjustPre')
    fullfile(projectRoot, 'StNumChk')
    fullfile(projectRoot, 'ThdRwStOccupyChk')
};

successCount = 0;
failCount = 0;
skipCount = 0;

for i = 1:numel(failingModules)
    moduleName = failingModules{i};
    fprintf('\n[Fix2] %d/%d: %s\n', i, numel(failingModules), moduleName);
    
    % Find module .slx
    moduleSlx = '';
    for di = 1:numel(searchDirs)
        candidate = fullfile(searchDirs{di}, moduleName, [moduleName '.slx']);
        if exist(candidate, 'file')
            moduleSlx = candidate;
            break;
        end
    end
    
    if isempty(moduleSlx)
        fprintf('  SKIP: module .slx not found in any search dir\n');
        skipCount = skipCount + 1;
        continue;
    end
    
    % Find UT harness folder (look for CalData)
    moduleDir = fileparts(moduleSlx);
    utFolder = '';
    d = dir(fullfile(moduleDir, 'UT_*_harness'));
    for di = 1:numel(d)
        if d(di).isdir
            utFolder = fullfile(moduleDir, d(di).name);
            break;
        end
    end
    
    if isempty(utFolder)
        fprintf('  SKIP: UT harness folder not found\n');
        skipCount = skipCount + 1;
        continue;
    end
    
    calDir = fullfile(utFolder, 'CalData');
    defaultMatPath = fullfile(calDir, 'Default.mat');
    
    fprintf('  Module: %s\n', moduleSlx);
    fprintf('  Harness: %s\n', utFolder);
    
    try
        load_system(moduleSlx);
        
        % Find ALL Constant blocks in the module
        allConst = find_system(moduleName, 'BlockType', 'Constant');
        calConst = {};
        for ci = 1:numel(allConst)
            blk = allConst{ci};
            % Match Cal_sys, Init, _Cal, or any calibration-related subsystem
            if contains(blk, 'Cal_sys') || contains(blk, 'Init') || ...
               contains(blk, '_Cal') || contains(blk, 'Calc_sys')
                calConst{end+1} = blk;
            end
        end
        
        fprintf('  Found %d Cal/Init Constant blocks (out of %d total)\n', ...
                numel(calConst), numel(allConst));
        
        % Extract variable references (not hardcoded numbers)
        varNames = {};
        varDetails = {};
        for ci = 1:numel(calConst)
            blk = calConst{ci};
            try
                val = get_param(blk, 'Value');
                numVal = str2double(val);
                if isnan(numVal) && ~isempty(val)
                    % It's a variable reference (not a pure number)
                    varNames{end+1} = val;
                    [~, blkName] = fileparts(blk);
                    varDetails{end+1} = sprintf('%s => %s', blkName, val);
                end
            catch ME
                fprintf('  WARN: Could not read %s: %s\n', blk, ME.message);
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
        fprintf('  Found %d unique variable references:\n', numel(varNames));
        for vi = 1:numel(varNames)
            fprintf('    %s\n', varNames{vi});
        end
        
        % Create/update Default.mat
        if ~exist(calDir, 'dir')
            mkdir(calDir);
        end
        
        % Load existing Default.mat if it exists, to preserve existing vars
        existingVars = struct();
        if exist(defaultMatPath, 'file')
            existingVars = load(defaultMatPath);
        end
        
        % Add new variables = int16(0), don't overwrite existing
        for vi = 1:numel(varNames)
            if ~isfield(existingVars, varNames{vi})
                existingVars.(varNames{vi}) = int16(0);
            end
        end
        
        % Save all variables
        fieldNames = fieldnames(existingVars);
        saveArgs = {defaultMatPath};
        for fi = 1:numel(fieldNames)
            eval([fieldNames{fi} ' = existingVars.(fieldNames{fi});']);
            saveArgs{end+1} = fieldNames{fi};
        end
        save(saveArgs{:});
        
        fprintf('  OK: Default.mat updated (total %d vars)\n', numel(fieldNames));
        successCount = successCount + 1;
        
    catch ME
        fprintf('  ERROR: %s\n', ME.message);
        failCount = failCount + 1;
        try close_system(moduleName, 0); catch; end
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
