// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_CurveElementIntervalConstant_HeaderFile
#define _StepFEA_CurveElementIntervalConstant_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepFEA_CurveElementIntervalConstant.hxx>

#include <Handle_StepElement_CurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <Handle_StepFEA_CurveElementLocation.hxx>
#include <Handle_StepBasic_EulerAngles.hxx>
class StepElement_CurveElementSectionDefinition;
class StepFEA_CurveElementLocation;
class StepBasic_EulerAngles;


//! Representation of STEP entity CurveElementIntervalConstant
class StepFEA_CurveElementIntervalConstant : public StepFEA_CurveElementInterval
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_CurveElementIntervalConstant();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepFEA_CurveElementLocation)& aCurveElementInterval_FinishPosition, const Handle(StepBasic_EulerAngles)& aCurveElementInterval_EuAngles, const Handle(StepElement_CurveElementSectionDefinition)& aSection) ;
  
  //! Returns field Section
  Standard_EXPORT   Handle(StepElement_CurveElementSectionDefinition) Section()  const;
  
  //! Set field Section
  Standard_EXPORT   void SetSection (const Handle(StepElement_CurveElementSectionDefinition)& Section) ;




  DEFINE_STANDARD_RTTI(StepFEA_CurveElementIntervalConstant)

protected:




private: 


  Handle(StepElement_CurveElementSectionDefinition) theSection;


};







#endif // _StepFEA_CurveElementIntervalConstant_HeaderFile
