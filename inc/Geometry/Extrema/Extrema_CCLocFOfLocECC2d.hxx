// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_CCLocFOfLocECC2d_HeaderFile
#define _Extrema_CCLocFOfLocECC2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Geometry/Extrema/Extrema_SeqPOnCOfCCLocFOfLocECC2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Optimization/math_FunctionSetWithDerivatives.hxx>
#include <Geometry/Extrema/Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
class Standard_OutOfRange;
class Adaptor2d_Curve2d;
class Extrema_Curve2dTool;
class Extrema_POnCurv2d;
class gp_Pnt2d;
class gp_Vec2d;
class Extrema_SeqPOnCOfCCLocFOfLocECC2d;
class Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d;
class math_Matrix;



class Extrema_CCLocFOfLocECC2d  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_CCLocFOfLocECC2d(const Standard_Real thetol = 1.0e-10);
  
  Standard_EXPORT Extrema_CCLocFOfLocECC2d(const Adaptor2d_Curve2d& C1, const Adaptor2d_Curve2d& C2, const Standard_Real thetol = 1.0e-10);
  
  Standard_EXPORT   void SetCurve (const Standard_Integer theRank, const Adaptor2d_Curve2d& C1) ;
  
      void SetTolerance (const Standard_Real theTol) ;
  
    virtual   Standard_Integer NbVariables()  const;
  
    virtual   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& UV, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& UV, math_Matrix& DF) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& UV, math_Vector& F, math_Matrix& DF) ;
  
  Standard_EXPORT virtual   Standard_Integer GetStateNumber() ;
  
      Standard_Integer NbExt()  const;
  
      Standard_Real SquareDistance (const Standard_Integer N)  const;
  
  Standard_EXPORT   void Points (const Standard_Integer N, Extrema_POnCurv2d& P1, Extrema_POnCurv2d& P2)  const;
  
      Standard_Address CurvePtr (const Standard_Integer theRank)  const;
  
      Standard_Real Tolerance()  const;
  
  Standard_EXPORT   void SubIntervalInitialize (const math_Vector& theUfirst, const math_Vector& theUlast) ;
  
  Standard_EXPORT   Standard_Real SearchOfTolerance (const Standard_Address C) ;




protected:





private:



  Standard_Address myC1;
  Standard_Address myC2;
  Standard_Real myTol;
  Standard_Real myU;
  Standard_Real myV;
  gp_Pnt2d myP1;
  gp_Pnt2d myP2;
  gp_Vec2d myDu;
  gp_Vec2d myDv;
  TColStd_SequenceOfReal mySqDist;
  Extrema_SeqPOnCOfCCLocFOfLocECC2d myPoints;
  Standard_Real myTolC1;
  Standard_Real myTolC2;
  Standard_Integer myMaxDerivOrderC1;
  Standard_Integer myMaxDerivOrderC2;
  Standard_Real myUinfium;
  Standard_Real myUsupremum;
  Standard_Real myVinfium;
  Standard_Real myVsupremum;


};

#define Curve1 Adaptor2d_Curve2d
#define Curve1_hxx <Geometry/Adaptor2d/Adaptor2d_Curve2d.hxx>
#define Tool1 Extrema_Curve2dTool
#define Tool1_hxx <Geometry/Extrema/Extrema_Curve2dTool.hxx>
#define Curve2 Adaptor2d_Curve2d
#define Curve2_hxx <Geometry/Adaptor2d/Adaptor2d_Curve2d.hxx>
#define Tool2 Extrema_Curve2dTool
#define Tool2_hxx <Geometry/Extrema/Extrema_Curve2dTool.hxx>
#define POnC Extrema_POnCurv2d
#define POnC_hxx <Geometry/Extrema/Extrema_POnCurv2d.hxx>
#define Pnt gp_Pnt2d
#define Pnt_hxx <Mathematics/Primitives/gp_Pnt2d.hxx>
#define Vec gp_Vec2d
#define Vec_hxx <Mathematics/Primitives/gp_Vec2d.hxx>
#define Extrema_SeqPOnC Extrema_SeqPOnCOfCCLocFOfLocECC2d
#define Extrema_SeqPOnC_hxx <Geometry/Extrema/Extrema_SeqPOnCOfCCLocFOfLocECC2d.hxx>
#define Extrema_SequenceNodeOfSeqPOnC Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d
#define Extrema_SequenceNodeOfSeqPOnC_hxx <Geometry/Extrema/Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d.hxx>
#define Extrema_SequenceNodeOfSeqPOnC Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d
#define Extrema_SequenceNodeOfSeqPOnC_hxx <Geometry/Extrema/Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d.hxx>
#define Handle_Extrema_SequenceNodeOfSeqPOnC Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d
#define Extrema_SequenceNodeOfSeqPOnC_Type_() Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d_Type_()
#define Handle_Extrema_SequenceNodeOfSeqPOnC Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d
#define Extrema_SequenceNodeOfSeqPOnC_Type_() Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2d_Type_()
#define Extrema_FuncExtCC Extrema_CCLocFOfLocECC2d
#define Extrema_FuncExtCC_hxx <Geometry/Extrema/Extrema_CCLocFOfLocECC2d.hxx>

#include <Geometry/Extrema/Extrema_FuncExtCC.lxx>

#undef Curve1
#undef Curve1_hxx
#undef Tool1
#undef Tool1_hxx
#undef Curve2
#undef Curve2_hxx
#undef Tool2
#undef Tool2_hxx
#undef POnC
#undef POnC_hxx
#undef Pnt
#undef Pnt_hxx
#undef Vec
#undef Vec_hxx
#undef Extrema_SeqPOnC
#undef Extrema_SeqPOnC_hxx
#undef Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_hxx
#undef Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_hxx
#undef Handle_Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_Type_
#undef Handle_Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_Type_
#undef Extrema_FuncExtCC
#undef Extrema_FuncExtCC_hxx




#endif // _Extrema_CCLocFOfLocECC2d_HeaderFile
