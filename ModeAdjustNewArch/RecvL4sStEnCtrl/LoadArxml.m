Obj=arxml.importer('RecvL4sStEnCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/RecvL4sStEnCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'RecvL4sStEnCtrl.slx');