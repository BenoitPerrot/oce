// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_CurvPointRadInv_HeaderFile
#define _BRepBlend_CurvPointRadInv_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Blend_CurvPointFuncInv.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <math_Vector.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Adaptor3d_HCurve;
class math_Matrix;
class gp_Pnt;


//! Function of reframing between a point and a curve.
//! valid in cases of constant and progressive radius.
//! This function  is used  to find a  solution on  a done
//! point   of   the curve 1 when   using  RstRstConsRad or
//! CSConstRad...
//! The vector <X>  used in Value, Values and  Derivatives
//! methods  has  to   be the  vector   of the  parametric
//! coordinates w, U where w is  the parameter  on the
//! guide line, U   are the parametric coordinates of  a
//! point on the partner curve 2.
class BRepBlend_CurvPointRadInv  : public Blend_CurvPointFuncInv
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepBlend_CurvPointRadInv(const Handle(Adaptor3d_HCurve)& C1, const Handle(Adaptor3d_HCurve)& C2);
  
  Standard_EXPORT   void Set (const Standard_Integer Choix) ;
  
  //! returns 2.
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
  
  //! Set the Point on which a solution has to be found.
  Standard_EXPORT   void Set (const gp_Pnt& P) ;
  
  //! Returns in the vector Tolerance the parametric tolerance
  //! for each of the 3 variables;
  //! Tol is the tolerance used in 3d space.
  Standard_EXPORT   void GetTolerance (math_Vector& Tolerance, const Standard_Real Tol)  const;
  
  //! Returns in the vector InfBound the lowest values allowed
  //! for each of the 3 variables.
  //! Returns in the vector SupBound the greatest values allowed
  //! for each of the 3 variables.
  Standard_EXPORT   void GetBounds (math_Vector& InfBound, math_Vector& SupBound)  const;
  
  //! Returns Standard_True if Sol is a zero of the function.
  //! Tol is the tolerance used in 3d space.
  Standard_EXPORT   Standard_Boolean IsSolution (const math_Vector& Sol, const Standard_Real Tol) ;




protected:





private:



  Handle(Adaptor3d_HCurve) curv1;
  Handle(Adaptor3d_HCurve) curv2;
  gp_Pnt point;
  Standard_Integer choix;


};







#endif // _BRepBlend_CurvPointRadInv_HeaderFile
