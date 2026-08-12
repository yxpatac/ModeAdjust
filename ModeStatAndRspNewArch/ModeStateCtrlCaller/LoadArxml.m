Obj=arxml.importer('ModeStateCtrlCaller_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ModeStateCtrlCaller','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ModeStateCtrlCaller.slx');