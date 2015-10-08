set(TOOLKIT TKLCAF)

set(TOOLKIT_MODULES
	OCAF/TDF
	OCAF/TDataStd
	OCAF/TFunction
	OCAF/TDocStd
	OCAF/AppStdL
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKernel
)

include(../BuildToolkit.cmake)
