Obj=arxml.importer('Md61Md62CalibSet_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/Md61Md62CalibSet','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'Md61Md62CalibSet.slx');