set(TOOLKIT TKG2d)

set(TOOLKIT_MODULES
	Geometry/Geom2d
	Geometry/LProp
	Geometry/TColGeom2d
	Geometry/Adaptor2d
	Geometry/Geom2dLProp
	Geometry/Geom2dAdaptor
	Geometry/GProp
)
set(TOOLKIT_DEPENDS
	TKernel
	TKMath
)

include(../BuildToolkit.cmake)

