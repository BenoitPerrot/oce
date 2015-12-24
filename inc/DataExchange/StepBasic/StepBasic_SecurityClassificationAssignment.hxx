// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SecurityClassificationAssignment_HeaderFile
#define _StepBasic_SecurityClassificationAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_SecurityClassificationAssignment.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_SecurityClassification.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_SecurityClassification;



class StepBasic_SecurityClassificationAssignment : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_SecurityClassification)& aAssignedSecurityClassification) ;
  
  Standard_EXPORT   void SetAssignedSecurityClassification (const Handle(StepBasic_SecurityClassification)& aAssignedSecurityClassification) ;
  
  Standard_EXPORT   Handle(StepBasic_SecurityClassification) AssignedSecurityClassification()  const;




  DEFINE_STANDARD_RTTI(StepBasic_SecurityClassificationAssignment)

protected:




private: 


  Handle(StepBasic_SecurityClassification) assignedSecurityClassification;


};







#endif // _StepBasic_SecurityClassificationAssignment_HeaderFile
