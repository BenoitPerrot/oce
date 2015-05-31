set(TOOLKIT TKHLR)

set(TOOLKIT_MODULES
	ModelingAlgorithms/HLRTopoBRep
	ModelingAlgorithms/HLRBRep
	ModelingAlgorithms/HLRAlgo
	ModelingAlgorithms/HLRAppli
	ModelingAlgorithms/Intrv
	ModelingAlgorithms/TopBas
	ModelingAlgorithms/TopCnx
	ModelingAlgorithms/Contap
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKernel
	TKMath
	TKGeomBase
	TKG2d
	TKG3d
	TKGeomAlgo
	TKTopAlgo
)

include(../BuildToolkit.cmake)

