// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FreedomAndCoefficient_HeaderFile
#define _StepFEA_FreedomAndCoefficient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepFEA_FreedomAndCoefficient.hxx>

#include <StepFEA_DegreeOfFreedom.hxx>
#include <DataExchange/StepElement/StepElement_MeasureOrUnspecifiedValue.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepFEA_DegreeOfFreedom;
class StepElement_MeasureOrUnspecifiedValue;


//! Representation of STEP entity FreedomAndCoefficient
class StepFEA_FreedomAndCoefficient : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_FreedomAndCoefficient();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepFEA_DegreeOfFreedom& aFreedom, const StepElement_MeasureOrUnspecifiedValue& aA) ;
  
  //! Returns field Freedom
  Standard_EXPORT   StepFEA_DegreeOfFreedom Freedom()  const;
  
  //! Set field Freedom
  Standard_EXPORT   void SetFreedom (const StepFEA_DegreeOfFreedom& Freedom) ;
  
  //! Returns field A
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue A()  const;
  
  //! Set field A
  Standard_EXPORT   void SetA (const StepElement_MeasureOrUnspecifiedValue& A) ;




  DEFINE_STANDARD_RTTI(StepFEA_FreedomAndCoefficient)

protected:




private: 


  StepFEA_DegreeOfFreedom theFreedom;
  StepElement_MeasureOrUnspecifiedValue theA;


};







#endif // _StepFEA_FreedomAndCoefficient_HeaderFile
