// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_ConstantBiNormal_HeaderFile
#define _GeomFill_ConstantBiNormal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_ConstantBiNormal.hxx>

#include <Mathematics/Primitives/gp_Vec.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_Frenet.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_TrihedronLaw.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_TrihedronLaw.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
class GeomFill_Frenet;
class Standard_OutOfRange;
class Standard_ConstructionError;
class gp_Dir;
class GeomFill_TrihedronLaw;
class Adaptor3d_HCurve;
class gp_Vec;
class TColStd_Array1OfReal;


//! Defined an Trihedron Law  where the BiNormal, is fixed
class GeomFill_ConstantBiNormal : public GeomFill_TrihedronLaw
{

public:

  
  Standard_EXPORT GeomFill_ConstantBiNormal(const gp_Dir& BiNormal);
  
  Standard_EXPORT virtual   Handle(GeomFill_TrihedronLaw) Copy()  const;
  
  Standard_EXPORT virtual   void SetCurve (const Handle(Adaptor3d_HCurve)& C) ;
  
  //! Computes Triedrhon on curve at parameter <Param>
  Standard_EXPORT virtual   Standard_Boolean D0 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& Normal, gp_Vec& BiNormal) ;
  
  //! Computes Triedrhon and  derivative Trihedron  on curve
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
  
  //! Gets average value of Tangent(t) and Normal(t) it is usfull to
  //! make fast approximation of rational  surfaces.
  Standard_EXPORT virtual   void GetAverageLaw (gp_Vec& ATangent, gp_Vec& ANormal, gp_Vec& ABiNormal) ;
  
  //! Says if the law is Constant.
  Standard_EXPORT virtual   Standard_Boolean IsConstant()  const;
  
  //! Return True.
  Standard_EXPORT virtual   Standard_Boolean IsOnlyBy3dCurve()  const;




  DEFINE_STANDARD_RTTI(GeomFill_ConstantBiNormal)

protected:




private: 


  gp_Vec BN;
  Handle(GeomFill_Frenet) frenet;


};







#endif // _GeomFill_ConstantBiNormal_HeaderFile
