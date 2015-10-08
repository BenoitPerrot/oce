set(TOOLKIT TKXml)

set(TOOLKIT_MODULES
	OCAF/XmlDrivers
	OCAF/XmlMDataXtd
	OCAF/XmlMNaming
	OCAF/XmlMPrsStd
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKernel
	TKV3d
	TKMath
	TKBRep
	TKG2d
	TKGeomBase
	TKG3d
	TKLCAF
	TKCAF
	TKXmlL
)

include(../BuildToolkit.cmake)
