set(TOOLKIT TKXSBase)

set(TOOLKIT_MODULES
	DataExchange/Interface
	DataExchange/Transfer
	DataExchange/IFGraph
	DataExchange/IFSelect
	DataExchange/TransferBRep
	DataExchange/XSControl
	DataExchange/StepData
	DataExchange/StepFile
	DataExchange/HeaderSection
	DataExchange/RWHeaderSection
	DataExchange/APIHeaderSection
	DataExchange/StepSelect
	DataExchange/UnitsMethods
	DataExchange/XSAlgo
	DataExchange/LibCtl
	DataExchange/MoniTool
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKernel
	TKMath
	TKG2d
	TKG3d
	TKTopAlgo
	TKGeomBase
	TKShHealing
)

include(../BuildToolkit.cmake)

