set(TOOLKIT TKSTEP209)

set(TOOLKIT_MODULES
	DataExchange/StepElement
	DataExchange/StepFEA
	DataExchange/RWStepElement
	DataExchange/RWStepFEA
)
set(TOOLKIT_DEPENDS
	TKernel
	TKXSBase
	TKSTEPBase
)

include(../BuildToolkit.cmake)

