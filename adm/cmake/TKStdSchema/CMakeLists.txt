set(TOOLKIT TKStdSchema)

set(TOOLKIT_MODULES
	OCAF/StdSchema
	OCAF/StdDrivers
)
set(TOOLKIT_DEPENDS
	TKCDF
	PTKernel
	TKPLCAF
	TKernel
	TKCAF
	TKShapeSchema
	TKLCAF
	TKStdLSchema
	TKG3d
	TKPShape
	TKMath
	TKG2d
	TKPCAF
)

include(../BuildToolkit.cmake)
