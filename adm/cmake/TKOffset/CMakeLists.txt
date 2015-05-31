set(TOOLKIT TKOffset)

set(TOOLKIT_MODULES
	ModelingAlgorithms/BRepOffsetAPI
	ModelingAlgorithms/Draft
	ModelingAlgorithms/BRepOffset
	ModelingAlgorithms/BiTgte
)
set(TOOLKIT_DEPENDS
	TKFillet
	TKBRep
	TKTopAlgo
	TKMath
	TKernel
	TKGeomBase
	TKG2d
	TKG3d
	TKGeomAlgo
	TKShHealing
	TKBO
	TKPrim
	TKBool
)

include(../BuildToolkit.cmake)

