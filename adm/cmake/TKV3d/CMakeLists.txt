set(TOOLKIT TKV3d)

set(TOOLKIT_MODULES
	Visualization/V3d
	Visualization/Graphic3d
	Visualization/Visual3d
	Visualization/Select3D
	Visualization/Prs3d
	Visualization/StdPrs
	Visualization/SelectMgr
	Visualization/PrsMgr
	Visualization/AIS
	Visualization/DsgPrs
	Visualization/StdSelect
)
set(TOOLKIT_DEPENDS
	TKBRep
	TKMath
	TKernel
	TKService
	TKShHealing
	TKTopAlgo
	TKG2d
	TKG3d
	TKGeomBase
	TKMesh
	TKGeomAlgo
	TKHLR
)
set(TOOLKIT_LIBS ${CSF_user32_LIB} ${CSF_gdi32_LIB} ${OPENGL_LIBRARIES})

if(CMAKE_CONFIGURATION_TYPES OR NMAKE)
    set(TOOLKIT_LIBS_DEBUG ${FREETYPE_LIBRARY_DEBUG})
    set(TOOLKIT_LIBS_OPTIMIZED ${FREETYPE_LIBRARIES})
else(CMAKE_CONFIGURATION_TYPES OR NMAKE)
    set(TOOLKIT_LIBS ${TOOLKIT_LIBS} ${FREETYPE_LIBRARIES})
endif(CMAKE_CONFIGURATION_TYPES OR NMAKE)
set(TOOLKIT_INCLUDE_DIRECTORIES ${FREETYPE_INCLUDE_DIRS})

if(OCE_DISABLE_TKSERVICE_FONT)
	set(TOOLKIT_INCLUDE_DIRECTORIES ${TOOLKIT_INCLUDE_DIRECTORIES} "${OCE_SOURCE_DIR}/src/Font/")
endif()

include(../BuildToolkit.cmake)

