Obj=arxml.importer('PassStFtCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/PassStFtCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'PassStFtCtrl.slx');