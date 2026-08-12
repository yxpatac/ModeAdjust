Obj=arxml.importer('StNumChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/StNumChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'StNumChk.slx');