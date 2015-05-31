set(TOOLKIT TKSTEPBase)

set(TOOLKIT_MODULES
	DataExchange/StepBasic
	DataExchange/RWStepBasic
	DataExchange/StepRepr
	DataExchange/RWStepRepr
	DataExchange/StepGeom
	DataExchange/RWStepGeom
	DataExchange/StepShape
	DataExchange/RWStepShape
)
set(TOOLKIT_DEPENDS
	TKernel
	TKXSBase
	TKMath
)

include(../BuildToolkit.cmake)

