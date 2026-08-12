Obj=arxml.importer('LyFlow_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/LyFlow','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'LyFlow.slx');