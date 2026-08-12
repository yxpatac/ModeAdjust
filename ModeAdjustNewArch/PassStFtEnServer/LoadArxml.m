Obj=arxml.importer('PassStFtEnServer_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/PassStFtEnServer','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'PassStFtEnServer.slx');