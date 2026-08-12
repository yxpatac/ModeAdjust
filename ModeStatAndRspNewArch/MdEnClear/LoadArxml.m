Obj=arxml.importer('MdEnClear_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdEnClear','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdEnClear.slx');