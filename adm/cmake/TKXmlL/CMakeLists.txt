set(TOOLKIT TKXmlL)

set(TOOLKIT_MODULES
	OCAF/XmlLDrivers
	OCAF/XmlMDF
	OCAF/XmlMDataStd
	OCAF/XmlMDocStd
	OCAF/XmlMFunction
	OCAF/XmlObjMgt
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKernel
	TKMath
	TKLCAF
)

include(../BuildToolkit.cmake)
