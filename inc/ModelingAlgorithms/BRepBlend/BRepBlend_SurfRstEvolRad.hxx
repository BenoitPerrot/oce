// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_SurfRstEvolRad_HeaderFile
#define _BRepBlend_SurfRstEvolRad_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_CurveOnSurface.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/BlendFunc/BlendFunc_SectionShape.hxx>
#include <Mathematics/Convert/Convert_ParameterisationType.hxx>
#include <ModelingAlgorithms/Law/Handle_Law_Function.hxx>
#include <ModelingAlgorithms/Blend/Blend_SurfRstFunction.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class Adaptor3d_HCurve;
class Law_Function;
class math_Matrix;
class gp_Pnt;
class gp_Pnt2d;
class gp_Vec;
class gp_Vec2d;
class gp_Circ;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class Blend_Point;
class TColgp_Array1OfPnt;
class TColgp_Array1OfVec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;


//! Function  to approximate by AppSurface  for
//! Edge/Face  and  evolutif  radius
class BRepBlend_SurfRstEvolRad  : public Blend_SurfRstFunction
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepBlend_SurfRstEvolRad(const Handle(Adaptor3d_HSurface)& Surf, const Handle(Adaptor3d_HSurface)& SurfRst, const Handle(Adaptor2d_HCurve2d)& Rst, const Handle(Adaptor3d_HCurve)& CGuide, const Handle(Law_Function)& Evol);
  
  //! Returns 3.
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  //! Returns 3.
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
  
  Standard_EXPORT   void Set (const Handle(Adaptor3d_HSurface)& SurfRef, const Handle(Adaptor2d_HCurve2d)& RstRef) ;
  
  Standard_EXPORT   void Set (const Standard_Real Param) ;
  
  //! Sets the bounds of the parametric interval on
  //! the guide line.
  //! This determines the derivatives in these values if the
  //! function is not Cn.
  Standard_EXPORT   void Set (const Standard_Real First, const Standard_Real Last) ;
  
  Standard_EXPORT   void GetTolerance (math_Vector& Tolerance, const Standard_Real Tol)  const;
  
  Standard_EXPORT   void GetBounds (math_Vector& InfBound, math_Vector& SupBound)  const;
  
  Standard_EXPORT   Standard_Boolean IsSolution (const math_Vector& Sol, const Standard_Real Tol) ;
  
  //! Returns   the    minimal  Distance  beetween   two
  //! extremitys of calculed sections.
  Standard_EXPORT virtual   Standard_Real GetMinimalDistance()  const;
  
  Standard_EXPORT  const  gp_Pnt& PointOnS()  const;
  
  Standard_EXPORT  const  gp_Pnt& PointOnRst()  const;
  
  //! Returns U,V coordinates of the point on the surface.
  Standard_EXPORT  const  gp_Pnt2d& Pnt2dOnS()  const;
  
  //! Returns  U,V coordinates of the point  on the curve on
  //! surface.
  Standard_EXPORT  const  gp_Pnt2d& Pnt2dOnRst()  const;
  
  //! Returns parameter of the point on the curve.
  Standard_EXPORT   Standard_Real ParameterOnRst()  const;
  
  Standard_EXPORT   Standard_Boolean IsTangencyPoint()  const;
  
  Standard_EXPORT  const  gp_Vec& TangentOnS()  const;
  
  Standard_EXPORT  const  gp_Vec2d& Tangent2dOnS()  const;
  
  Standard_EXPORT  const  gp_Vec& TangentOnRst()  const;
  
  Standard_EXPORT  const  gp_Vec2d& Tangent2dOnRst()  const;
  
  //! Permet  d ' implementer   un   critere  de  decrochage
  //! specifique a la fonction.
  Standard_EXPORT   Standard_Boolean Decroch (const math_Vector& Sol, gp_Vec& NS, gp_Vec& TgS)  const;
  
  Standard_EXPORT   void Set (const Standard_Integer Choix) ;
  
  //! Sets  the  type  of   section generation   for the
  //! approximations.
  Standard_EXPORT   void Set (const BlendFunc_SectionShape TypeSection) ;
  
  Standard_EXPORT   void Section (const Standard_Real Param, const Standard_Real U, const Standard_Real V, const Standard_Real W, Standard_Real& Pdeb, Standard_Real& Pfin, gp_Circ& C) ;
  
  //! Returns  if the section is rationnal
  Standard_EXPORT   Standard_Boolean IsRational()  const;
  
  //! Returns the length of the maximum section
  Standard_EXPORT   Standard_Real GetSectionSize()  const;
  
  //! Compute the minimal value of weight for each poles
  //! of all sections.
  Standard_EXPORT   void GetMinimalWeight (TColStd_Array1OfReal& Weigths)  const;
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>. May be one if Continuity(me) >= <S>
  Standard_EXPORT   Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  Standard_EXPORT   void GetShape (Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree, Standard_Integer& NbPoles2d) ;
  
  //! Returns the tolerance to reach in approximation
  //! to respecte
  //! BoundTol error at the Boundary
  //! AngleTol tangent error at the Boundary
  //! SurfTol error inside the surface.
  Standard_EXPORT   void GetTolerance (const Standard_Real BoundTol, const Standard_Real SurfTol, const Standard_Real AngleTol, math_Vector& Tol3d, math_Vector& Tol1D)  const;
  
  Standard_EXPORT   void Knots (TColStd_Array1OfReal& TKnots) ;
  
  Standard_EXPORT   void Mults (TColStd_Array1OfInteger& TMults) ;
  
  //! Used for the first and last section
  Standard_EXPORT   Standard_Boolean Section (const Blend_Point& P, TColgp_Array1OfPnt& Poles, TColgp_Array1OfVec& DPoles, TColgp_Array1OfPnt2d& Poles2d, TColgp_Array1OfVec2d& DPoles2d, TColStd_Array1OfReal& Weigths, TColStd_Array1OfReal& DWeigths) ;
  
  //! Used for the first and last section
  //! The method returns Standard_True if the derivatives
  //! are computed, otherwise it returns Standard_False.
  Standard_EXPORT   Standard_Boolean Section (const Blend_Point& P, TColgp_Array1OfPnt& Poles, TColgp_Array1OfVec& DPoles, TColgp_Array1OfVec& D2Poles, TColgp_Array1OfPnt2d& Poles2d, TColgp_Array1OfVec2d& DPoles2d, TColgp_Array1OfVec2d& D2Poles2d, TColStd_Array1OfReal& Weigths, TColStd_Array1OfReal& DWeigths, TColStd_Array1OfReal& D2Weigths) ;
  
  Standard_EXPORT   void Section (const Blend_Point& P, TColgp_Array1OfPnt& Poles, TColgp_Array1OfPnt2d& Poles2d, TColStd_Array1OfReal& Weigths) ;
  
  Standard_EXPORT   void Resolution (const Standard_Integer IC2d, const Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV)  const;




