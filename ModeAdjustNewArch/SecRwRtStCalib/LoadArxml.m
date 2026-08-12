Obj=arxml.importer('SecRwRtStCalib_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/SecRwRtStCalib','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'SecRwRtStCalib.slx');