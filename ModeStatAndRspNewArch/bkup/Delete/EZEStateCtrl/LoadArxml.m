Obj=arxml.importer('EZEStateCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/EZEStateCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'EZEStateCtrl.slx');