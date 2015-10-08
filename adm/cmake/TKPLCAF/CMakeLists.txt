set(TOOLKIT TKPLCAF)

set(TOOLKIT_MODULES
	OCAF/PDF
	OCAF/PDataStd
	OCAF/PFunction
	OCAF/PDocStd
	OCAF/MDF
	OCAF/MDataStd
	OCAF/MFunction
	OCAF/MDocStd
)
set(TOOLKIT_DEPENDS
	TKCDF
	PTKernel
	TKernel
	TKLCAF
)

include(../BuildToolkit.cmake)
