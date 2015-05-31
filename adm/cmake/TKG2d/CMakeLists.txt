set(TOOLKIT TKG2d)

set(TOOLKIT_MODULES
	ModelingData/Geom2d
	ModelingData/LProp
	ModelingData/TColGeom2d
	ModelingData/Adaptor2d
	ModelingData/Geom2dLProp
	ModelingData/Geom2dAdaptor
	ModelingData/GProp
)
set(TOOLKIT_DEPENDS
	TKernel
	TKMath
)

include(../BuildToolkit.cmake)

