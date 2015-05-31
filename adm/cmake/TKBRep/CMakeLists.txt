set(TOOLKIT TKBRep)

set(TOOLKIT_MODULES
	ModelingData/TopoDS
	ModelingData/TopExp
	ModelingData/TopTools
	ModelingData/BRep
	ModelingData/BRepLProp
	ModelingData/BRepAdaptor
	ModelingData/BRepTools
)
set(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKG2d
	TKG3d
	TKGeomBase
)

include(../BuildToolkit.cmake)

