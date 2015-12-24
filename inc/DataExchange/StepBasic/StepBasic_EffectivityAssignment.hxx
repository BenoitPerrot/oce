// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_EffectivityAssignment_HeaderFile
#define _StepBasic_EffectivityAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_EffectivityAssignment.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_Effectivity.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_Effectivity;


//! Representation of STEP entity EffectivityAssignment
class StepBasic_EffectivityAssignment : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_EffectivityAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_Effectivity)& aAssignedEffectivity) ;
  
  //! Returns field AssignedEffectivity
  Standard_EXPORT   Handle(StepBasic_Effectivity) AssignedEffectivity()  const;
  
  //! Set field AssignedEffectivity
  Standard_EXPORT   void SetAssignedEffectivity (const Handle(StepBasic_Effectivity)& AssignedEffectivity) ;




  DEFINE_STANDARD_RTTI(StepBasic_EffectivityAssignment)

protected:




private: 


  Handle(StepBasic_Effectivity) theAssignedEffectivity;


};







#endif // _StepBasic_EffectivityAssignment_HeaderFile
