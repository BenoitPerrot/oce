// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/Contap/Contap_TheIWalking.hxx>

#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_PathPoint.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_PathPointTool.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfPathPoint.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_InteriorPoint.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_InteriorPointTool.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfInteriorPoint.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#include <ModelingAlgorithms/Contap/Contap_SurfFunction.hxx>
#include <ModelingAlgorithms/Contap/Contap_TheIWLineOfTheIWalking.hxx>
#include <ModelingAlgorithms/Contap/Contap_SequenceOfIWLineOfTheIWalking.hxx>
#include <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_PntOn2S.hxx>
 

#define ThePointOfPath IntSurf_PathPoint
#define ThePointOfPath_hxx <ModelingAlgorithms/IntSurf/IntSurf_PathPoint.hxx>
#define ThePointOfPathTool IntSurf_PathPointTool
#define ThePointOfPathTool_hxx <ModelingAlgorithms/IntSurf/IntSurf_PathPointTool.hxx>
#define ThePOPIterator IntSurf_SequenceOfPathPoint
#define ThePOPIterator_hxx <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfPathPoint.hxx>
#define ThePointOfLoop IntSurf_InteriorPoint
#define ThePointOfLoop_hxx <ModelingAlgorithms/IntSurf/IntSurf_InteriorPoint.hxx>
#define ThePointOfLoopTool IntSurf_InteriorPointTool
#define ThePointOfLoopTool_hxx <ModelingAlgorithms/IntSurf/IntSurf_InteriorPointTool.hxx>
#define ThePOLIterator IntSurf_SequenceOfInteriorPoint
#define ThePOLIterator_hxx <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfInteriorPoint.hxx>
#define ThePSurface Handle(Adaptor3d_HSurface)
#define ThePSurface_hxx <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#define TheIWFunction Contap_SurfFunction
#define TheIWFunction_hxx <ModelingAlgorithms/Contap/Contap_SurfFunction.hxx>
#define IntWalk_TheIWLine Contap_TheIWLineOfTheIWalking
#define IntWalk_TheIWLine_hxx <ModelingAlgorithms/Contap/Contap_TheIWLineOfTheIWalking.hxx>
#define IntWalk_SequenceOfIWLine Contap_SequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceOfIWLine_hxx <ModelingAlgorithms/Contap/Contap_SequenceOfIWLineOfTheIWalking.hxx>
#define IntWalk_SequenceNodeOfSequenceOfIWLine Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#define IntWalk_SequenceNodeOfSequenceOfIWLine Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#define Handle_IntWalk_TheIWLine Handle_Contap_TheIWLineOfTheIWalking
#define IntWalk_TheIWLine_Type_() Contap_TheIWLineOfTheIWalking_Type_()
#define Handle_IntWalk_SequenceNodeOfSequenceOfIWLine Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_Type_()
#define Handle_IntWalk_SequenceNodeOfSequenceOfIWLine Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_Type_()
#define IntWalk_IWalking Contap_TheIWalking
#define IntWalk_IWalking_hxx <ModelingAlgorithms/Contap/Contap_TheIWalking.hxx>
#include <ModelingAlgorithms/IntWalk/IntWalk_IWalking.gxx>

