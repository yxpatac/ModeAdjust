Obj=arxml.importer('PassStCalib_swc.arxml');
%createComponentAsModel(Obj,'/PATAC/MSM/ComponentTypes/PassStCalib','ModelPeriodicRunnablesAs','FunctionCallSubsystem');
updateModel(Obj,'PassStCalib.slx');