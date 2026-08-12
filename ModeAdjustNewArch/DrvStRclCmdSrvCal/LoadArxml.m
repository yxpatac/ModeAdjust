Obj=arxml.importer('DrvStRclCmdSrvCal_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/DrvStRclCmdSrvCal','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'DrvStRclCmdSrvCal.slx');