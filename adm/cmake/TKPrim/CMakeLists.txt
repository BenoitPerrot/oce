set(TOOLKIT TKPrim)

set(TOOLKIT_MODULES
	ModelingAlgorithms/BRepPrim
	ModelingAlgorithms/Primitives
	ModelingAlgorithms/BRepSweep
	ModelingAlgorithms/Sweep
	ModelingAlgorithms/BRepPrimAPI
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKernel
	TKMath
	TKG2d
	TKGeomBase
	TKG3d
	TKTopAlgo
)

include(../BuildToolkit.cmake)

