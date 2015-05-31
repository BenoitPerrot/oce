set(TOOLKIT TKVRML)

set(TOOLKIT_MODULES
	DataExchange/VrmlConverter
	DataExchange/VrmlAPI
	DataExchange/Vrml
	DataExchange/VrmlData
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKTopAlgo
	TKMath
	TKGeomBase
	TKernel
	TKPrim
	TKG2d
	TKG3d
	TKMesh
	TKHLR
	TKService
	TKGeomAlgo
	TKV3d
)

include(../BuildToolkit.cmake)

