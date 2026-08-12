Obj=arxml.importer('FamlyLStateCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/FamlyLStateCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'FamlyLStateCtrl.slx');