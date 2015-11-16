set(TOOLKIT TKG3d)

set(TOOLKIT_MODULES
	Geometry/Geom
	Geometry/TColGeom
	Geometry/GeomAdaptor
	Geometry/AdvApprox
	Geometry/GeomLProp
	Geometry/Adaptor3d
	Geometry/LProp3d
	ModelingData/TopAbs
)
set(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKG2d
)

include(../BuildToolkit.cmake)

