Obj=arxml.importer('RecvLStEnCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/RecvLStEnCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'RecvLStEnCtrl.slx');