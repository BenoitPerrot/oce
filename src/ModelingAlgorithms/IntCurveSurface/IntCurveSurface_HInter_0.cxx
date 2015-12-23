// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_HInter.hxx>

#include <Geometry/Adaptor3d/Adaptor3d_HCurve.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheHCurveTool.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolygonOfHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheExactHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Mathematics/BoundingVolumes/Bnd_BoundSortBox.hxx>
#include <Mathematics/Primitives/gp_Lin.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Mathematics/Primitives/gp_Elips.hxx>
#include <Mathematics/Primitives/gp_Parab.hxx>
#include <Mathematics/Primitives/gp_Hypr.hxx>
#include <Geometry/IntAna/IntAna_IntConicQuad.hxx>
#include <Mathematics/Collections/TColgp_Array2OfPnt.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
 

#define TheCurve Handle(Adaptor3d_HCurve)
#define TheCurve_hxx <Geometry/Adaptor3d/Adaptor3d_HCurve.hxx>
#define TheCurveTool IntCurveSurface_TheHCurveTool
#define TheCurveTool_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheHCurveTool.hxx>
#define TheSurface Handle(Adaptor3d_HSurface)
#define TheSurface_hxx <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#define TheSurfaceTool Adaptor3d_HSurfaceTool
#define TheSurfaceTool_hxx <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#define IntCurveSurface_ThePolygon IntCurveSurface_ThePolygonOfHInter
#define IntCurveSurface_ThePolygon_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolygonOfHInter.hxx>
#define IntCurveSurface_ThePolygonTool IntCurveSurface_ThePolygonToolOfHInter
#define IntCurveSurface_ThePolygonTool_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolygonToolOfHInter.hxx>
#define IntCurveSurface_ThePolyhedron IntCurveSurface_ThePolyhedronOfHInter
#define IntCurveSurface_ThePolyhedron_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolyhedronOfHInter.hxx>
#define IntCurveSurface_ThePolyhedronTool IntCurveSurface_ThePolyhedronToolOfHInter
#define IntCurveSurface_ThePolyhedronTool_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#define IntCurveSurface_TheInterference IntCurveSurface_TheInterferenceOfHInter
#define IntCurveSurface_TheInterference_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheInterferenceOfHInter.hxx>
#define IntCurveSurface_TheCSFunction IntCurveSurface_TheCSFunctionOfHInter
#define IntCurveSurface_TheCSFunction_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheCSFunctionOfHInter.hxx>
#define IntCurveSurface_TheExactInter IntCurveSurface_TheExactHInter
#define IntCurveSurface_TheExactInter_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheExactHInter.hxx>
#define IntCurveSurface_TheQuadCurvExactInter IntCurveSurface_TheQuadCurvExactHInter
#define IntCurveSurface_TheQuadCurvExactInter_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheQuadCurvExactHInter.hxx>
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#define IntCurveSurface_Inter IntCurveSurface_HInter
#define IntCurveSurface_Inter_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_HInter.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_Inter.gxx>

