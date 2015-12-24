// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_PCFOfEPCOfExtPC_HeaderFile
#define _Extrema_PCFOfEPCOfExtPC_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <Geometry/Extrema/Extrema_SeqPCOfPCFOfEPCOfExtPC.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Optimization/math_FunctionWithDerivative.hxx>
#include <Geometry/Extrema/Handle_Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfExtPC.hxx>
class Standard_OutOfRange;
class Standard_TypeMismatch;
class Adaptor3d_Curve;
class Extrema_CurveTool;
class Extrema_POnCurv;
class gp_Pnt;
class gp_Vec;
class Extrema_SeqPCOfPCFOfEPCOfExtPC;
class Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfExtPC;



class Extrema_PCFOfEPCOfExtPC  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_PCFOfEPCOfExtPC();
  
  Standard_EXPORT Extrema_PCFOfEPCOfExtPC(const gp_Pnt& P, const Adaptor3d_Curve& C);
  
  Standard_EXPORT   void Initialize (const Adaptor3d_Curve& C) ;
  
  Standard_EXPORT   void SetPoint (const gp_Pnt& P) ;
  
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real U, Standard_Real& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real U, Standard_Real& DF) ;
  
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real U, Standard_Real& F, Standard_Real& DF) ;
  
  Standard_EXPORT virtual   Standard_Integer GetStateNumber() ;
  
  Standard_EXPORT   Standard_Integer NbExt()  const;
  
  Standard_EXPORT   Standard_Real SquareDistance (const Standard_Integer N)  const;
  
  Standard_EXPORT   Standard_Boolean IsMin (const Standard_Integer N)  const;
  
  Standard_EXPORT  const  Extrema_POnCurv& Point (const Standard_Integer N)  const;
  
  Standard_EXPORT   void SubIntervalInitialize (const Standard_Real theUfirst, const Standard_Real theUlast) ;
  
  Standard_EXPORT   Standard_Real SearchOfTolerance() ;




protected:





private:



  gp_Pnt myP;
  Standard_Address myC;
  Standard_Real myU;
  gp_Pnt myPc;
  Standard_Real myD1f;
  TColStd_SequenceOfReal mySqDist;
  TColStd_SequenceOfInteger myIsMin;
  Extrema_SeqPCOfPCFOfEPCOfExtPC myPoint;
  Standard_Boolean myPinit;
  Standard_Boolean myCinit;
  Standard_Boolean myD1Init;
  Standard_Real myTol;
  Standard_Integer myMaxDerivOrder;
  Standard_Real myUinfium;
  Standard_Real myUsupremum;


};







#endif // _Extrema_PCFOfEPCOfExtPC_HeaderFile
