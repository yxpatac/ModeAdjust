Obj=arxml.importer('StateOnOffChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/StateOnOffChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'StateOnOffChk.slx');