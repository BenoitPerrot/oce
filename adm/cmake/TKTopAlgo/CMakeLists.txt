set(TOOLKIT TKTopAlgo)

set(TOOLKIT_MODULES
	ModelingAlgorithms/IntCurvesFace
	ModelingAlgorithms/MAT
	ModelingAlgorithms/MAT2d
	ModelingAlgorithms/Bisector
	ModelingAlgorithms/BRepMAT2d
	ModelingAlgorithms/BRepCheck
	ModelingAlgorithms/BRepBndLib
	ModelingAlgorithms/BRepExtrema
	ModelingAlgorithms/BRepClass
	ModelingAlgorithms/BRepClass3d
	ModelingAlgorithms/BRepLib
	ModelingAlgorithms/BRepGProp
	ModelingAlgorithms/BRepIntCurveSurface
	ModelingAlgorithms/BRepTopAdaptor
	ModelingAlgorithms/BRepBuilderAPI
	ModelingAlgorithms/BRepApprox
)
set(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKG2d
	TKG3d
	TKGeomBase
	TKBRep
	TKGeomAlgo
)

include(../BuildToolkit.cmake)

