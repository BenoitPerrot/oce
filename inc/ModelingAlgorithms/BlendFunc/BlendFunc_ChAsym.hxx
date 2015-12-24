// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_ChAsym_HeaderFile
#define _BlendFunc_ChAsym_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/Blend/Blend_Function.hxx>
#include <GeomAbs_Shape.hxx>
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;
class gp_Lin;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class Blend_Point;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec;
class TColgp_Array1OfVec2d;



class BlendFunc_ChAsym  : public Blend_Function
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BlendFunc_ChAsym(const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor3d_HSurface)& S2, const Handle(Adaptor3d_HCurve)& C);
  
  //! returns the number of equations of the function.
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   void Set (const Standard_Real Param) ;
  
  Standard_EXPORT   void Set (const Standard_Real First, const Standard_Real Last) ;
  
  Standard_EXPORT   void GetTolerance (math_Vector& Tolerance, const Standard_Real Tol)  const;
  
  Standard_EXPORT   void GetBounds (math_Vector& InfBound, math_Vector& SupBound)  const;
  
  Standard_EXPORT   Standard_Boolean IsSolution (const math_Vector& Sol, const Standard_Real Tol) ;
  
  //! Returns   the    minimal  Distance  beetween   two
  //! extremitys of calculed sections.
  Standard_EXPORT   Standard_Real GetMinimalDistance()  const;
  
  //! computes the values <F> of the derivatives for the
  //! variable <X> between DegF and DegL.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean ComputeValues (const math_Vector& X, const Standard_Integer DegF, const Standard_Integer DegL) ;
  
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
  
  Standard_EXPORT  const  gp_Pnt& PointOnS1()  const;
  
  Standard_EXPORT  const  gp_Pnt& PointOnS2()  const;
  
  Standard_EXPORT   Standard_Boolean IsTangencyPoint()  const;
  
  Standard_EXPORT  const  gp_Vec& TangentOnS1()  const;
  
  Standard_EXPORT  const  gp_Vec2d& Tangent2dOnS1()  const;
  
  Standard_EXPORT  const  gp_Vec& TangentOnS2()  const;
  
  Standard_EXPORT  const  gp_Vec2d& Tangent2dOnS2()  const;
  
  Standard_EXPORT virtual   Standard_Boolean TwistOnS1()  const;
  
  Standard_EXPORT virtual   Standard_Boolean TwistOnS2()  const;
  
  //! Returns the tangent vector at the section,
  //! at the beginning and the end of the section, and
  //! returns the normal (of the surfaces) at
  //! these points.
  Standard_EXPORT   void Tangent (const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2, gp_Vec& TgFirst, gp_Vec& TgLast, gp_Vec& NormFirst, gp_Vec& NormLast)  const;
  
  //! Utile pour une visu rapide et approximative de la surface.
  Standard_EXPORT   void Section (const Standard_Real Param, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2, Standard_Real& Pdeb, Standard_Real& Pfin, gp_Lin& C) ;
  
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
  //!
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
  
  Standard_EXPORT   void Section (const Blend_Point& P, TColgp_Array1OfPnt& Poles, TColgp_Array1OfPnt2d& Poles2d, TColStd_Array1OfReal& Weigths) ;
  
  //! Used for the first and last section
  Standard_EXPORT virtual   Standard_Boolean Section (const Blend_Point& P, TColgp_Array1OfPnt& Poles, TColgp_Array1OfVec& DPoles, TColgp_Array1OfPnt2d& Poles2d, TColgp_Array1OfVec2d& DPoles2d, TColStd_Array1OfReal& Weigths, TColStd_Array1OfReal& DWeigths) ;
  
  //! Used for the first and last section
  Standard_EXPORT virtual   Standard_Boolean Section (const Blend_Point& P, TColgp_Array1OfPnt& Poles, TColgp_Array1OfVec& DPoles, TColgp_Array1OfVec& D2Poles, TColgp_Array1OfPnt2d& Poles2d, TColgp_Array1OfVec2d& DPoles2d, TColgp_Array1OfVec2d& D2Poles2d, TColStd_Array1OfReal& Weigths, TColStd_Array1OfReal& DWeigths, TColStd_Array1OfReal& D2Weigths) ;
  
  Standard_EXPORT   void Resolution (const Standard_Integer IC2d, const Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV)  const;
  
  //! Sets the distances and the angle.
  Standard_EXPORT   void Set (const Standard_Real Dist1, const Standard_Real Angle, const Standard_Integer Choix) ;




protected:





private:



  Handle(Adaptor3d_HSurface) surf1;
  Handle(Adaptor3d_HSurface) surf2;
  Handle(Adaptor3d_HCurve) curv;
  Handle(Adaptor3d_HCurve) tcurv;
  Standard_Real param;
  Standard_Real dist1;
  Standard_Real angle;
  Standard_Real tgang;
  gp_Vec nplan;
  gp_Pnt pt1;
  gp_Vec tsurf1;
  gp_Pnt pt2;
  math_Vector FX;
  math_Matrix DX;
  Standard_Boolean istangent;
  gp_Vec tg1;
  gp_Vec2d tg12d;
  gp_Vec tg2;
  gp_Vec2d tg22d;
  Standard_Integer choix;
  Standard_Real distmin;


};







#endif // _BlendFunc_ChAsym_HeaderFile
