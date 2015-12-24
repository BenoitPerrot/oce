// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bisector_FunctionInter_HeaderFile
#define _Bisector_FunctionInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
#include <ModelingAlgorithms/Bisector/Handle_Bisector_Curve.hxx>
#include <Mathematics/Optimization/math_FunctionWithDerivative.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Geom2d_Curve;
class Bisector_Curve;


//! 2                      2
//! F(u) =  (PC(u) - PBis1(u))   + (PC(u) - PBis2(u))
class Bisector_FunctionInter  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Bisector_FunctionInter();
  
  Standard_EXPORT Bisector_FunctionInter(const Handle(Geom2d_Curve)& C, const Handle(Bisector_Curve)& Bis1, const Handle(Bisector_Curve)& Bis2);
  
  Standard_EXPORT   void Perform (const Handle(Geom2d_Curve)& C, const Handle(Bisector_Curve)& Bis1, const Handle(Bisector_Curve)& Bis2) ;
  
  //! Computes the values of the Functions for the variable <X>.
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& D) ;
  
  //! Returns the values of the functions and the derivatives
  //! for the variable <X>.
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;




protected:





private:



  Handle(Geom2d_Curve) curve;
  Handle(Bisector_Curve) bisector1;
  Handle(Bisector_Curve) bisector2;


};







#endif // _Bisector_FunctionInter_HeaderFile
