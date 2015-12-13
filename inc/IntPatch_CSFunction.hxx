// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_CSFunction_HeaderFile
#define _IntPatch_CSFunction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Optimization/math_FunctionSetWithDerivatives.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class math_Matrix;
class gp_Pnt;


//! this function is associated to the intersection between
//! a curve on surface and a surface  .
class IntPatch_CSFunction  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! S1 is the surface on which the intersection is searched.
  //! C is a curve on the surface S2.
  Standard_EXPORT IntPatch_CSFunction(const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor2d_HCurve2d)& C, const Handle(Adaptor3d_HSurface)& S2);
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
  Standard_EXPORT  const  gp_Pnt& Point()  const;
  
  Standard_EXPORT   Standard_Real Root()  const;
  
  Standard_EXPORT  const  Handle(Adaptor3d_HSurface)& AuxillarSurface()  const;
  
  Standard_EXPORT  const  Handle(Adaptor2d_HCurve2d)& AuxillarCurve()  const;




protected:





private:



  Standard_Address curve;
  Standard_Address surface1;
  Standard_Address surface2;
  gp_Pnt p;
  Standard_Real f;


};







#endif // _IntPatch_CSFunction_HeaderFile
