// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_CurveAndTrihedron_HeaderFile
#define _GeomFill_CurveAndTrihedron_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_CurveAndTrihedron.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_TrihedronLaw.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Mat.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_LocationLaw.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_LocationLaw.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
class GeomFill_TrihedronLaw;
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class gp_Mat;
class GeomFill_LocationLaw;
class gp_Vec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;
class TColStd_Array1OfReal;
class gp_Pnt;


//! Define location law with an TrihedronLaw and an
//! curve
//! Definition Location is :
//! transformed  section   coordinates  in  (Curve(v)),
//! (Normal(v),   BiNormal(v), Tangente(v))) systeme are
//! the  same like section  shape coordinates in
//! (O,(OX, OY, OZ)) systeme.
class GeomFill_CurveAndTrihedron : public GeomFill_LocationLaw
{

public:

  
  Standard_EXPORT GeomFill_CurveAndTrihedron(const Handle(GeomFill_TrihedronLaw)& Trihedron);
  
  Standard_EXPORT virtual   void SetCurve (const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT virtual  const  Handle(Adaptor3d_HCurve)& GetCurve()  const;
  
  //! Set a transformation Matrix like   the law M(t) become
  //! Mat * M(t)
  Standard_EXPORT virtual   void SetTrsf (const gp_Mat& Transfo) ;
  
  Standard_EXPORT virtual   Handle(GeomFill_LocationLaw) Copy()  const;
  
  //! compute Location and 2d points
  Standard_EXPORT virtual   Standard_Boolean D0 (const Standard_Real Param, gp_Mat& M, gp_Vec& V) ;
  
  //! compute Location and 2d points
  Standard_EXPORT virtual   Standard_Boolean D0 (const Standard_Real Param, gp_Mat& M, gp_Vec& V, TColgp_Array1OfPnt2d& Poles2d) ;
  
  //! compute location 2d  points and  associated
  //! first derivatives.
  //! Warning : It used only for C1 or C2 aproximation
  Standard_EXPORT virtual   Standard_Boolean D1 (const Standard_Real Param, gp_Mat& M, gp_Vec& V, gp_Mat& DM, gp_Vec& DV, TColgp_Array1OfPnt2d& Poles2d, TColgp_Array1OfVec2d& DPoles2d) ;
  
  //! compute location 2d  points and associated
  //! first and seconde  derivatives.
  //! Warning : It used only for C2 aproximation
  Standard_EXPORT virtual   Standard_Boolean D2 (const Standard_Real Param, gp_Mat& M, gp_Vec& V, gp_Mat& DM, gp_Vec& DV, gp_Mat& D2M, gp_Vec& D2V, TColgp_Array1OfPnt2d& Poles2d, TColgp_Array1OfVec2d& DPoles2d, TColgp_Array1OfVec2d& D2Poles2d) ;
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>.
  //! May be one if Continuity(me) >= <S>
  Standard_EXPORT virtual   Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT virtual   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Sets the bounds of the parametric interval on
  //! the function
  //! This determines the derivatives in these values if the
  //! function is not Cn.
  Standard_EXPORT virtual   void SetInterval (const Standard_Real First, const Standard_Real Last) ;
  
  //! Gets the bounds of the parametric interval on
  //! the function
  Standard_EXPORT virtual   void GetInterval (Standard_Real& First, Standard_Real& Last)  const;
  
  //! Gets the bounds of the function parametric domain.
  //! Warning: This domain it is  not modified by the
  //! SetValue method
  Standard_EXPORT virtual   void GetDomain (Standard_Real& First, Standard_Real& Last)  const;
  
  //! Get the maximum Norm  of the matrix-location part.  It
  //! is usful to find an good Tolerance to approx M(t).
  Standard_EXPORT virtual   Standard_Real GetMaximalNorm() ;
  
  //! Get average value of M(t) and V(t) it is usfull to
  //! make fast approximation of rational  surfaces.
  Standard_EXPORT virtual   void GetAverageLaw (gp_Mat& AM, gp_Vec& AV) ;
  
  //! Say if the Location  Law, is an translation of  Location
  //! The default implementation is " returns False ".
  Standard_EXPORT virtual   Standard_Boolean IsTranslation (Standard_Real& Error)  const;
  
  //! Say if the Location  Law, is a rotation of Location
  //! The default implementation is " returns False ".
  Standard_EXPORT virtual   Standard_Boolean IsRotation (Standard_Real& Error)  const;
  
  Standard_EXPORT virtual   void Rotation (gp_Pnt& Center)  const;




  DEFINE_STANDARD_RTTI(GeomFill_CurveAndTrihedron)

protected:




private: 


  Standard_Boolean WithTrans;
  Handle(GeomFill_TrihedronLaw) myLaw;
  Handle(Adaptor3d_HCurve) myCurve;
  Handle(Adaptor3d_HCurve) myTrimmed;
  gp_Pnt Point;
  gp_Vec V1;
  gp_Vec V2;
  gp_Vec V3;
  gp_Mat Trans;


};







#endif // _GeomFill_CurveAndTrihedron_HeaderFile
