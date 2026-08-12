Obj=arxml.importer('EZQStateCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/EZQStateCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'EZQStateCtrl.slx');