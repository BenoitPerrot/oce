// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_OrganizationItem_HeaderFile
#define _StepAP214_OrganizationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepAP214/StepAP214_ApprovalItem.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepAP214/Handle_StepAP214_AppliedOrganizationAssignment.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Approval.hxx>
class Standard_Transient;
class StepAP214_AppliedOrganizationAssignment;
class StepBasic_Approval;



class StepAP214_OrganizationItem  : public StepAP214_ApprovalItem
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a OrganizationItem SelectType
  Standard_EXPORT StepAP214_OrganizationItem();
  
  //! Recognizes a OrganizationItem Kind Entity that is :
  Standard_EXPORT virtual   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a AppliedOrganizationAssignment (Null if another type)
  Standard_EXPORT   Handle(StepAP214_AppliedOrganizationAssignment) AppliedOrganizationAssignment()  const;
  
  //! returns Value as a Approval (Null if another type)
  Standard_EXPORT   Handle(StepBasic_Approval) Approval()  const;




protected:





private:





};







#endif // _StepAP214_OrganizationItem_HeaderFile
