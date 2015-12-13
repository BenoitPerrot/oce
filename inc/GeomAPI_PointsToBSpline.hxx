// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomAPI_PointsToBSpline_HeaderFile
#define _GeomAPI_PointsToBSpline_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Approx_ParametrizationType.hxx>
class Geom_BSplineCurve;
class StdFail_NotDone;
class Standard_OutOfRange;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;


//! This  class  is  used  to  approximate a  BsplineCurve
//! passing  through an  array  of points,  with  a  given Continuity.
//! Describes functions for building a 3D BSpline
//! curve which approximates a set of points.
//! A PointsToBSpline object provides a framework for:
//! -   defining the data of the BSpline curve to be built,
//! -   implementing the approximation algorithm, and consulting the results.
class GeomAPI_PointsToBSpline 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs an empty approximation algorithm.
  //! Use an Init function to define and build the BSpline curve.
  Standard_EXPORT GeomAPI_PointsToBSpline();
  
  //! Approximate  a BSpline  Curve passing  through  an
  //! array of  Point.  The resulting BSpline will  have
  //! the following properties:
  //! 1- his degree will be in the range [Degmin,Degmax]
  //! 2- his  continuity will be  at  least <Continuity>
  //! 3- the distance from the point <Points> to the
  //! BSpline will be lower to Tol3D
  Standard_EXPORT GeomAPI_PointsToBSpline(const TColgp_Array1OfPnt& Points, const Standard_Integer DegMin = 3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3);
  
  //! Approximate  a BSpline  Curve passing  through  an
  //! array of  Point.  The resulting BSpline will  have
  //! the following properties:
  //! 1- his degree will be in the range [Degmin,Degmax]
  //! 2- his  continuity will be  at  least <Continuity>
  //! 3- the distance from the point <Points> to the
  //! BSpline will be lower to Tol3D
  Standard_EXPORT GeomAPI_PointsToBSpline(const TColgp_Array1OfPnt& Points, const Approx_ParametrizationType ParType, const Standard_Integer DegMin = 3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3);
  
  //! Approximate  a  BSpline  Curve  passing through an
  //! array of Point,  which parameters are given by the
  //! array <Parameters>.
  //! The resulting  BSpline   will have the   following
  //! properties:
  //! 1- his degree will be in the range [Degmin,Degmax]
  //! 2- his  continuity will be  at  least <Continuity>
  //! 3- the distance from the point <Points> to the
  //! BSpline will be lower to Tol3D
  Standard_EXPORT GeomAPI_PointsToBSpline(const TColgp_Array1OfPnt& Points, const TColStd_Array1OfReal& Parameters, const Standard_Integer DegMin = 3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3);
  
  //! Approximate a BSpline Curve  passing through an
  //! array of Point using variational smoothing algorithm,
  //! which tries to minimize additional criterium:
  //! Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
  Standard_EXPORT GeomAPI_PointsToBSpline(const TColgp_Array1OfPnt& Points, const Standard_Real Weight1, const Standard_Real Weight2, const Standard_Real Weight3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3);
  
  //! Approximate  a BSpline  Curve passing  through  an
  //! array of  Point.  The resulting BSpline will  have
  //! the following properties:
  //! 1- his degree will be in the range [Degmin,Degmax]
  //! 2- his  continuity will be  at  least <Continuity>
  //! 3- the distance from the point <Points> to the
  //! BSpline will be lower to Tol3D
  Standard_EXPORT   void Init (const TColgp_Array1OfPnt& Points, const Standard_Integer DegMin = 3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3) ;
  
  //! Approximate  a BSpline  Curve passing  through  an
  //! array of  Point.  The resulting BSpline will  have
  //! the following properties:
  //! 1- his degree will be in the range [Degmin,Degmax]
  //! 2- his  continuity will be  at  least <Continuity>
  //! 3- the distance from the point <Points> to the
  //! BSpline will be lower to Tol3D
  Standard_EXPORT   void Init (const TColgp_Array1OfPnt& Points, const Approx_ParametrizationType ParType, const Standard_Integer DegMin = 3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3) ;
  
  //! Approximate  a  BSpline  Curve  passing through an
  //! array of Point,  which parameters are given by the
  //! array <Parameters>.
  //! The resulting  BSpline   will have the   following
  //! properties:
  //! 1- his degree will be in the range [Degmin,Degmax]
  //! 2- his  continuity will be  at  least <Continuity>
  //! 3- the distance from the point <Points> to the
  //! BSpline will be lower to Tol3D
  Standard_EXPORT   void Init (const TColgp_Array1OfPnt& Points, const TColStd_Array1OfReal& Parameters, const Standard_Integer DegMin = 3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3) ;
  
  //! Approximate a BSpline Curve  passing through an
  //! array of Point using variational smoothing algorithm,
  //! which tries to minimize additional criterium:
  //! Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
  Standard_EXPORT   void Init (const TColgp_Array1OfPnt& Points, const Standard_Real Weight1, const Standard_Real Weight2, const Standard_Real Weight3, const Standard_Integer DegMax = 8, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Real Tol3D = 1.0e-3) ;
  
  //! Returns the computed BSpline curve.
  //! Raises StdFail_NotDone if the curve is not built.
  Standard_EXPORT  const  Handle(Geom_BSplineCurve)& Curve()  const;
Standard_EXPORT  operator Handle(Geom_BSplineCurve)() const;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;




protected:





private:



  Standard_Boolean myIsDone;
  Handle(Geom_BSplineCurve) myCurve;


};







#endif // _GeomAPI_PointsToBSpline_HeaderFile
