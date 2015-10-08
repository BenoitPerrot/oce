set(TOOLKIT TKStdLSchema)

set(TOOLKIT_MODULES
	OCAF/StdLSchema
	OCAF/StdLDrivers
)
set(TOOLKIT_DEPENDS
	TKCDF
	PTKernel
	TKernel
	TKShapeSchema
	TKLCAF
	TKPLCAF
)

include(../BuildToolkit.cmake)
