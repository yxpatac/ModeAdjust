Obj=arxml.importer('ComfortMdFlow_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/ComfortMdFlow','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'ComfortMdFlow.slx');