// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dLProp_NumericCurInf2d_HeaderFile
#define _Geom2dLProp_NumericCurInf2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Geom2d_Curve;
class LProp_CurAndInf;


//! Computes the locals extremas of curvature and the
//! inflections of a bounded curve in 2d.
class Geom2dLProp_NumericCurInf2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dLProp_NumericCurInf2d();
  
  //! Computes the locals extremas of curvature.
  Standard_EXPORT   void PerformCurExt (const Handle(Geom2d_Curve)& C, LProp_CurAndInf& Result) ;
  
  //! Computes the inflections.
  Standard_EXPORT   void PerformInf (const Handle(Geom2d_Curve)& C, LProp_CurAndInf& Result) ;
  
  //! Computes the locals extremas of curvature.
  //! in the interval of parmeters [UMin,UMax].
  Standard_EXPORT   void PerformCurExt (const Handle(Geom2d_Curve)& C, const Standard_Real UMin, const Standard_Real UMax, LProp_CurAndInf& Result) ;
  
  //! Computes the inflections in the interval of
  //! parmeters [UMin,UMax].
  Standard_EXPORT   void PerformInf (const Handle(Geom2d_Curve)& C, const Standard_Real UMin, const Standard_Real UMax, LProp_CurAndInf& Result) ;
  
  //! True if the solutions are found.
  Standard_EXPORT   Standard_Boolean IsDone()  const;




protected:





private:



  Standard_Boolean isDone;


};







#endif // _Geom2dLProp_NumericCurInf2d_HeaderFile
