Obj=arxml.importer('Md30StEnCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/Md30StEnCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'Md30StEnCtrl.slx');