Obj=arxml.importer('StPassCmprtMdHMIDisCmd_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/StPassCmprtMdHMIDisCmd','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'StPassCmprtMdHMIDisCmd.slx');