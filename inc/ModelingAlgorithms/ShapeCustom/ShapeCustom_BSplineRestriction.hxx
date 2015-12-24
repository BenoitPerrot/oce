// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_BSplineRestriction_HeaderFile
#define _ShapeCustom_BSplineRestriction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/ShapeCustom/Handle_ShapeCustom_BSplineRestriction.hxx>

#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/ShapeCustom/Handle_ShapeCustom_RestrictionParameters.hxx>
#include <ModelingData/BRepTools/BRepTools_Modification.hxx>
#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Geometry/Geom/Handle_Geom_Curve.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
class ShapeCustom_RestrictionParameters;
class TopoDS_Face;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class Geom2d_Curve;
class TopoDS_Vertex;
class gp_Pnt;


//! this tool intended for aproximation surfaces, curves and pcurves with
//! specified degree , max number of segments, tolerance 2d, tolerance 3d. Specified
//! continuity can be reduced if approximation with specified continuity was not done.
class ShapeCustom_BSplineRestriction : public BRepTools_Modification
{

public:

  
  //! Empty constructor.
  Standard_EXPORT ShapeCustom_BSplineRestriction();
  
  //! Initializes with specified parameters of aproximation.
  Standard_EXPORT ShapeCustom_BSplineRestriction(const Standard_Boolean anApproxSurfaceFlag, const Standard_Boolean anApproxCurve3dFlag, const Standard_Boolean anApproxCurve2dFlag, const Standard_Real aTol3d, const Standard_Real aTol2d, const GeomAbs_Shape aContinuity3d, const GeomAbs_Shape aContinuity2d, const Standard_Integer aMaxDegree, const Standard_Integer aNbMaxSeg, const Standard_Boolean Degree, const Standard_Boolean Rational);
  
  //! Initializes with specified parameters of aproximation.
  Standard_EXPORT ShapeCustom_BSplineRestriction(const Standard_Boolean anApproxSurfaceFlag, const Standard_Boolean anApproxCurve3dFlag, const Standard_Boolean anApproxCurve2dFlag, const Standard_Real aTol3d, const Standard_Real aTol2d, const GeomAbs_Shape aContinuity3d, const GeomAbs_Shape aContinuity2d, const Standard_Integer aMaxDegree, const Standard_Integer aNbMaxSeg, const Standard_Boolean Degree, const Standard_Boolean Rational, const Handle(ShapeCustom_RestrictionParameters)& aModes);
  
  //! Returns Standard_True if  the  face <F> has   been
  //! modified.  In this  case, <S> is the new geometric
  //! support of  the  face, <L> the new  location,<Tol>
  //! the new   tolerance.<RevWires>  has to be   set to
  //! Standard_True when  the modification reverses  the
  //! normal of  the   surface.(the wires  have   to  be
  //! reversed).  <RevFace>    has   to   be   set    to
  //! Standard_True if  the  orientation of the modified
  //! face changes in the shells which contain it.
  //!
  //! Otherwise, returns Standard_False, and <S>,   <L>,
  //! <Tol> , <RevWires> ,<RevFace> are not  significant.
  Standard_EXPORT   Standard_Boolean NewSurface (const TopoDS_Face& F, Handle(Geom_Surface)& S, TopLoc_Location& L, Standard_Real& Tol, Standard_Boolean& RevWires, Standard_Boolean& RevFace) ;
  
  //! Returns Standard_True  if  curve from the edge <E> has  been
  //! modified.  In this case,  <C> is the new geometric
  //! support of the  edge, <L> the  new location, <Tol>
  //! the         new    tolerance.
  //! Otherwise, returns Standard_True if Surface is modified or
  //! one of pcurves of edge is modified. In this case C is copy of
  //! geometric support of the edge.
  //! In other cases returns Standard_False, and  <C>,  <L>,  <Tol> are not
  //! significant.
  Standard_EXPORT   Standard_Boolean NewCurve (const TopoDS_Edge& E, Handle(Geom_Curve)& C, TopLoc_Location& L, Standard_Real& Tol) ;
  
  //! Returns Standard_True if  the edge  <E> has been modified.
  //! In this case,if curve on the surface is modified, <C>
  //! is the new geometric support of  the edge, <L> the
  //! new location, <Tol> the new tolerance. If curve on the surface
  //! is not modified C is copy curve on surface from the edge <E>.
  //!
  //! Otherwise, returns  Standard_False, and <C>,  <L>,
  //! <Tol> are not significant.
  //!
  //! <NewE> is the new  edge created from  <E>.  <NewF>
  //! is the new face created from <F>. They may be usefull.
  Standard_EXPORT   Standard_Boolean NewCurve2d (const TopoDS_Edge& E, const TopoDS_Face& F, const TopoDS_Edge& NewE, const TopoDS_Face& NewF, Handle(Geom2d_Curve)& C, Standard_Real& Tol) ;
  
  //! Returns Standard_True if  the surface has been modified.
  //! if flag IsOf equals Standard_True Offset surfaces are aproximated to Offset
  //! if Standard_False to BSpline
  Standard_EXPORT   Standard_Boolean ConvertSurface (const Handle(Geom_Surface)& aSurface, Handle(Geom_Surface)& S, const Standard_Real UF, const Standard_Real UL, const Standard_Real VF, const Standard_Real VL, const Standard_Boolean IsOf = Standard_True) ;
  
