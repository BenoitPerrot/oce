set(TOOLKIT FWOSPlugin)

set(TOOLKIT_MODULES
	OCAF/FWOSDriver
)
set(TOOLKIT_DEPENDS
	TKernel
	TKCDF
)

include(../BuildToolkit.cmake)
