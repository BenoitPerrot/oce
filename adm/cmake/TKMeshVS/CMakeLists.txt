set(TOOLKIT TKMeshVS)

set(TOOLKIT_MODULES
	Visualization/MeshVS
)
set(TOOLKIT_DEPENDS
	TKV3d
	TKMath
	TKService
	TKernel
	TKG3d
	TKG2d
)

include(../BuildToolkit.cmake)

