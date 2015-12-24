// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dConvert_BSplineCurveToBezierCurve_HeaderFile
#define _Geom2dConvert_BSplineCurveToBezierCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom2d/Handle_Geom2d_BSplineCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_BezierCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Geom2d_BSplineCurve;
class Standard_DimensionError;
class Standard_DomainError;
class Standard_OutOfRange;
class Geom2d_BezierCurve;
class TColGeom2d_Array1OfBezierCurve;
class TColStd_Array1OfReal;


//! An algorithm to convert a BSpline curve into a series
//! of adjacent Bezier curves.
//! A BSplineCurveToBezierCurve object provides a framework for:
//! -   defining the BSpline curve to be converted
//! -   implementing the construction algorithm, and
//! -   consulting the results.
//! References :
//! Generating the Bezier points of B-spline curves and surfaces
//! (Wolfgang Bohm) CAD volume 13 number 6 november 1981
class Geom2dConvert_BSplineCurveToBezierCurve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes all the data needed to convert
  //! -   the BSpline curve BasisCurve, into a series of adjacent Bezier arcs.
  //! The result consists of a series of BasisCurve arcs
  //! limited by points corresponding to knot values of the curve.
  //! Use the available interrogation functions to ascertain
  //! the number of computed Bezier arcs, and then to
  //! construct each individual Bezier curve (or all Bezier curves).
  //! Note: ParametricTolerance is not used.
  Standard_EXPORT Geom2dConvert_BSplineCurveToBezierCurve(const Handle(Geom2d_BSplineCurve)& BasisCurve);
  
  //! Computes all the data needed to convert
  //! the portion of the BSpline curve BasisCurve
  //! limited by the two parameter values U1 and U2
  //! for Example if there is a Knot Uk and
  //! Uk < U < Uk + ParametricTolerance/2 the last curve
  //! corresponds to the span [Uk-1, Uk] and not to  [Uk, Uk+1]
  //! The result consists of a series of BasisCurve arcs
  //! limited by points corresponding to knot values of the curve.
  //! Use the available interrogation functions to ascertain
  //! the number of computed Bezier arcs, and then to
  //! construct each individual Bezier curve (or all Bezier curves).
  //! Note: ParametricTolerance is not used.
  //! Raises DomainError if U1 or U2 are out of the parametric bounds of the basis
  //! curve [FirstParameter, LastParameter]. The Tolerance criterion
  //! is ParametricTolerance.
  //! Raised if Abs (U2 - U1) <= ParametricTolerance.
  Standard_EXPORT Geom2dConvert_BSplineCurveToBezierCurve(const Handle(Geom2d_BSplineCurve)& BasisCurve, const Standard_Real U1, const Standard_Real U2, const Standard_Real ParametricTolerance);
  
  //! Constructs and returns the Bezier curve of index
  //! Index to the table of adjacent Bezier arcs
  //! computed by this algorithm.
  //! This Bezier curve has the same orientation as the
  //! BSpline curve analyzed in this framework.
  //! Exceptions
  //! Standard_OutOfRange if Index is less than 1 or
  //! greater than the number of adjacent Bezier arcs
  //! computed by this algorithm.
  Standard_EXPORT   Handle(Geom2d_BezierCurve) Arc (const Standard_Integer Index) ;
  
  //! Constructs all the Bezier curves whose data is
  //! computed by this algorithm and loads these curves
  //! into the Curves table.
  //! The Bezier curves have the same orientation as the
  //! BSpline curve analyzed in this framework.
  //! Exceptions
  //! Standard_DimensionError if the Curves array was
  //! not created with the following bounds:
  //! -   1 , and
  //! -   the number of adjacent Bezier arcs computed by
  //! this algorithm (as given by the function NbArcs).
  Standard_EXPORT   void Arcs (TColGeom2d_Array1OfBezierCurve& Curves) ;
  
  //! This methode returns the bspline's knots associated to
  //! the converted arcs
  //! Raises DimensionError if the length  of Curves is not equal to
  //! NbArcs +  1
  Standard_EXPORT   void Knots (TColStd_Array1OfReal& TKnots)  const;
  

  //! Returns the number of BezierCurve arcs.
  //! If at the creation time you have decomposed the basis curve
  //! between the parametric values UFirst, ULast the number of
  //! BezierCurve arcs depends on the number of knots included inside
  //! the interval [UFirst, ULast].
  //! If you have decomposed the whole basis B-spline curve the number
  //! of BezierCurve arcs NbArcs is equal to the number of knots less
  //! one.
  Standard_EXPORT   Standard_Integer NbArcs()  const;




protected:





private:



  Handle(Geom2d_BSplineCurve) myCurve;


};







#endif // _Geom2dConvert_BSplineCurveToBezierCurve_HeaderFile
