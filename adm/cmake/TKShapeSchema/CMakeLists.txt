set(TOOLKIT TKShapeSchema)

set(TOOLKIT_MODULES
	OCAF/ShapeSchema
	OCAF/PCDMShape
)
set(TOOLKIT_DEPENDS
	TKernel
	TKG2d
	PTKernel
	TKMath
	TKCDF
	TKPShape
)

include(../BuildToolkit.cmake)
