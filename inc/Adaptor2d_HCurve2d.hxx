// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor2d_HCurve2d_HeaderFile
#define _Adaptor2d_HCurve2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Real.hxx>
#include <GeomAbs_Shape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <GeomAbs_CurveType.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Handle_Geom2d_BezierCurve.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_NotImplemented;
class Adaptor2d_Curve2d;
class TColStd_Array1OfReal;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;


//! Root class for 2D curves manipulated by handles, on
//! which geometric algorithms work.
//! An adapted curve is an interface between the
//! services provided by a curve, and those required of
//! the curve by algorithms, which use it.
//! A derived specific class is provided:
//! Geom2dAdaptor_HCurve for a curve from the Geom2d package.
class Adaptor2d_HCurve2d : public MMgt_TShared
{

public:

  
  //! Returns a reference to the Curve2d inside the HCurve2d.
  Standard_EXPORT virtual  const  Adaptor2d_Curve2d& Curve2d()  const = 0;
  
      Standard_Real FirstParameter()  const;
  
      Standard_Real LastParameter()  const;
  
      GeomAbs_Shape Continuity()  const;
  
      Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
      void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! If <First> >= <Last>
      Handle(Adaptor2d_HCurve2d) Trim (const Standard_Real First, const Standard_Real Last, const Standard_Real Tol)  const;
  
      Standard_Boolean IsClosed()  const;
  
      Standard_Boolean IsPeriodic()  const;
  
      Standard_Real Period()  const;
  
      gp_Pnt2d Value (const Standard_Real U)  const;
  
      void D0 (const Standard_Real U, gp_Pnt2d& P)  const;
  
      void D1 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V)  const;
  
      void D2 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2)  const;
  
      void D3 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2, gp_Vec2d& V3)  const;
  
      gp_Vec2d DN (const Standard_Real U, const Standard_Integer N)  const;
  
      Standard_Real Resolution (const Standard_Real R3d)  const;
  
      GeomAbs_CurveType GetType()  const;
  
      gp_Lin2d Line()  const;
  
      gp_Circ2d Circle()  const;
  
      gp_Elips2d Ellipse()  const;
  
      gp_Hypr2d Hyperbola()  const;
  
      gp_Parab2d Parabola()  const;
  
      Standard_Integer Degree()  const;
  
      Standard_Boolean IsRational()  const;
  
      Standard_Integer NbPoles()  const;
  
      Standard_Integer NbKnots()  const;
  
      Handle(Geom2d_BezierCurve) Bezier()  const;
  
    virtual   Handle(Geom2d_BSplineCurve) BSpline()  const;




  DEFINE_STANDARD_RTTI(Adaptor2d_HCurve2d)

protected:




private: 




};


#include <Adaptor2d_HCurve2d.lxx>





#endif // _Adaptor2d_HCurve2d_HeaderFile
