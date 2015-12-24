// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_CorrectedFrenet_HeaderFile
#define _GeomFill_CorrectedFrenet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_CorrectedFrenet.hxx>

#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_Frenet.hxx>
#include <ModelingAlgorithms/Law/Handle_Law_Function.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfReal.hxx>
#include <Mathematics/Collections/Handle_TColgp_HArray1OfVec.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_TrihedronLaw.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_TrihedronLaw.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_Trihedron.hxx>
class GeomFill_Frenet;
class Law_Function;
class TColStd_HArray1OfReal;
class TColgp_HArray1OfVec;
class Standard_OutOfRange;
class Standard_ConstructionError;
class GeomFill_TrihedronLaw;
class gp_Vec;
class TColStd_SequenceOfReal;
class TColgp_SequenceOfVec;
class Adaptor3d_HCurve;
class TColStd_Array1OfReal;


//! Defined an Corrected Frenet  Trihedron  Law It is
//! like Frenet with an Torsion's minimization
class GeomFill_CorrectedFrenet : public GeomFill_TrihedronLaw
{

public:

  
  Standard_EXPORT GeomFill_CorrectedFrenet();
  
  Standard_EXPORT GeomFill_CorrectedFrenet(const Standard_Boolean ForEvaluation);
  
  Standard_EXPORT virtual   Handle(GeomFill_TrihedronLaw) Copy()  const;
  
  Standard_EXPORT virtual   void SetCurve (const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT virtual   void SetInterval (const Standard_Real First, const Standard_Real Last) ;
  
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
  
  //! Tries to define the best trihedron mode
  //! for the curve. It can be:
  //! - Frenet
  //! - CorrectedFrenet
  //! - DiscreteTrihedron
  //! Warning: the CorrectedFrenet must be constructed
  //! with option ForEvaluation = True,
  //! the curve must be set by method SetCurve.
  Standard_EXPORT   GeomFill_Trihedron EvaluateBestMode() ;
  
  //! Get average value of Tangent(t) and Normal(t) it is usfull to
  //! make fast approximation of rational  surfaces.
  Standard_EXPORT virtual   void GetAverageLaw (gp_Vec& ATangent, gp_Vec& ANormal, gp_Vec& ABiNormal) ;
  
  //! Say if the law is Constant.
  Standard_EXPORT virtual   Standard_Boolean IsConstant()  const;
  
  //! Return True.
  Standard_EXPORT virtual   Standard_Boolean IsOnlyBy3dCurve()  const;




  DEFINE_STANDARD_RTTI(GeomFill_CorrectedFrenet)

protected:




private: 

  
  Standard_EXPORT   void Init() ;
  
  //! Computes BSpline representation of Normal evolution at one
  //! interval of continuity of Frenet. Returns True if FuncInt = 0
  Standard_EXPORT   Standard_Boolean InitInterval (const Standard_Real First, const Standard_Real Last, const Standard_Real Step, Standard_Real& startAng, gp_Vec& prevTangent, gp_Vec& prevNormal, gp_Vec& aT, gp_Vec& aN, Handle(Law_Function)& FuncInt, TColStd_SequenceOfReal& SeqPoles, TColStd_SequenceOfReal& SeqAngle, TColgp_SequenceOfVec& SeqTangent, TColgp_SequenceOfVec& SeqNormal)  const;
  
  //! Computes angle of Normal evolution of Frenet between any two points on the curve.
  Standard_EXPORT   Standard_Real CalcAngleAT (const gp_Vec& Tangent, const gp_Vec& Normal, const gp_Vec& prevTangent, const gp_Vec& prevNormal)  const;
  
  //! Get corrected value of angle of Normal evolution of Frenet
  Standard_EXPORT   Standard_Real GetAngleAT (const Standard_Real P)  const;

  Handle(GeomFill_Frenet) frenet;
  Handle(Law_Function) EvolAroundT;
  Handle(Law_Function) TLaw;
  gp_Vec AT;
  gp_Vec AN;
  Standard_Boolean isFrenet;
  Standard_Boolean myForEvaluation;
  Handle(TColStd_HArray1OfReal) HArrPoles;
  Handle(TColStd_HArray1OfReal) HArrAngle;
  Handle(TColgp_HArray1OfVec) HArrTangent;
  Handle(TColgp_HArray1OfVec) HArrNormal;


};







#endif // _GeomFill_CorrectedFrenet_HeaderFile
