Obj=arxml.importer('MdSWReqChk_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdSWReqChk','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdSWReqChk.slx');