set(TOOLKIT TKShHealing)

set(TOOLKIT_MODULES
	ModelingAlgorithms/ShapeBuild
	ModelingAlgorithms/ShapeExtend
	ModelingAlgorithms/ShapeConstruct
	ModelingAlgorithms/ShapeCustom
	ModelingAlgorithms/ShapeAnalysis
	ModelingAlgorithms/ShapeFix
	ModelingAlgorithms/ShapeUpgrade
	ModelingAlgorithms/ShapeAlgo
	ModelingAlgorithms/ShapeProcess
	ModelingAlgorithms/ShapeProcessAPI
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKernel
	TKMath
	TKG2d
	TKTopAlgo
	TKG3d
	TKGeomBase
	TKGeomAlgo
)
set(TOOLKIT_LIBS ${CSF_wsock32_LIB})

include(../BuildToolkit.cmake)

