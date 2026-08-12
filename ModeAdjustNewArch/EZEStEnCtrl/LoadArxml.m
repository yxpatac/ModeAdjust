Obj=arxml.importer('EZEStEnCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/EZEStEnCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'EZEStEnCtrl.slx');