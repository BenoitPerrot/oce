set(TOOLKIT TKFillet)

set(TOOLKIT_MODULES
	ModelingAlgorithms/ChFiDS
	ModelingAlgorithms/ChFi2d
	ModelingAlgorithms/ChFi3d
	ModelingAlgorithms/ChFiKPart
	ModelingAlgorithms/Blend
	ModelingAlgorithms/BRepBlend
	ModelingAlgorithms/BlendFunc
	ModelingAlgorithms/BRepFilletAPI
	ModelingAlgorithms/FilletSurf
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKernel
	TKMath
	TKGeomBase
	TKGeomAlgo
	TKG2d
	TKTopAlgo
	TKG3d
	TKBool
	TKShHealing
)

include(../BuildToolkit.cmake)

