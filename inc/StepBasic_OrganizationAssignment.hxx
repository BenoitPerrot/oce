// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_OrganizationAssignment_HeaderFile
#define _StepBasic_OrganizationAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_OrganizationAssignment.hxx>

#include <Handle_StepBasic_Organization.hxx>
#include <Handle_StepBasic_OrganizationRole.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_Organization;
class StepBasic_OrganizationRole;



class StepBasic_OrganizationAssignment : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Organization)& aAssignedOrganization, const Handle(StepBasic_OrganizationRole)& aRole) ;
  
  Standard_EXPORT   void SetAssignedOrganization (const Handle(StepBasic_Organization)& aAssignedOrganization) ;
  
  Standard_EXPORT   Handle(StepBasic_Organization) AssignedOrganization()  const;
  
  Standard_EXPORT   void SetRole (const Handle(StepBasic_OrganizationRole)& aRole) ;
  
  Standard_EXPORT   Handle(StepBasic_OrganizationRole) Role()  const;




  DEFINE_STANDARD_RTTI(StepBasic_OrganizationAssignment)

protected:




private: 


  Handle(StepBasic_Organization) assignedOrganization;
  Handle(StepBasic_OrganizationRole) role;


};







#endif // _StepBasic_OrganizationAssignment_HeaderFile
