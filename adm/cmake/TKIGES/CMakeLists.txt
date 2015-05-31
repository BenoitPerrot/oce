set(TOOLKIT TKIGES)

set(TOOLKIT_MODULES
	DataExchange/IGESData
	DataExchange/IGESFile
	DataExchange/IGESBasic
	DataExchange/IGESGraph
	DataExchange/IGESGeom
	DataExchange/IGESDimen
	DataExchange/IGESDraw
	DataExchange/IGESSolid
	DataExchange/IGESDefs
	DataExchange/IGESAppli
	DataExchange/IGESConvGeom
	DataExchange/IGESSelect
	DataExchange/IGESToBRep
	DataExchange/GeomToIGES
	DataExchange/Geom2dToIGES
	DataExchange/BRepToIGES
	DataExchange/BRepToIGESBRep
	DataExchange/IGESControl
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKernel
	TKMath
	TKTopAlgo
	TKShHealing
	TKG2d
	TKG3d
	TKGeomBase
	TKGeomAlgo
	TKPrim
	TKBool
	TKOffset
	TKXSBase
)

include(../BuildToolkit.cmake)

