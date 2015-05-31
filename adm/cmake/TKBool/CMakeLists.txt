set(TOOLKIT TKBool)

set(TOOLKIT_MODULES
	ModelingAlgorithms/TopOpeBRep
	ModelingAlgorithms/TopOpeBRepDS
	ModelingAlgorithms/TopOpeBRepBuild
	ModelingAlgorithms/TopOpeBRepTool
	ModelingAlgorithms/BRepAlgo
	ModelingAlgorithms/BRepFill
	ModelingAlgorithms/BRepProj
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKTopAlgo
	TKMath
	TKernel
	TKPrim
	TKG2d
	TKG3d
	TKShHealing
	TKGeomBase
	TKGeomAlgo
	TKBO
)

include(../BuildToolkit.cmake)

