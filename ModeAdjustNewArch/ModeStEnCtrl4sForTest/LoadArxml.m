Obj=arxml.importer('ModeStEnCtrl4s_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ModeStEnCtrl4s','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ModeStEnCtrl4s.slx');