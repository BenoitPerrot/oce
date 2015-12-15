// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_CircPnt2dBisec_HeaderFile
#define _GccAna_CircPnt2dBisec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Circ2d.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_GccInt_Bisec.hxx>
class Standard_OutOfRange;
class StdFail_NotDone;
class gp_Circ2d;
class gp_Pnt2d;
class GccInt_Bisec;


//! Describes functions for building a bisecting curve
//! between a 2D circle and a point.
//! A bisecting curve between a circle and a point is such a
//! curve that each of its points is at the same distance from
//! the circle and the point. It can be an ellipse, hyperbola,
//! circle or line, depending on the relative position of the
//! point and the circle. The algorithm computes all the
//! elementary curves which are solutions.
//! A CircPnt2dBisec object provides a framework for:
//! -   defining the construction of the bisecting curves,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class GccAna_CircPnt2dBisec 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs bisecting curves between the circle Circle1 and the point Point2.
  Standard_EXPORT GccAna_CircPnt2dBisec(const gp_Circ2d& Circle1, const gp_Pnt2d& Point2);
  
  //! Constructs bisecting curves between the circle Circle1 and the point Point2.
  //! Tolerance is used.
  Standard_EXPORT GccAna_CircPnt2dBisec(const gp_Circ2d& Circle1, const gp_Pnt2d& Point2, const Standard_Real Tolerance);
  
  //! Returns true (this construction algorithm never fails).
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns the number of curves, representing solutions computed by this algorithm.
  Standard_EXPORT   Standard_Integer NbSolutions()  const;
  
  //! Returns the solution number Index and raises OutOfRange
  //! exception if Index is greater than the number of solutions.
  //! Exceptions
  //! Standard_OutOfRange if Index is less than zero or
  //! greater than the number of solutions computed by this algorithm.
  Standard_EXPORT   Handle(GccInt_Bisec) ThisSolution (const Standard_Integer Index)  const;




protected:





private:

  
  //! Defines the number and the type of solutions
  //! depending on input data
  Standard_EXPORT   void DefineSolutions() ;


  Standard_Boolean WellDone;
  Standard_Integer NbrSol;
  gp_Circ2d circle;
  gp_Pnt2d point;
  Standard_Integer theposition;
  Standard_Real myTolerance;


};







#endif // _GccAna_CircPnt2dBisec_HeaderFile
