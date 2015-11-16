set(TOOLKIT TKGeomBase)

set(TOOLKIT_MODULES
	Geometry/ProjLib
	Geometry/GeomProjLib
	Geometry/GCPnts
	Geometry/CPnts
	Geometry/Approx
	Geometry/AppParCurves
	Geometry/FEmTool
	Geometry/AppCont
	Geometry/Extrema
	Geometry/IntAna
	Geometry/IntAna2d
	Geometry/GeomConvert
	Geometry/AdvApp2Var
	Geometry/GeomLib
	Geometry/Geom2dConvert
	Geometry/Hermit
	Geometry/BndLib
	Geometry/AppDef
	Geometry/GeomTools
	Geometry/GC
	Geometry/GCE2d
	Geometry/gce
)
set(TOOLKIT_DEPENDS
	TKernel
	TKMath
	TKG2d
	TKG3d
)

include(../BuildToolkit.cmake)

