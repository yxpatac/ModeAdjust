Obj=arxml.importer('HMI_2R_StMdXX_Rsp_swc.arxml');
createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/HMI_2R_StMdXX_Rsp','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'HMI_2R_StMdXX_Rsp.slx');