function fixDrvStRclCmdSrvCal()
% FIXDRVSTRCLCMDSRVCAL  Fix Default.mat for DrvStRclCmdSrvCal
%   Only add KeSMSwPosInvalidVal_Val; PowerMode1 enum is auto-registered by CI runner.

projectRoot = fileparts(fileparts(mfilename('fullpath')));
calDir = fullfile(projectRoot, 'ModeAdjustNewArch', 'DrvStRclCmdSrvCal', ...
                  'UT_DrvStRclCmdSrvCal_harness', 'CalData');
defaultMatPath = fullfile(calDir, 'Default.mat');

if ~exist(calDir, 'dir')
    mkdir(calDir);
end

% Load existing
existingVars = struct();
if exist(defaultMatPath, 'file')
    existingVars = load(defaultMatPath);
    fprintf('Existing vars: %s\n', strjoin(fieldnames(existingVars), ', '));
end

% Add KeSMSwPosInvalidVal_Val
KeSMSwPosInvalidVal_Val = int16(0);
if ~isfield(existingVars, 'KeSMSwPosInvalidVal_Val')
    existingVars.KeSMSwPosInvalidVal_Val = KeSMSwPosInvalidVal_Val;
    fprintf('Added: KeSMSwPosInvalidVal_Val = int16(0)\n');
end

% Save all
fieldNames = fieldnames(existingVars);
saveArgs = {defaultMatPath};
for fi = 1:numel(fieldNames)
    eval([fieldNames{fi} ' = existingVars.(fieldNames{fi});']);
    saveArgs{end+1} = fieldNames{fi};
end
save(saveArgs{:});
fprintf('OK: Default.mat updated with %d vars\n', numel(fieldNames));
end
