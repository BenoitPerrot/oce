// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeSegment_HeaderFile
#define _GC_MakeSegment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom/Handle_Geom_TrimmedCurve.hxx>
#include <Geometry/GC/GC_Root.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Geom_TrimmedCurve;
class StdFail_NotDone;
class gp_Pnt;
class gp_Lin;


//! Implements construction algorithms for a line
//! segment in 3D space.
//! Makes a segment of Line from the 2 points <P1> and <P2>.
//! The result is a Geom_TrimmedCurve curve.
//! A MakeSegment object provides a framework for:
//! -   defining the construction of the line segment,
//! -   implementing the construction algorithm, and
//! -   consulting the results. In particular, the Value
//! function returns the constructed line segment.
class GC_MakeSegment  : public GC_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make a segment of Line from the 2 points <P1> and <P2>.
  //! It returns NullObject if <P1> and <P2> are confused.
  Standard_EXPORT GC_MakeSegment(const gp_Pnt& P1, const gp_Pnt& P2);
  
  //! Make a segment of Line from the line <Line1>
  //! between the two parameters U1 and U2.
  //! It returns NullObject if <U1> is equal <U2>.
  Standard_EXPORT GC_MakeSegment(const gp_Lin& Line, const Standard_Real U1, const Standard_Real U2);
  
  //! Make a segment of Line from the line <Line1>
  //! between the point <Point> and the parameter Ulast.
  //! It returns NullObject if <U1> is equal <U2>.
  Standard_EXPORT GC_MakeSegment(const gp_Lin& Line, const gp_Pnt& Point, const Standard_Real Ulast);
  
  //! Make a segment of Line from the line <Line1>
  //! between the two points <P1> and <P2>.
  //! It returns NullObject if <U1> is equal <U2>.
  Standard_EXPORT GC_MakeSegment(const gp_Lin& Line, const gp_Pnt& P1, const gp_Pnt& P2);
  
  //! Returns the constructed line segment.
  Standard_EXPORT  const  Handle(Geom_TrimmedCurve)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom_TrimmedCurve)& Operator()  const;
Standard_EXPORT operator Handle_Geom_TrimmedCurve() const;




protected:





private:



  Handle(Geom_TrimmedCurve) TheSegment;


};







#endif // _GC_MakeSegment_HeaderFile
