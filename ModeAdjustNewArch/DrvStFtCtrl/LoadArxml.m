Obj=arxml.importer('DrvStFtCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/DrvStFtCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'DrvStFtCtrl.slx');