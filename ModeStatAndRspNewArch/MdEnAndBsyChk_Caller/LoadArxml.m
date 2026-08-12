Obj=arxml.importer('MdEnAndBsyChk_Caller_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdEnAndBsyChk_Caller','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdEnAndBsyChk_Caller.slx');