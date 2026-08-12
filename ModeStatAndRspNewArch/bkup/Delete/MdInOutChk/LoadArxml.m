Obj=arxml.importer('MdInOutChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdInOutChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdInOutChk.slx');