set(TOOLKIT TKBin)

set(TOOLKIT_MODULES
	OCAF/BinDrivers
	OCAF/BinMDataXtd
	OCAF/BinMPrsStd
	OCAF/BinMNaming
	OCAF/BinTools
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKMath
	TKernel
	TKG2d
	TKG3d
	TKCAF
	TKCDF
	TKLCAF
	TKV3d
	TKBinL
)

include(../BuildToolkit.cmake)
