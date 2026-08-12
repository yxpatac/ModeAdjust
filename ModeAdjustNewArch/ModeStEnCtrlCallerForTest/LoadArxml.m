Obj=arxml.importer('ModeStEnCtrlCaller_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ModeStEnCtrlCaller','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ModeStEnCtrlCaller.slx');