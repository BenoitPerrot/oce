set(TOOLKIT TKG3d)

set(TOOLKIT_MODULES
	ModelingData/Geom
	ModelingData/TColGeom
	ModelingData/GeomAdaptor
	ModelingData/AdvApprox
	ModelingData/GeomLProp
	ModelingData/Adaptor3d
	ModelingData/LProp3d
	ModelingData/TopAbs
)
set(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKG2d
)

include(../BuildToolkit.cmake)

