Obj=arxml.importer('LugStateCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/LugStateCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'LugStateCtrl.slx');