Obj=arxml.importer('LyLStateCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/LyLStateCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'LyLStateCtrl.slx');