Obj=arxml.importer('PassStRclCmdSrvCal_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/PassStRclCmdSrvCal','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'PassStRclCmdSrvCal.slx');