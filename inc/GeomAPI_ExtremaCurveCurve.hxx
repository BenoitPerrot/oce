// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomAPI_ExtremaCurveCurve_HeaderFile
#define _GeomAPI_ExtremaCurveCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Extrema_ExtCC.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Quantity/Quantity_Parameter.hxx>
#include <Foundation/Quantity/Quantity_Length.hxx>
class Standard_OutOfRange;
class StdFail_NotDone;
class Geom_Curve;
class gp_Pnt;
class Extrema_ExtCC;


//! Describes functions for computing all the extrema
//! between two 3D curves.
//! An ExtremaCurveCurve algorithm minimizes or
//! maximizes the distance between a point on the first
//! curve and a point on the second curve. Thus, it
//! computes start and end points of perpendiculars
//! common to the two curves (an intersection point is
//! not an extremum unless the two curves are tangential at this point).
//! Solutions consist of pairs of points, and an extremum
//! is considered to be a segment joining the two points of a solution.
//! An ExtremaCurveCurve object provides a framework for:
//! -   defining the construction of the extrema,
//! -   implementing the construction algorithm, and
//! -   consulting the results.
//! Warning
//! In some cases, the nearest points between two
//! curves do not correspond to one of the computed
//! extrema. Instead, they may be given by:
//! -   a limit point of one curve and one of the following:
//! -   its orthogonal projection on the other curve,
//! -   a limit point of the other curve; or
//! -   an intersection point between the two curves.
class GeomAPI_ExtremaCurveCurve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs an empty algorithm for computing
  //! extrema between two curves. Use an Init function
  //! to define the curves on which it is going to work.
  Standard_EXPORT GeomAPI_ExtremaCurveCurve();
  
  //! Computes the extrema between the curves C1 and C2.
  Standard_EXPORT GeomAPI_ExtremaCurveCurve(const Handle(Geom_Curve)& C1, const Handle(Geom_Curve)& C2);
  
  //! Computes   the portion of the curve C1 limited by the two
  //! points of parameter (U1min,U1max), and
  //! -   the portion of the curve C2 limited by the two
  //! points of parameter (U2min,U2max).
  //! Warning
  //! Use the function NbExtrema to obtain the number
  //! of solutions. If this algorithm fails, NbExtrema returns 0.
  Standard_EXPORT GeomAPI_ExtremaCurveCurve(const Handle(Geom_Curve)& C1, const Handle(Geom_Curve)& C2, const Quantity_Parameter U1min, const Quantity_Parameter U1max, const Quantity_Parameter U2min, const Quantity_Parameter U2max);
  
  //! Initializes this algorithm with the given arguments
  //! and computes the extrema between the curves C1 and C2
  Standard_EXPORT   void Init (const Handle(Geom_Curve)& C1, const Handle(Geom_Curve)& C2) ;
  
  //! Initializes this algorithm with the given arguments
  //! and computes the extrema between :
  //! -   the portion of the curve C1 limited by the two
  //! points of parameter (U1min,U1max), and
  //! -   the portion of the curve C2 limited by the two
  //! points of parameter (U2min,U2max).
  //! Warning
  //! Use the function NbExtrema to obtain the number
  //! of solutions. If this algorithm fails, NbExtrema returns 0.
  Standard_EXPORT   void Init (const Handle(Geom_Curve)& C1, const Handle(Geom_Curve)& C2, const Quantity_Parameter U1min, const Quantity_Parameter U1max, const Quantity_Parameter U2min, const Quantity_Parameter U2max) ;
  
  //! Returns the number of extrema computed by this algorithm.
  //! Note: if this algorithm fails, NbExtrema returns 0.
  Standard_EXPORT   Standard_Integer NbExtrema()  const;
Standard_EXPORT operator Standard_Integer() const;
  
  //! Returns the points P1 on the first curve and P2 on
  //! the second curve, which are the ends of the
  //! extremum of index Index computed by this algorithm.
  //! Exceptions
  //! Standard_OutOfRange if Index is not in the range [
  //! 1,NbExtrema ], where NbExtrema is the
  //! number of extrema computed by this algorithm.
  Standard_EXPORT   void Points (const Standard_Integer Index, gp_Pnt& P1, gp_Pnt& P2)  const;
  
  //! Returns the parameters U1 of the point on the first
  //! curve and U2 of the point on the second curve, which
  //! are the ends of the extremum of index Index computed by this algorithm.
  //! Exceptions
  //! Standard_OutOfRange if Index is not in the range [
  //! 1,NbExtrema ], where NbExtrema is the
  //! number of extrema computed by this algorithm.
  Standard_EXPORT   void Parameters (const Standard_Integer Index, Quantity_Parameter& U1, Quantity_Parameter& U2)  const;
  
  //! Computes the distance between the end points of the
  //! extremum of index Index computed by this algorithm.
  //! Exceptions
  //! Standard_OutOfRange if Index is not in the range [
  //! 1,NbExtrema ], where NbExtrema is the
  //! number of extrema computed by this algorithm.
  Standard_EXPORT   Quantity_Length Distance (const Standard_Integer Index)  const;
  
  //! Returns the points P1 on the first curve and P2 on
  //! the second curve, which are the ends of the shortest
  //! extremum computed by this algorithm.
  //! Exceptions StdFail_NotDone if this algorithm fails.
  Standard_EXPORT   void NearestPoints (gp_Pnt& P1, gp_Pnt& P2)  const;
  
  //! Returns the parameters U1 of the point on the first
  //! curve and U2 of the point on the second curve, which
  //! are the ends of the shortest extremum computed by this algorithm.
  //! Exceptions StdFail_NotDone if this algorithm fails.
  Standard_EXPORT   void LowerDistanceParameters (Quantity_Parameter& U1, Quantity_Parameter& U2)  const;
  
  //! Computes the distance between the end points of the
  //! shortest extremum computed by this algorithm.
  //! Exceptions StdFail_NotDone if this algorithm fails.
  Standard_EXPORT   Quantity_Length LowerDistance()  const;
Standard_EXPORT operator Standard_Real() const;
  
  //! return the algorithmic object from Extrema
     const  Extrema_ExtCC& Extrema()  const;
  
  //! set  in  <P1>  and <P2> the couple solution points
  //! such a the distance [P1,P2] is the minimum. taking  in  account
  //! extremity  points  of  curves.
  Standard_EXPORT   Standard_Boolean TotalNearestPoints (gp_Pnt& P1, gp_Pnt& P2) ;
  
  //! set  in <U1> and <U2> the parameters of the couple
  //! solution   points  which  represents  the  total  nearest
  //! solution.
  Standard_EXPORT   Standard_Boolean TotalLowerDistanceParameters (Quantity_Parameter& U1, Quantity_Parameter& U2) ;
  
  //! return the distance of the total  nearest couple solution
  //! point.
  //! if <myExtCC> is not done
  Standard_EXPORT   Quantity_Length TotalLowerDistance() ;




protected:





private:

  
  Standard_EXPORT   void TotalPerform() ;


  Standard_Boolean myIsDone;
  Standard_Integer myIndex;
  Extrema_ExtCC myExtCC;
  GeomAdaptor_Curve myC1;
  GeomAdaptor_Curve myC2;
  Standard_Boolean myTotalExt;
  Standard_Boolean myIsInfinite;
  Standard_Real myTotalDist;
  gp_Pnt myTotalPoints[2];
  Standard_Real myTotalPars[2];


};


#include <GeomAPI_ExtremaCurveCurve.lxx>





#endif // _GeomAPI_ExtremaCurveCurve_HeaderFile
