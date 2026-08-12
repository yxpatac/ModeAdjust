Obj=arxml.importer('PassStCaller_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/PassStCaller','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'PassStCaller.slx');