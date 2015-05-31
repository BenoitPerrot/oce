set(TOOLKIT TKMath)

set(TOOLKIT_MODULES
	Foundation/math
	Foundation/ElCLib
	Foundation/ElSLib
	Foundation/BSplCLib
	Foundation/BSplSLib
	Foundation/PLib
	Foundation/Precision
	Foundation/GeomAbs
	Foundation/Poly
	Foundation/CSLib
	Foundation/Convert
	Foundation/Bnd
	Foundation/BVH
	Foundation/gp
	Foundation/TColgp
	Foundation/TopLoc
	Foundation/Expr
	Foundation/ExprIntrp
)
set(TOOLKIT_DEPENDS
	TKernel
)

if(OCE_MULTITHREAD_LIBRARY STREQUAL "TBB" AND TBB_INCLUDE_DIR AND TBB_LIBRARY)
	add_definitions(-DHAVE_TBB)
	set(TOOLKIT_INCLUDE_DIRECTORIES ${TBB_INCLUDE_DIR})
	if(CMAKE_CONFIGURATION_TYPES OR NMAKE)
		set(TOOLKIT_LIBS_DEBUG ${TBB_LIBRARY_DEBUG})
		set(TOOLKIT_LIBS_OPTIMIZED ${TBB_LIBRARY})
	else(CMAKE_CONFIGURATION_TYPES OR NMAKE)
		set(TOOLKIT_LIBS ${TBB_LIBRARY})
	endif(CMAKE_CONFIGURATION_TYPES OR NMAKE)
endif(OCE_MULTITHREAD_LIBRARY STREQUAL "TBB" AND TBB_INCLUDE_DIR AND TBB_LIBRARY)

include(../BuildToolkit.cmake)

