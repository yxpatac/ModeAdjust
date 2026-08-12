Obj=arxml.importer('SecRwLtStMovConfigConvert_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/SecRwLtStMovConfigConvert','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'SecRwLtStMovConfigConvert.slx');