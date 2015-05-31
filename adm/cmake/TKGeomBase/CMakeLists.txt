set(TOOLKIT TKGeomBase)

set(TOOLKIT_MODULES
	ModelingData/ProjLib
	ModelingData/GeomProjLib
	ModelingData/GCPnts
	ModelingData/CPnts
	ModelingData/Approx
	ModelingData/AppParCurves
	ModelingData/FEmTool
	ModelingData/AppCont
	ModelingData/Extrema
	ModelingData/IntAna
	ModelingData/IntAna2d
	ModelingData/GeomConvert
	ModelingData/AdvApp2Var
	ModelingData/GeomLib
	ModelingData/Geom2dConvert
	ModelingData/Hermit
	ModelingData/BndLib
	ModelingData/AppDef
	ModelingData/GeomTools
	ModelingData/GC
	ModelingData/GCE2d
	ModelingData/gce
)
set(TOOLKIT_DEPENDS
	TKernel
	TKMath
	TKG2d
	TKG3d
)

include(../BuildToolkit.cmake)

