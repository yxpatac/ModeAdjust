Obj=arxml.importer('MdEnCtrlAndBsyChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdEnCtrlAndBsyChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdEnCtrlAndBsyChk.slx');