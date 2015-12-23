// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_ArcFunction_HeaderFile
#define _Contap_ArcFunction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/Contap/Contap_TFunction.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_Quadric.hxx>
#include <Mathematics/Optimization/math_FunctionWithDerivative.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Adaptor2d_HCurve2d;
class Adaptor3d_HSurface;
class gp_Dir;
class gp_Pnt;
class IntSurf_Quadric;



class Contap_ArcFunction  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Contap_ArcFunction();
  
  Standard_EXPORT   void Set (const Handle(Adaptor3d_HSurface)& S) ;
  
      void Set (const gp_Dir& Direction) ;
  
      void Set (const gp_Dir& Direction, const Standard_Real Angle) ;
  
      void Set (const gp_Pnt& Eye) ;
  
      void Set (const gp_Pnt& Eye, const Standard_Real Angle) ;
  
      void Set (const Handle(Adaptor2d_HCurve2d)& A) ;
  
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;
  
  Standard_EXPORT   Standard_Integer NbSamples()  const;
  
  Standard_EXPORT virtual   Standard_Integer GetStateNumber() ;
  
     const  gp_Pnt& Valpoint (const Standard_Integer Index)  const;
  
  Standard_EXPORT  const  IntSurf_Quadric& Quadric()  const;




protected:





private:



  Handle(Adaptor2d_HCurve2d) myArc;
  Handle(Adaptor3d_HSurface) mySurf;
  Standard_Real myMean;
  Contap_TFunction myType;
  gp_Dir myDir;
  Standard_Real myCosAng;
  gp_Pnt myEye;
  gp_Pnt solpt;
  TColgp_SequenceOfPnt seqpt;
  IntSurf_Quadric myQuad;


};


#include <ModelingAlgorithms/Contap/Contap_ArcFunction.lxx>





#endif // _Contap_ArcFunction_HeaderFile
