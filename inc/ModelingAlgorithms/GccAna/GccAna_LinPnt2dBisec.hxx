// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_LinPnt2dBisec_HeaderFile
#define _GccAna_LinPnt2dBisec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/GccInt/Handle_GccInt_Bisec.hxx>
class GccInt_Bisec;
class Standard_ConstructionError;
class StdFail_NotDone;
class gp_Lin2d;
class gp_Pnt2d;


//! Describes functions for building bisecting curves between a 2D line and a point.
//! A bisecting curve between a line and a point is such a
//! curve that each of its points is at the same distance from
//! the circle and the point. It can be a parabola or a line,
//! depending on the relative position of the line and the
//! circle. There is always one unique solution.
//! A LinPnt2dBisec object provides a framework for:
//! - defining the construction of the bisecting curve,
//! - implementing the construction algorithm, and
//! - consulting the result.
class GccAna_LinPnt2dBisec 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a bisecting curve between the line Line1 and the point Point2.
  Standard_EXPORT GccAna_LinPnt2dBisec(const gp_Lin2d& Line1, const gp_Pnt2d& Point2);
  
  //! Returns True if the algorithm succeeded.
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns the number of solutions.
  //! It raises NotDone if the construction algorithm didn't succeed.
  Standard_EXPORT   Handle(GccInt_Bisec) ThisSolution()  const;




protected:





private:



  Standard_Boolean WellDone;
  Handle(GccInt_Bisec) bissol;


};







#endif // _GccAna_LinPnt2dBisec_HeaderFile
