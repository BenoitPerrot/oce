set(TOOLKIT TKTopTest)

set(TOOLKIT_MODULES
	Viewer/TestTopOpeDraw
	Viewer/TestTopOpeTools
	Viewer/TestTopOpe
	Viewer/BRepTest
	Viewer/GeometryTest
	Viewer/HLRTest
	Viewer/MeshTest
	Viewer/GeomliteTest
	Viewer/DrawFairCurve
	Viewer/BOPTest
	Viewer/SWDRAW
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKGeomAlgo
	TKTopAlgo
	TKernel
	TKMath
	TKBO
	TKG2d
	TKG3d
	TKDraw
	TKHLR
	TKGeomBase
	TKMesh
	TKService
	TKV3d
	TKFillet
	TKPrim
	TKBool
	TKOffset
	TKFeat
)

set(TOOLKIT_IS_PRIVATE TRUE)

include(../BuildToolkit.cmake)