  //! Returns Standard_True if  the curve has been modified.
  //! if flag IsOf equals Standard_True Offset curves are aproximated to Offset
  //! if Standard_False to BSpline
  Standard_EXPORT   Standard_Boolean ConvertCurve (Handle(Geom_Curve)& aCurve, Handle(Geom_Curve)& C, const Standard_Boolean IsConvert, const Standard_Real First, const Standard_Real Last, Standard_Real& TolCur, const Standard_Boolean IsOf = Standard_True) ;
  
  //! Returns Standard_True if the pcurve has been modified.
  //! if flag IsOf equals Standard_True Offset pcurves are aproximated to Offset
  //! if Standard_False to BSpline
  Standard_EXPORT   Standard_Boolean ConvertCurve2d (Handle(Geom2d_Curve)& aCurve, Handle(Geom2d_Curve)& C, const Standard_Boolean IsConvert, const Standard_Real First, const Standard_Real Last, Standard_Real& TolCur, const Standard_Boolean IsOf = Standard_True) ;
  
  //! Sets tolerance of aproximation for curve3d and surface
      void SetTol3d (const Standard_Real Tol3d) ;
  
  //! Sets tolerance of aproximation for curve2d
      void SetTol2d (const Standard_Real Tol2d) ;
  
  //! Returns (modifiable) the flag which defines whether the
  //! surface is aproximated.
      Standard_Boolean& ModifyApproxSurfaceFlag() ;
  
  //! Returns (modifiable) the flag which defines whether the
  //! curve3d is aproximated.
      Standard_Boolean& ModifyApproxCurve3dFlag() ;
  
  //! Returns (modifiable) the flag which defines whether the curve2d is aproximated.
      Standard_Boolean& ModifyApproxCurve2dFlag() ;
  
  //! Sets continuity3d for aproximation curve3d and surface.
      void SetContinuity3d (const GeomAbs_Shape Continuity3d) ;
  
  //! Sets continuity3d for aproximation curve2d.
      void SetContinuity2d (const GeomAbs_Shape Continuity2d) ;
  
  //! Sets max degree for aproximation.
      void SetMaxDegree (const Standard_Integer MaxDegree) ;
  
  //! Sets max number of segments for aproximation.
      void SetMaxNbSegments (const Standard_Integer MaxNbSegments) ;
  
  //! Sets priority  for aproximation curves and surface.
  //! If Degree is True approximation is made with degree less
  //! then specified MaxDegree at the expense of number of spanes.
  //! If Degree is False approximation is made with number of
  //! spans less then specified MaxNbSegment at the expense of
  //! specified MaxDegree.
      void SetPriority (const Standard_Boolean Degree) ;
  
  //! Sets flag for define if rational BSpline or Bezier is
  //! converted to polynomial. If Rational is True approximation
  //! for rational BSpline and Bezier is made to polynomial even
  //! if degree is less then MaxDegree and number of spans is less
  //! then specified MaxNbSegment.
      void SetConvRational (const Standard_Boolean Rational) ;
  
  //! Returns the container of modes which defines
  //! what geometry should be converted to BSplines.
      Handle(ShapeCustom_RestrictionParameters) GetRestrictionParameters()  const;
  
  //! Sets the container of modes which defines
  //! what geometry should be converted to BSplines.
      void SetRestrictionParameters (const Handle(ShapeCustom_RestrictionParameters)& aModes) ;
  
  //! Returns error for aproximation curve3d.
      Standard_Real Curve3dError()  const;
  
  //! Returns error for aproximation curve2d.
      Standard_Real Curve2dError()  const;
  
  //! Returns error for aproximation surface.
      Standard_Real SurfaceError()  const;
  
  Standard_EXPORT   Standard_Boolean NewPoint (const TopoDS_Vertex& V, gp_Pnt& P, Standard_Real& Tol) ;
  
  Standard_EXPORT   Standard_Boolean NewParameter (const TopoDS_Vertex& V, const TopoDS_Edge& E, Standard_Real& P, Standard_Real& Tol) ;
  
  Standard_EXPORT   GeomAbs_Shape Continuity (const TopoDS_Edge& E, const TopoDS_Face& F1, const TopoDS_Face& F2, const TopoDS_Edge& NewE, const TopoDS_Face& NewF1, const TopoDS_Face& NewF2) ;
  
  //! Returns error for aproximation surface, curve3d and curve2d.
  Standard_EXPORT   Standard_Real MaxErrors (Standard_Real& aCurve3dErr, Standard_Real& aCurve2dErr)  const;
  
  //! Returns number for aproximation surface, curve3d and curve2d.
  Standard_EXPORT   Standard_Integer NbOfSpan()  const;




  DEFINE_STANDARD_RTTI(ShapeCustom_BSplineRestriction)

protected:




private: 


  GeomAbs_Shape myContinuity3d;
  GeomAbs_Shape myContinuity2d;
  Standard_Integer myMaxDegree;
  Standard_Integer myNbMaxSeg;
  Standard_Real myTol3d;
  Standard_Real myTol2d;
  Standard_Real mySurfaceError;
  Standard_Real myCurve3dError;
  Standard_Real myCurve2dError;
  Standard_Integer myNbOfSpan;
  Standard_Boolean myApproxSurfaceFlag;
  Standard_Boolean myApproxCurve3dFlag;
  Standard_Boolean myApproxCurve2dFlag;
  Standard_Boolean myDeg;
  Standard_Boolean myConvert;
  Standard_Boolean myRational;
  Handle(ShapeCustom_RestrictionParameters) myParameters;


};


#include <ModelingAlgorithms/ShapeCustom/ShapeCustom_BSplineRestriction.lxx>





#endif // _ShapeCustom_BSplineRestriction_HeaderFile
