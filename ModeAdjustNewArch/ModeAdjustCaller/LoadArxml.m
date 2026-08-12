Obj=arxml.importer('ModeAdjustCaller_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ModeAdjustCaller','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ModeAdjustCaller.slx');