protected:





private:



  Handle(Adaptor3d_HSurface) surf;
  Handle(Adaptor3d_HSurface) surfrst;
  Handle(Adaptor2d_HCurve2d) rst;
  Adaptor3d_CurveOnSurface cons;
  Handle(Adaptor3d_HCurve) guide;
  Handle(Adaptor3d_HCurve) tguide;
  gp_Pnt pts;
  gp_Pnt ptrst;
  gp_Pnt2d pt2ds;
  gp_Pnt2d pt2drst;
  Standard_Real prmrst;
  Standard_Boolean istangent;
  gp_Vec tgs;
  gp_Vec2d tg2ds;
  gp_Vec tgrst;
  gp_Vec2d tg2drst;
  Standard_Real ray;
  Standard_Real dray;
  Standard_Integer choix;
  gp_Pnt ptgui;
  gp_Vec d1gui;
  gp_Vec d2gui;
  gp_Vec nplan;
  Standard_Real normtg;
  Standard_Real theD;
  Handle(Adaptor3d_HSurface) surfref;
  Handle(Adaptor2d_HCurve2d) rstref;
  Standard_Real maxang;
  Standard_Real minang;
  Standard_Real distmin;
  BlendFunc_SectionShape mySShape;
  Convert_ParameterisationType myTConv;
  Handle(Law_Function) tevol;
  Handle(Law_Function) fevol;
  Standard_Real sg1;


};







#endif // _BRepBlend_SurfRstEvolRad_HeaderFile
