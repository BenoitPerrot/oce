LOCAL_PATH:= $(call my-dir)

STL_INC := $(NDK_ROOT)/sources/cxx-stl/gnu-libstdc++/$(NDK_TOOLCHAIN_VERSION)/include $(NDK_ROOT)/sources/cxx-stl/gnu-libstdc++/$(NDK_TOOLCHAIN_VERSION)/libs/$(TARGET_ARCH_ABI)/include
#STL_LIB := $(NDK_ROOT)/sources/cxx-stl/gnu-libstdc++/$(NDK_TOOLCHAIN_VERSION)/libs/$(TARGET_ARCH_ABI)/libgnustl_static.a
STL_LIB := $(NDK_ROOT)/sources/cxx-stl/gnu-libstdc++/$(NDK_TOOLCHAIN_VERSION)/libs/$(TARGET_ARCH_ABI)/libgnustl_shared.so

OCCT_ROOT := $(LOCAL_PATH)/../../../..

FREETYPE_INC  := $(OCCT_ROOT)/../freetype/include/freetype2
FREETYPE_LIBS := $(OCCT_ROOT)/../freetype/libs

FREEIMAGE_INC  := $(OCCT_ROOT)/../FreeImage/include
FREEIMAGE_LIBS := $(OCCT_ROOT)/../FreeImage/libs

OCCT_INC  := $(OCCT_ROOT)/inc
OCCT_LIBS := $(OCCT_ROOT)/and/libs

ASSETDIR := $(LOCAL_PATH)/../assets

$(ASSETDIR)/Shaders: $(ASSETDIR)
	-mkdir -p $(ASSETDIR)
	-mkdir -p $(ASSETDIR)/Shaders
	cp -f -r $(OCCT_ROOT)/src/Visualization/Shaders/*.* $(ASSETDIR)/Shaders

$(ASSETDIR)/ShapeMessages: $(ASSETDIR)
	-mkdir -p $(ASSETDIR)
	-mkdir -p $(ASSETDIR)/ShapeMessages
	cp -f -r $(OCCT_ROOT)/src/ModelingAlgorithms/ShapeMessages/*.* $(ASSETDIR)/ShapeMessages

$(ASSETDIR)/IGESMessages: $(ASSETDIR)
	-mkdir -p $(ASSETDIR)
	-mkdir -p $(ASSETDIR)/IGESMessages
	cp -f -r $(OCCT_ROOT)/src/DataExchange/IGESMessages/*.* $(ASSETDIR)/IGESMessages

$(ASSETDIR)/XSTEPMessages: $(ASSETDIR)
	-mkdir -p $(ASSETDIR)
	-mkdir -p $(ASSETDIR)/XSTEPMessages
	cp -f -r $(OCCT_ROOT)/src/DataExchange/XSTEPMessages/*.* $(ASSETDIR)/XSTEPMessages

$(ASSETDIR)/TObj: $(ASSETDIR)
	-mkdir -p $(ASSETDIR)
	-mkdir -p $(ASSETDIR)/TObj
	cp -f -r $(OCCT_ROOT)/src/TObj/*.msg $(ASSETDIR)/TObj

$(ASSETDIR)/UnitsAPI: $(ASSETDIR)
	-mkdir -p $(ASSETDIR)
	-mkdir -p $(ASSETDIR)/UnitsAPI
	cp -f -r $(OCCT_ROOT)/src/UnitsAPI/*.dat $(ASSETDIR)/UnitsAPI

pre_all: $(ASSETDIR)/Shaders $(ASSETDIR)/ShapeMessages $(ASSETDIR)/IGESMessages $(ASSETDIR)/XSTEPMessages $(ASSETDIR)/TObj $(ASSETDIR)/UnitsAPI

jniall: pre_all all

# STL libs
include $(CLEAR_VARS)
LOCAL_MODULE := SharedStl
LOCAL_EXPORT_C_INCLUDES := $(STL_INC)
LOCAL_SRC_FILES := $(STL_LIB)
include $(PREBUILT_SHARED_LIBRARY)

# 3rd-parties used in OCCT
include $(CLEAR_VARS)
LOCAL_MODULE := FreeType
LOCAL_EXPORT_C_INCLUDES := $(FREETYPE_INC)
LOCAL_SRC_FILES := $(FREETYPE_LIBS)/$(TARGET_ARCH_ABI)/libfreetype.so
include $(PREBUILT_SHARED_LIBRARY)

#include $(CLEAR_VARS)
#LOCAL_MODULE := FreeImage
#LOCAL_EXPORT_C_INCLUDES := $(FREEIMAGE_INC)
#LOCAL_SRC_FILES := $(FREEIMAGE_LIBS)/$(TARGET_ARCH_ABI)/libfreeimage.so
#include $(PREBUILT_SHARED_LIBRARY)

# OCCT core
include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKernel
LOCAL_EXPORT_C_INCLUDES := $(OCCT_INC)
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKernel.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKMath
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKMath.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKG2d
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKG2d.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKG3d
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKG3d.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKGeomBase
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKGeomBase.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKBRep
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKBRep.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKGeomAlgo
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKGeomAlgo.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKTopAlgo
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKTopAlgo.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKShHealing
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKShHealing.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKMesh
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKMesh.so
include $(PREBUILT_SHARED_LIBRARY)

# OCCT Exchange
include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKPrim
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKPrim.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKBO
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKBO.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKBool
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKBool.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKFillet
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKFillet.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKOffset
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKOffset.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKXSBase
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKXSBase.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKIGES
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKIGES.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKSTEPBase
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKSTEPBase.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKSTEPAttr
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKSTEPAttr.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKSTEP209
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKSTEP209.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKSTEP
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKSTEP.so
include $(PREBUILT_SHARED_LIBRARY)

# OCCT visualization
include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKService
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKService.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKHLR
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKHLR.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKV3d
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKV3d.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := OcctTKOpenGl
LOCAL_SRC_FILES := $(OCCT_LIBS)/$(TARGET_ARCH_ABI)/libTKOpenGl.so
include $(PREBUILT_SHARED_LIBRARY)

# our sample
include $(CLEAR_VARS)
LOCAL_MODULE           := libTKJniSample
LOCAL_C_INCLUDES       := $(STL_INC)
#LOCAL_STATIC_LIBRARIES := $(STL_LIB) does not work
LOCAL_CFLAGS           := -Wall
LOCAL_CPP_EXTENSION    := .cxx .cpp
LOCAL_CPP_FEATURES     := rtti exceptions
LOCAL_SRC_FILES        := OcctJni_Viewer.cxx OcctJni_Window.cxx OcctJni_MsgPrinter.cxx
LOCAL_SHARED_LIBRARIES := OcctTKernel OcctTKMath OcctTKG2d OcctTKG3d OcctTKGeomBase OcctTKBRep OcctTKGeomAlgo OcctTKTopAlgo OcctTKShHealing OcctTKMesh OcctTKPrim
LOCAL_SHARED_LIBRARIES += OcctTKIGES OcctTKSTEP OcctTKXSBase
LOCAL_SHARED_LIBRARIES += OcctTKService OcctTKHLR OcctTKV3d OcctTKOpenGl
LOCAL_SHARED_LIBRARIES += SharedStl
LOCAL_LDLIBS           := -llog -lGLESv2 -lEGL

#LOCAL_LDLIBS += $(STL_LIB)

include $(BUILD_SHARED_LIBRARY)
