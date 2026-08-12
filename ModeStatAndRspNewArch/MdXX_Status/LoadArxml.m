Obj=arxml.importer('MdXX_Status_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/MdXX_Status','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'MdXX_Status.slx');