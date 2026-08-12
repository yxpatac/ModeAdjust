Obj=arxml.importer('INTMRStEnCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/INTMRStEnCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'INTMRStEnCtrl.slx');