Obj=arxml.importer('HMIHeightSelc2L_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/HMIHeightSelc2L','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'HMIHeightSelc2L.slx');