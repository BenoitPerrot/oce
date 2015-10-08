set(TOOLKIT TKPCAF)

set(TOOLKIT_MODULES
	OCAF/PDataXtd
	OCAF/PNaming
	OCAF/PPrsStd
	OCAF/MDataXtd
	OCAF/MPrsStd
	OCAF/MNaming
)
set(TOOLKIT_DEPENDS
	PTKernel
	TKBRep
	TKMath
	TKernel
	TKCDF
	TKG2d
	TKV3d
	TKService
	TKG3d
	TKPShape
	TKCAF
	TKLCAF
	TKPLCAF
)

include(../BuildToolkit.cmake)
