// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApprox_PrefAndRec_HeaderFile
#define _AdvApprox_PrefAndRec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <AdvApprox_Cutting.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class TColStd_Array1OfReal;



//! inherits class Cutting; contains a list of preferential points (pi)i
//! and a list of Recommended points used in cutting management.
//! if Cutting is necessary in [a,b], we cut at the di nearest from (a+b)/2
class AdvApprox_PrefAndRec  : public AdvApprox_Cutting
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AdvApprox_PrefAndRec(const TColStd_Array1OfReal& RecomendedCut, const TColStd_Array1OfReal& PrefferedCut, const Standard_Real Weight = 5);
  

  //! cuting value is
  //! - the recommended point nerest of (a+b)/2
  //! if pi is in ]a,b[ or else
  //! -  the preferential point nearest of (a+b) / 2
  //! if pi is in ](r*a+b)/(r+1) , (a+r*b)/(r+1)[ where r = Weight
  //! -  or (a+b)/2 else.
  Standard_EXPORT virtual   Standard_Boolean Value (const Standard_Real a, const Standard_Real b, Standard_Real& cuttingvalue)  const;




protected:





private:



  TColStd_Array1OfReal myRecCutting;
  TColStd_Array1OfReal myPrefCutting;
  Standard_Real myWeight;


};







#endif // _AdvApprox_PrefAndRec_HeaderFile
