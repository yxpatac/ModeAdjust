Obj=arxml.importer('DrvStFtEnServer_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/DrvStFtEnServer','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'DrvStFtEnServer.slx');