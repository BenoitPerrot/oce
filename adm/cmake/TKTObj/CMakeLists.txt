set(TOOLKIT TKTObj)

set(TOOLKIT_MODULES
	OCAF/TObj
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKernel
	TKMath
	TKLCAF
)

include(../BuildToolkit.cmake)
