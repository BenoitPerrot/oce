set(TOOLKIT TKSTEP)

set(TOOLKIT_MODULES
	DataExchange/StepAP214
	DataExchange/RWStepAP214
	DataExchange/StepAP203
	DataExchange/RWStepAP203
	DataExchange/STEPConstruct
	DataExchange/STEPEdit
	DataExchange/GeomToStep
	DataExchange/StepToGeom
	DataExchange/StepToTopoDS
	DataExchange/TopoDSToStep
	DataExchange/STEPControl
	DataExchange/STEPSelections
	DataExchange/StepAP209
)
set(TOOLKIT_DEPENDS
	TKernel
	TKSTEPAttr
	TKSTEP209
	TKSTEPBase
	TKBRep
	TKMath
	TKG2d
	TKShHealing
	TKTopAlgo
	TKG3d
	TKGeomBase
	TKGeomAlgo
	TKXSBase
)
set(TOOLKIT_LIBS ${CSF_wsock32_LIB})

include(../BuildToolkit.cmake)

