Obj=arxml.importer('MdXX_StatusToNetWork_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdXX_StatusToNetWork','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdXX_StatusToNetWork.slx');