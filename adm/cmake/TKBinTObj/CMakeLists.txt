set(TOOLKIT TKBinTObj)

set(TOOLKIT_MODULES
	OCAF/BinTObjDrivers
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKernel
	TKTObj
	TKMath
	TKLCAF
	TKBinL
)

include(../BuildToolkit.cmake)
