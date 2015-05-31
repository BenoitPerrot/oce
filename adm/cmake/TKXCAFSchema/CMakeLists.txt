set(TOOLKIT TKXCAFSchema)

set(TOOLKIT_MODULES
	DataExchange/MXCAFDoc
	DataExchange/PXCAFDoc
	DataExchange/XCAFDrivers
	DataExchange/XCAFSchema
)
set(TOOLKIT_DEPENDS
	TKPLCAF
	TKernel
	PTKernel
	TKMath
	TKPShape
	TKCDF
	TKShapeSchema
	TKLCAF
	TKPCAF
	TKXCAF
	TKStdLSchema
	TKStdSchema
)

include(../BuildToolkit.cmake)

