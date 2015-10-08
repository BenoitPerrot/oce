set(TOOLKIT TKBinL)

set(TOOLKIT_MODULES
	OCAF/BinMDF
	OCAF/BinMDataStd
	OCAF/BinMFunction
	OCAF/BinMDocStd
	OCAF/BinObjMgt
	OCAF/BinLDrivers
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKernel
	TKLCAF
)

include(../BuildToolkit.cmake)
