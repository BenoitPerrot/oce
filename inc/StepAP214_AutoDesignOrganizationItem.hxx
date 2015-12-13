// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignOrganizationItem_HeaderFile
#define _StepAP214_AutoDesignOrganizationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_Document.hxx>
#include <Handle_StepBasic_PhysicallyModeledProductDefinition.hxx>
class Standard_Transient;
class StepBasic_Document;
class StepBasic_PhysicallyModeledProductDefinition;



class StepAP214_AutoDesignOrganizationItem  : public StepAP214_AutoDesignGeneralOrgItem
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepAP214_AutoDesignOrganizationItem();
  
  Standard_EXPORT virtual   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  Standard_EXPORT   Handle(StepBasic_Document) Document()  const;
  
  Standard_EXPORT   Handle(StepBasic_PhysicallyModeledProductDefinition) PhysicallyModeledProductDefinition()  const;




protected:





private:





};







#endif // _StepAP214_AutoDesignOrganizationItem_HeaderFile
