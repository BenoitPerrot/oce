// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_DiscreteTrihedron_HeaderFile
#define _GeomFill_DiscreteTrihedron_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_DiscreteTrihedron.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_HSequenceOfAx2.hxx>
#include <Foundation/TColStd/Handle_TColStd_HSequenceOfReal.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_Frenet.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_TrihedronLaw.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_TrihedronLaw.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
class GeomFill_HSequenceOfAx2;
class TColStd_HSequenceOfReal;
class GeomFill_Frenet;
class Standard_OutOfRange;
class Standard_ConstructionError;
class GeomFill_TrihedronLaw;
class Adaptor3d_HCurve;
class gp_Vec;
class TColStd_Array1OfReal;


//! Defined Discrete Trihedron Law.
//! The requirement for path curve is only G1.
//! The result is C0-continuous surface
//! that can be later approximated to C1.
class GeomFill_DiscreteTrihedron : public GeomFill_TrihedronLaw
{

public:

  
  Standard_EXPORT GeomFill_DiscreteTrihedron();
  
  Standard_EXPORT virtual   Handle(GeomFill_TrihedronLaw) Copy()  const;
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT virtual   void SetCurve (const Handle(Adaptor3d_HCurve)& C) ;
  
  //! compute Trihedron on curve at parameter <Param>
  Standard_EXPORT virtual   Standard_Boolean D0 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& Normal, gp_Vec& BiNormal) ;
  
  //! compute Trihedron and  derivative Trihedron  on curve
  //! at parameter <Param>
  //! Warning : It used only for C1 or C2 aproximation
  //! For the moment it returns null values for DTangent, DNormal
  //! and DBiNormal.
  Standard_EXPORT virtual   Standard_Boolean D1 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& BiNormal, gp_Vec& DBiNormal) ;
  
  //! compute  Trihedron on curve
  //! first and seconde  derivatives.
  //! Warning : It used only for C2 aproximation
  //! For the moment it returns null values for DTangent, DNormal
  //! DBiNormal, D2Tangent, D2Normal, D2BiNormal.
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
  
  //! Get average value of Tangent(t) and Normal(t) it is usful to
  //! make fast approximation of rational  surfaces.
  Standard_EXPORT virtual   void GetAverageLaw (gp_Vec& ATangent, gp_Vec& ANormal, gp_Vec& ABiNormal) ;
  
  //! Say if the law is Constant.
  Standard_EXPORT virtual   Standard_Boolean IsConstant()  const;
  
  //! Return True.
  Standard_EXPORT virtual   Standard_Boolean IsOnlyBy3dCurve()  const;




  DEFINE_STANDARD_RTTI(GeomFill_DiscreteTrihedron)

protected:




private: 


  gp_Pnt myPoint;
  Handle(GeomFill_HSequenceOfAx2) myTrihedrons;
  Handle(TColStd_HSequenceOfReal) myKnots;
  Handle(GeomFill_Frenet) myFrenet;
  Standard_Boolean myUseFrenet;


};







#endif // _GeomFill_DiscreteTrihedron_HeaderFile
