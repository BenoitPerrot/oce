// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Frenet_HeaderFile
#define _GeomFill_Frenet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_GeomFill_Frenet.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <Handle_GeomFill_TrihedronLaw.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
class TColStd_HArray1OfReal;
class Standard_OutOfRange;
class Standard_ConstructionError;
class GeomFill_TrihedronLaw;
class Adaptor3d_HCurve;
class gp_Vec;
class TColStd_Array1OfReal;


//! Defined Frenet Trihedron  Law
class GeomFill_Frenet : public GeomFill_TrihedronLaw
{

public:

  
  Standard_EXPORT GeomFill_Frenet();
  
  Standard_EXPORT virtual   Handle(GeomFill_TrihedronLaw) Copy()  const;
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT virtual   void SetCurve (const Handle(Adaptor3d_HCurve)& C) ;
  
  //! compute Triedrhon on curve at parameter <Param>
  Standard_EXPORT virtual   Standard_Boolean D0 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& Normal, gp_Vec& BiNormal) ;
  
  //! compute Triedrhon and  derivative Trihedron  on curve
  //! at parameter <Param>
  //! Warning : It used only for C1 or C2 aproximation
  Standard_EXPORT virtual   Standard_Boolean D1 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& BiNormal, gp_Vec& DBiNormal) ;
  
  //! compute  Trihedron on curve
  //! first and seconde  derivatives.
  //! Warning : It used only for C2 aproximation
  Standard_EXPORT virtual   Standard_Boolean D2 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& D2Tangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& D2Normal, gp_Vec& BiNormal, gp_Vec& DBiNormal, gp_Vec& D2BiNormal) ;
  
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
  
  //! Get average value of Tangent(t) and Normal(t) it is usfull to
  //! make fast approximation of rational  surfaces.
  Standard_EXPORT virtual   void GetAverageLaw (gp_Vec& ATangent, gp_Vec& ANormal, gp_Vec& ABiNormal) ;
  
  //! Say if the law is Constant.
  Standard_EXPORT virtual   Standard_Boolean IsConstant()  const;
  
  //! Return True.
  Standard_EXPORT virtual   Standard_Boolean IsOnlyBy3dCurve()  const;




  DEFINE_STANDARD_RTTI(GeomFill_Frenet)

protected:




private: 

  
  Standard_EXPORT   Standard_Boolean IsSingular (const Standard_Real U, Standard_Integer& Index)  const;
  
  Standard_EXPORT   Standard_Boolean DoSingular (const Standard_Real U, const Standard_Integer Index, gp_Vec& Tangent, gp_Vec& BiNormal, Standard_Integer& n, Standard_Integer& k, Standard_Integer& TFlag, Standard_Integer& BNFlag, Standard_Real& Delta) ;
  
  //! computes Triedrhon on curve at parameter <Param>
  Standard_EXPORT   Standard_Boolean SingularD0 (const Standard_Real Param, const Standard_Integer Index, gp_Vec& Tangent, gp_Vec& Normal, gp_Vec& BiNormal, Standard_Real& Delta) ;
  
  //! computes Triedrhon and  derivative Trihedron  on curve
  //! at parameter <Param>
  //! Warning : It used only for C1 or C2 aproximation
  Standard_EXPORT   Standard_Boolean SingularD1 (const Standard_Real Param, const Standard_Integer Index, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& BiNormal, gp_Vec& DBiNormal, Standard_Real& Delta) ;
  
  //! computes  Trihedron on curve
  //! first and seconde  derivatives.
  //! Warning : It used only for C2 aproximation
  Standard_EXPORT   Standard_Boolean SingularD2 (const Standard_Real Param, const Standard_Integer Index, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& D2Tangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& D2Normal, gp_Vec& BiNormal, gp_Vec& DBiNormal, gp_Vec& D2BiNormal, Standard_Real& Delta) ;
  
  //! revolves the trihedron (which is determined
  //! of given "Tangent", "Normal" and "BiNormal" vectors)
  //! to coincide "Tangent" and "NewTangent" axes.
  Standard_EXPORT   Standard_Boolean RotateTrihedron (gp_Vec& Tangent, gp_Vec& Normal, gp_Vec& BiNormal, const gp_Vec& NewTangent)  const;

  gp_Pnt P;
  Handle(TColStd_HArray1OfReal) mySngl;
  Handle(TColStd_HArray1OfReal) mySnglLen;
  Standard_Boolean isSngl;


};







#endif // _GeomFill_Frenet_HeaderFile
