Obj=arxml.importer('ModeState32Bit_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ModeState32Bit','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ModeState32Bit.slx');