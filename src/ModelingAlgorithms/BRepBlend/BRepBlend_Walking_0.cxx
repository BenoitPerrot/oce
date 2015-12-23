// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/BRepBlend/BRepBlend_Walking.hxx>

#include <ModelingAlgorithms/BRepBlend/BRepBlend_Line.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HVertex.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HCurve.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_HCurve2dTool.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_HCurveTool.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_BlendTool.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_PointOnRst.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_SequenceOfPointOnRst.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_Extremity.hxx>
#include <ModelingAlgorithms/Blend/Blend_Point.hxx>
#include <ModelingAlgorithms/Blend/Blend_Function.hxx>
#include <ModelingAlgorithms/Blend/Blend_FuncInv.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <IntSurf_Transition.hxx>
 

#define TheVertex Handle(Adaptor3d_HVertex)
#define TheVertex_hxx <Geometry/Adaptor3d/Adaptor3d_HVertex.hxx>
#define TheArc Handle(Adaptor2d_HCurve2d)
#define TheArc_hxx <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#define TheSurface Handle(Adaptor3d_HSurface)
#define TheSurface_hxx <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#define TheCurve Handle(Adaptor3d_HCurve)
#define TheCurve_hxx <Geometry/Adaptor3d/Adaptor3d_HCurve.hxx>
#define TheVertexTool Standard_Integer
#define TheVertexTool_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheArcTool BRepBlend_HCurve2dTool
#define TheArcTool_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_HCurve2dTool.hxx>
#define TheSurfaceTool Adaptor3d_HSurfaceTool
#define TheSurfaceTool_hxx <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#define TheCurveTool BRepBlend_HCurveTool
#define TheCurveTool_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_HCurveTool.hxx>
#define Handle_TheTopolTool Handle_Adaptor3d_TopolTool
#define TheTopolTool Adaptor3d_TopolTool
#define TheTopolTool_hxx <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#define TheBlendTool BRepBlend_BlendTool
#define TheBlendTool_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_BlendTool.hxx>
#define ThePointOnRst BRepBlend_PointOnRst
#define ThePointOnRst_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_PointOnRst.hxx>
#define TheSeqPointOnRst BRepBlend_SequenceOfPointOnRst
#define TheSeqPointOnRst_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_SequenceOfPointOnRst.hxx>
#define TheExtremity BRepBlend_Extremity
#define TheExtremity_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_Extremity.hxx>
#define Handle_TheLine Handle_BRepBlend_Line
#define TheLine BRepBlend_Line
#define TheLine_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_Line.hxx>
#define Blend_Walking BRepBlend_Walking
#define Blend_Walking_hxx <ModelingAlgorithms/BRepBlend/BRepBlend_Walking.hxx>
#include <ModelingAlgorithms/Blend/Blend_Walking.gxx>

