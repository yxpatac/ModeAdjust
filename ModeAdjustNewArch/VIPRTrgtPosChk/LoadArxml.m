Obj=arxml.importer('VIPRTrgtPosChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/VIPRTrgtPosChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'VIPRTrgtPosChk.slx');