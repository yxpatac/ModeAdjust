Obj=arxml.importer('SRSSwIndCtrl_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/SRSSwIndCtrl','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'SRSSwIndCtrl.slx');