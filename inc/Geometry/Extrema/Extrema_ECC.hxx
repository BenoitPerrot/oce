// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ECC_HeaderFile
#define _Extrema_ECC_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Collections/Handle_TColgp_HArray1OfPnt.hxx>
class StdFail_InfiniteSolutions;
class StdFail_NotDone;
class Standard_OutOfRange;
class Adaptor3d_Curve;
class Extrema_CurveTool;
class TColgp_HArray1OfPnt;
class Extrema_POnCurv;
class gp_Pnt;
class gp_Vec;



class Extrema_ECC 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_ECC();
  
  Standard_EXPORT Extrema_ECC(const Adaptor3d_Curve& C1, const Adaptor3d_Curve& C2);
  
  Standard_EXPORT Extrema_ECC(const Adaptor3d_Curve& C1, const Adaptor3d_Curve& C2, const Standard_Real Uinf, const Standard_Real Usup, const Standard_Real Vinf, const Standard_Real Vsup);
  
  Standard_EXPORT   void SetParams (const Adaptor3d_Curve& C1, const Adaptor3d_Curve& C2, const Standard_Real Uinf, const Standard_Real Usup, const Standard_Real Vinf, const Standard_Real Vsup) ;
  
  Standard_EXPORT   void SetTolerance (const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform() ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Integer NbExt()  const;
  
  Standard_EXPORT   Standard_Real SquareDistance (const Standard_Integer N = 1)  const;
  
  Standard_EXPORT   void Points (const Standard_Integer N, Extrema_POnCurv& P1, Extrema_POnCurv& P2)  const;




protected:





private:



  Standard_Real myCurveMinTol;
  math_Vector myLowBorder;
  math_Vector myUppBorder;
  Standard_Integer mySolCount;
  TColStd_SequenceOfReal myPoints1;
  TColStd_SequenceOfReal myPoints2;
  Standard_Address myC[2];
  Standard_Boolean myDone;


};







#endif // _Extrema_ECC_HeaderFile
