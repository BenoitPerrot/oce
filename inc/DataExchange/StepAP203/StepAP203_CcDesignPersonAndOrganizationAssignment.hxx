// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CcDesignPersonAndOrganizationAssignment_HeaderFile
#define _StepAP203_CcDesignPersonAndOrganizationAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>

#include <Handle_StepAP203_HArray1OfPersonOrganizationItem.hxx>
#include <DataExchange/StepBasic/StepBasic_PersonAndOrganizationAssignment.hxx>
#include <Handle_StepBasic_PersonAndOrganization.hxx>
#include <Handle_StepBasic_PersonAndOrganizationRole.hxx>
class StepAP203_HArray1OfPersonOrganizationItem;
class StepBasic_PersonAndOrganization;
class StepBasic_PersonAndOrganizationRole;


//! Representation of STEP entity CcDesignPersonAndOrganizationAssignment
class StepAP203_CcDesignPersonAndOrganizationAssignment : public StepBasic_PersonAndOrganizationAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP203_CcDesignPersonAndOrganizationAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_PersonAndOrganization)& aPersonAndOrganizationAssignment_AssignedPersonAndOrganization, const Handle(StepBasic_PersonAndOrganizationRole)& aPersonAndOrganizationAssignment_Role, const Handle(StepAP203_HArray1OfPersonOrganizationItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP203_HArray1OfPersonOrganizationItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP203_HArray1OfPersonOrganizationItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_CcDesignPersonAndOrganizationAssignment)

protected:




private: 


  Handle(StepAP203_HArray1OfPersonOrganizationItem) theItems;


};







#endif // _StepAP203_CcDesignPersonAndOrganizationAssignment_HeaderFile
