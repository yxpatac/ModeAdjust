Obj=arxml.importer('SecRwLtStCalib_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/SecRwLtStCalib','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'SecRwLtStCalib.slx');