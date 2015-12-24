// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Approval_HeaderFile
#define _StepBasic_Approval_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Approval.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_ApprovalStatus.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_ApprovalStatus;
class TCollection_HAsciiString;



class StepBasic_Approval : public MMgt_TShared
{

public:

  
  //! Returns a Approval
  Standard_EXPORT StepBasic_Approval();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_ApprovalStatus)& aStatus, const Handle(TCollection_HAsciiString)& aLevel) ;
  
  Standard_EXPORT   void SetStatus (const Handle(StepBasic_ApprovalStatus)& aStatus) ;
  
  Standard_EXPORT   Handle(StepBasic_ApprovalStatus) Status()  const;
  
  Standard_EXPORT   void SetLevel (const Handle(TCollection_HAsciiString)& aLevel) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Level()  const;




  DEFINE_STANDARD_RTTI(StepBasic_Approval)

protected:




private: 


  Handle(StepBasic_ApprovalStatus) status;
  Handle(TCollection_HAsciiString) level;


};







#endif // _StepBasic_Approval_HeaderFile
