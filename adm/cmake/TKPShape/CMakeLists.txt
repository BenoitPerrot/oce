set(TOOLKIT TKPShape)

set(TOOLKIT_MODULES
	OCAF/PBRep
	OCAF/PTopoDS
	OCAF/PGeom
	OCAF/PGeom2d
	OCAF/PPoly
	OCAF/PColgp
	OCAF/PTopLoc
	OCAF/PColPGeom
	OCAF/PColPGeom2d
	OCAF/MgtBRep
	OCAF/MgtGeom
	OCAF/MgtGeom2d
	OCAF/MgtPoly
	OCAF/MgtTopLoc
	OCAF/MgtTopoDS
)
set(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKG2d
	TKG3d
	PTKernel
	TKBRep
)

include(../BuildToolkit.cmake)
