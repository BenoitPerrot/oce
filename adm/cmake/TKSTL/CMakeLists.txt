set(TOOLKIT TKSTL)

set(TOOLKIT_MODULES
	DataExchange/StlMesh
	DataExchange/StlAPI
	DataExchange/StlTransfer
	DataExchange/RWStl
)
set(TOOLKIT_DEPENDS
	TKernel
	TKMath
	TKBRep
	TKG2d
	TKG3d
	TKMesh
	TKTopAlgo
)

include(../BuildToolkit.cmake)

