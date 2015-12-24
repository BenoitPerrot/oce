// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApprovalDateTime_HeaderFile
#define _StepBasic_ApprovalDateTime_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ApprovalDateTime.hxx>

#include <DataExchange/StepBasic/StepBasic_DateTimeSelect.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Approval.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_Approval;
class StepBasic_DateTimeSelect;


//! Added from StepBasic Rev2 to Rev4
class StepBasic_ApprovalDateTime : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepBasic_ApprovalDateTime();
  
  Standard_EXPORT   void Init (const StepBasic_DateTimeSelect& aDateTime, const Handle(StepBasic_Approval)& aDatedApproval) ;
  
  Standard_EXPORT   void SetDateTime (const StepBasic_DateTimeSelect& aDateTime) ;
  
  Standard_EXPORT   StepBasic_DateTimeSelect DateTime()  const;
  
  Standard_EXPORT   void SetDatedApproval (const Handle(StepBasic_Approval)& aDatedApproval) ;
  
  Standard_EXPORT   Handle(StepBasic_Approval) DatedApproval()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ApprovalDateTime)

protected:




private: 


  StepBasic_DateTimeSelect theDateTime;
  Handle(StepBasic_Approval) theDatedApproval;


};







#endif // _StepBasic_ApprovalDateTime_HeaderFile
