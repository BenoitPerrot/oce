// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_DateTimeItem_HeaderFile
#define _StepAP203_DateTimeItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_StepAP203_ChangeRequest.hxx>
#include <Handle_StepAP203_StartRequest.hxx>
#include <Handle_StepAP203_Change.hxx>
#include <Handle_StepAP203_StartWork.hxx>
#include <Handle_StepBasic_ApprovalPersonOrganization.hxx>
#include <Handle_StepBasic_Contract.hxx>
#include <Handle_StepBasic_SecurityClassification.hxx>
#include <Handle_StepBasic_Certification.hxx>
class Standard_Transient;
class StepBasic_ProductDefinition;
class StepAP203_ChangeRequest;
class StepAP203_StartRequest;
class StepAP203_Change;
class StepAP203_StartWork;
class StepBasic_ApprovalPersonOrganization;
class StepBasic_Contract;
class StepBasic_SecurityClassification;
class StepBasic_Certification;


//! Representation of STEP SELECT type DateTimeItem
class StepAP203_DateTimeItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepAP203_DateTimeItem();
  
  //! Recognizes a kind of DateTimeItem select type
  //! 1 -> ProductDefinition from StepBasic
  //! 2 -> ChangeRequest from StepAP203
  //! 3 -> StartRequest from StepAP203
  //! 4 -> Change from StepAP203
  //! 5 -> StartWork from StepAP203
  //! 6 -> ApprovalPersonOrganization from StepBasic
  //! 7 -> Contract from StepBasic
  //! 8 -> SecurityClassification from StepBasic
  //! 9 -> Certification from StepBasic
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as ProductDefinition (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  //! Returns Value as ChangeRequest (or Null if another type)
  Standard_EXPORT   Handle(StepAP203_ChangeRequest) ChangeRequest()  const;
  
  //! Returns Value as StartRequest (or Null if another type)
  Standard_EXPORT   Handle(StepAP203_StartRequest) StartRequest()  const;
  
  //! Returns Value as Change (or Null if another type)
  Standard_EXPORT   Handle(StepAP203_Change) Change()  const;
  
  //! Returns Value as StartWork (or Null if another type)
  Standard_EXPORT   Handle(StepAP203_StartWork) StartWork()  const;
  
  //! Returns Value as ApprovalPersonOrganization (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ApprovalPersonOrganization) ApprovalPersonOrganization()  const;
  
  //! Returns Value as Contract (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_Contract) Contract()  const;
  
  //! Returns Value as SecurityClassification (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_SecurityClassification) SecurityClassification()  const;
  
  //! Returns Value as Certification (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_Certification) Certification()  const;




protected:





private:





};







#endif // _StepAP203_DateTimeItem_HeaderFile
