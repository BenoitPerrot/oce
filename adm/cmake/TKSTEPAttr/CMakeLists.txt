set(TOOLKIT TKSTEPAttr)

set(TOOLKIT_MODULES
	DataExchange/StepVisual
	DataExchange/RWStepVisual
	DataExchange/StepDimTol
	DataExchange/RWStepDimTol
)
set(TOOLKIT_DEPENDS
	TKernel
	TKXSBase
	TKSTEPBase
)

include(../BuildToolkit.cmake)

