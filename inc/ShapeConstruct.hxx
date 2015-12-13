// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeConstruct_HeaderFile
#define _ShapeConstruct_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Geom_BSplineCurve.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Geom_BSplineSurface.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TopTools_HSequenceOfShape.hxx>
#include <TopAbs_Orientation.hxx>
class Geom_BSplineCurve;
class Geom_Curve;
class Geom2d_BSplineCurve;
class Geom2d_Curve;
class Geom_BSplineSurface;
class Geom_Surface;
class TopTools_HSequenceOfShape;
class TopoDS_Face;
class TopoDS_Edge;
class ShapeConstruct_Curve;
class ShapeConstruct_ProjectCurveOnSurface;
class ShapeConstruct_CompBezierCurvesToBSplineCurve;
class ShapeConstruct_CompBezierCurves2dToBSplineCurve2d;
class ShapeConstruct_MakeTriangulation;


//! This package provides new algorithms for constructing
//! new geometrical objects and topological shapes. It
//! complements and extends algorithms available in Open
//! CASCADE topological and geometrical toolkist.
//! The functionality provided by this package are the
//! following:
//! projecting curves on surface,
//! adjusting curve to have given start and end points. P
class ShapeConstruct 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Tool for wire triangulation
  Standard_EXPORT static   Handle(Geom_BSplineCurve) ConvertCurveToBSpline (const Handle(Geom_Curve)& C3D, const Standard_Real First, const Standard_Real Last, const Standard_Real Tol3d, const GeomAbs_Shape Continuity, const Standard_Integer MaxSegments, const Standard_Integer MaxDegree) ;
  
  Standard_EXPORT static   Handle(Geom2d_BSplineCurve) ConvertCurveToBSpline (const Handle(Geom2d_Curve)& C2D, const Standard_Real First, const Standard_Real Last, const Standard_Real Tol2d, const GeomAbs_Shape Continuity, const Standard_Integer MaxSegments, const Standard_Integer MaxDegree) ;
  
  Standard_EXPORT static   Handle(Geom_BSplineSurface) ConvertSurfaceToBSpline (const Handle(Geom_Surface)& surf, const Standard_Real UF, const Standard_Real UL, const Standard_Real VF, const Standard_Real VL, const Standard_Real Tol3d, const GeomAbs_Shape Continuity, const Standard_Integer MaxSegments, const Standard_Integer MaxDegree) ;
  
  //! join pcurves of the <theEdge> on the <theFace>
  //! try to use pcurves from originas edges <theEdges>
  //! Returns false if cannot join pcurves
  Standard_EXPORT static   Standard_Boolean JoinPCurves (const Handle(TopTools_HSequenceOfShape)& theEdges, const TopoDS_Face& theFace, TopoDS_Edge& theEdge) ;
  
  //! Method for joininig curves 3D.
  //! Parameters : c3d1,ac3d2 - initial curves
  //! Orient1, Orient2 - initial edges orientations.
  //! first1,last1,first2,last2 - parameters for trimming curves
  //! (re-calculate with account of orientation edges)
  //! c3dOut - result curve
  //! isRev1,isRev2 - out parameters indicative on possible errors.
  //! Return value : True - if curves were joined successfully,
  //! else - False.
  Standard_EXPORT static   Standard_Boolean JoinCurves (const Handle(Geom_Curve)& c3d1, const Handle(Geom_Curve)& ac3d2, const TopAbs_Orientation Orient1, const TopAbs_Orientation Orient2, Standard_Real& first1, Standard_Real& last1, Standard_Real& first2, Standard_Real& last2, Handle(Geom_Curve)& c3dOut, Standard_Boolean& isRev1, Standard_Boolean& isRev2) ;
  
  //! Method for joininig curves 3D.
  //! Parameters : c3d1,ac3d2 - initial curves
  //! Orient1, Orient2 - initial edges orientations.
  //! first1,last1,first2,last2 - parameters for trimming curves
  //! (re-calculate with account of orientation edges)
  //! c3dOut - result curve
  //! isRev1,isRev2 - out parameters indicative on possible errors.
  //! isError - input parameter indicative possible errors due to that one from edges have one vertex
  //! Return value : True - if curves were joined successfully,
  //! else - False.
  Standard_EXPORT static   Standard_Boolean JoinCurves (const Handle(Geom2d_Curve)& c2d1, const Handle(Geom2d_Curve)& ac2d2, const TopAbs_Orientation Orient1, const TopAbs_Orientation Orient2, Standard_Real& first1, Standard_Real& last1, Standard_Real& first2, Standard_Real& last2, Handle(Geom2d_Curve)& c2dOut, Standard_Boolean& isRev1, Standard_Boolean& isRev2, const Standard_Boolean isError = Standard_False) ;




protected:





private:




friend class ShapeConstruct_Curve;
friend class ShapeConstruct_ProjectCurveOnSurface;
friend class ShapeConstruct_CompBezierCurvesToBSplineCurve;
friend class ShapeConstruct_CompBezierCurves2dToBSplineCurve2d;
friend class ShapeConstruct_MakeTriangulation;

};







#endif // _ShapeConstruct_HeaderFile
