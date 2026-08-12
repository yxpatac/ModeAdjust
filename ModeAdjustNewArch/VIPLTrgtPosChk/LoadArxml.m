Obj=arxml.importer('VIPLTrgtPosChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/VIPLTrgtPosChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'VIPLTrgtPosChk.slx');