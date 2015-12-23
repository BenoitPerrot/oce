// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_EvolRadInv_HeaderFile
#define _BlendFunc_EvolRadInv_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Handle_Law_Function.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/Blend/Blend_FuncInv.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Adaptor2d_HCurve2d;
class Law_Function;
class math_Matrix;



class BlendFunc_EvolRadInv  : public Blend_FuncInv
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BlendFunc_EvolRadInv(const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor3d_HSurface)& S2, const Handle(Adaptor3d_HCurve)& C, const Handle(Law_Function)& Law);
  
  Standard_EXPORT   void Set (const Standard_Boolean OnFirst, const Handle(Adaptor2d_HCurve2d)& COnSurf) ;
  
  Standard_EXPORT   void GetTolerance (math_Vector& Tolerance, const Standard_Real Tol)  const;
  
  Standard_EXPORT   void GetBounds (math_Vector& InfBound, math_Vector& SupBound)  const;
  
  Standard_EXPORT   Standard_Boolean IsSolution (const math_Vector& Sol, const Standard_Real Tol) ;
  
  //! returns the number of equations of the function.
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  //! computes the values <F> of the Functions for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  //! returns the values <D> of the derivatives for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  //! returns the values <F> of the functions and the derivatives
  //! <D> for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
  Standard_EXPORT   void Set (const Standard_Integer Choix) ;




protected:





private:



  Handle(Adaptor3d_HSurface) surf1;
  Handle(Adaptor3d_HSurface) surf2;
  Handle(Adaptor3d_HCurve) curv;
  Handle(Adaptor2d_HCurve2d) csurf;
  Handle(Law_Function) fevol;
  Standard_Real sg1;
  Standard_Real sg2;
  Standard_Integer choix;
  Standard_Boolean first;


};







#endif // _BlendFunc_EvolRadInv_HeaderFile
