// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_FunctionGuide_HeaderFile
#define _GeomFill_FunctionGuide_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor3d_HCurve.hxx>
#include <Handle_GeomFill_SectionLaw.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <gp_XYZ.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <math_Vector.hxx>
class Adaptor3d_HCurve;
class GeomFill_SectionLaw;
class Geom_Curve;
class Geom_Surface;
class gp_Pnt;
class gp_XYZ;
class math_Matrix;
class gp_Vec;



class GeomFill_FunctionGuide  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_FunctionGuide(const Handle(GeomFill_SectionLaw)& S, const Handle(Adaptor3d_HCurve)& Guide, const Standard_Real ParamOnLaw = 0.0);
  
  Standard_EXPORT   void SetParam (const Standard_Real Param, const gp_Pnt& Centre, const gp_XYZ& Dir, const gp_XYZ& XDir) ;
  
  //! returns the number of variables of the function.
  Standard_EXPORT virtual   Standard_Integer NbVariables()  const;
  
  //! returns the number of equations of the function.
  Standard_EXPORT virtual   Standard_Integer NbEquations()  const;
  
  //! computes the values <F> of the Functions for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  //! returns the values <D> of the derivatives for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  //! returns the values <F> of the functions and the derivatives
  //! <D> for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
  //! returns the values <F> of the T derivatives for
  //! the parameter Param .
  Standard_EXPORT   Standard_Boolean DerivT (const math_Vector& X, const gp_XYZ& DCentre, const gp_XYZ& DDir, math_Vector& DFDT) ;
  
  //! returns the values <F> of the T2 derivatives for
  //! the parameter Param .
  //! returns the values <D> of  the TX derivatives for
  //! the parameter Param .
  //! returns Boolean  is static;
  //! returns the values <T> of  the X2 derivatives for
  //! the parameter Param .
  //! returns Boolean  is static;
  Standard_EXPORT   Standard_Boolean Deriv2T (const gp_XYZ& DCentre, const gp_XYZ& DDir, math_Vector& DFDT, math_Vector& D2FT) ;




protected:





private:

  
  Standard_EXPORT   void DSDT (const Standard_Real U, const Standard_Real V, const gp_XYZ& DCentre, const gp_XYZ& DDir, gp_Vec& DSDT)  const;


  Handle(Adaptor3d_HCurve) TheGuide;
  Handle(GeomFill_SectionLaw) TheLaw;
  Standard_Boolean isconst;
  Handle(Geom_Curve) TheCurve;
  Handle(Geom_Curve) TheConst;
  Handle(Geom_Surface) TheSurface;
  Standard_Real First;
  Standard_Real Last;
  Standard_Real TheUonS;
  gp_XYZ Centre;
  gp_XYZ Dir;


};







#endif // _GeomFill_FunctionGuide_HeaderFile
