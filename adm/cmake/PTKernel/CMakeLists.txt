set(TOOLKIT PTKernel)

set(TOOLKIT_MODULES
	OCAF/DBC
	OCAF/PCollection
	OCAF/PColStd
	OCAF/PMMgt
	OCAF/PShort
	OCAF/PStandard
	OCAF/PTColStd
	OCAF/ObjMgt
)
set(TOOLKIT_DEPENDS
	TKernel
)

include(../BuildToolkit.cmake)
