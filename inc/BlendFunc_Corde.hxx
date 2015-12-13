// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_Corde_HeaderFile
#define _BlendFunc_Corde_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <math_Vector.hxx>
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Standard_DomainError;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;


//! This function calculates point (pts) on the curve of
//! intersection between the normal to a curve (guide)
//! in a chosen parameter and a surface  (surf), so
//! that pts was at a given distance from the guide.
//! X(1),X(2) are the parameters U,V of pts on surf.
class BlendFunc_Corde 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BlendFunc_Corde(const Handle(Adaptor3d_HSurface)& S, const Handle(Adaptor3d_HCurve)& CGuide);
  
  Standard_EXPORT   void SetParam (const Standard_Real Param) ;
  
  Standard_EXPORT   void SetDist (const Standard_Real Dist) ;
  
  //! computes the values <F> of the Function for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  //! returns the values <D> of the derivatives for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT  const  gp_Pnt& PointOnS()  const;
  
  //! returns the point of parameter <Param> on CGuide
  Standard_EXPORT  const  gp_Pnt& PointOnGuide()  const;
  
  //! returns the normal to CGuide at Ptgui.
  Standard_EXPORT  const  gp_Vec& NPlan()  const;
  
  //! Returns True when it is not possible to compute
  //! the tangent vectors at PointOnS.
  Standard_EXPORT   Standard_Boolean IsTangencyPoint()  const;
  
  //! Returns the tangent vector at PointOnS, in 3d space.
  Standard_EXPORT  const  gp_Vec& TangentOnS()  const;
  
  //! Returns the tangent vector at PointOnS, in the
  //! parametric space of the first surface.
  Standard_EXPORT  const  gp_Vec2d& Tangent2dOnS()  const;
  
  //! Derived of the function compared to the parameter
  //! of the guideline
  Standard_EXPORT   void DerFguide (const math_Vector& Sol, gp_Vec2d& DerF) ;
  
  //! Returns False if Sol is not solution else returns
  //! True and updates the fields tgs and tg2d
  Standard_EXPORT   Standard_Boolean IsSolution (const math_Vector& Sol, const Standard_Real Tol) ;




protected:





private:



  Handle(Adaptor3d_HSurface) surf;
  Handle(Adaptor3d_HCurve) guide;
  gp_Pnt pts;
  gp_Pnt2d pt2d;
  Standard_Real dis;
  Standard_Real normtg;
  Standard_Real theD;
  gp_Pnt ptgui;
  gp_Vec nplan;
  gp_Vec d1gui;
  gp_Vec d2gui;
  gp_Vec tgs;
  gp_Vec2d tg2d;
  Standard_Boolean istangent;


};







#endif // _BlendFunc_Corde_HeaderFile
