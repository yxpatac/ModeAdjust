Obj=arxml.importer('SecRwLtStCaller_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/SecRwLtStCaller','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'SecRwLtStCaller.slx');