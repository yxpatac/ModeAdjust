Obj=arxml.importer('ThdRwRtStCalib_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ThdRwRtStCalib','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ThdRwRtStCalib.slx');