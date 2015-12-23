// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignGeneralOrgItem_HeaderFile
#define _StepAP214_AutoDesignGeneralOrgItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_Product.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#include <Handle_StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <Handle_StepRepr_Representation.hxx>
#include <Handle_StepRepr_ExternallyDefinedRepresentation.hxx>
#include <Handle_StepAP214_AutoDesignDocumentReference.hxx>
class Standard_Transient;
class StepBasic_Product;
class StepBasic_ProductDefinition;
class StepBasic_ProductDefinitionFormation;
class StepBasic_ProductDefinitionRelationship;
class StepBasic_ProductDefinitionWithAssociatedDocuments;
class StepRepr_Representation;
class StepRepr_ExternallyDefinedRepresentation;
class StepAP214_AutoDesignDocumentReference;



class StepAP214_AutoDesignGeneralOrgItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a AutoDesignGeneralOrgItem SelectType
  Standard_EXPORT StepAP214_AutoDesignGeneralOrgItem();
  
  //! Recognizes a AutoDesignGeneralOrgItem Kind Entity that is :
  //! 1     Product from StepBasic,
  //! 2     ProductDefinition from StepBasic,
  //! 3     ProductDefinitionFormation from StepBasic,
  //! 4     ProductDefinitionRelationship from StepBasic,
  //! 5     ProductDefinitionWithAssociatedDocuments from StepBasic,
  //! 6     Representation from StepRepr
  //! 7     ExternallyDefinedRepresentation from StepRepr,
  //! 8     AutoDesignDocumentReference from StepAP214,
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a Product (Null if another type)
  Standard_EXPORT   Handle(StepBasic_Product) Product()  const;
  
  //! returns Value as a ProductDefinition (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  //! returns Value as a ProductDefinitionFormation (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionFormation) ProductDefinitionFormation()  const;
  
  //! returns Value as a ProductDefinitionRelationship (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionRelationship) ProductDefinitionRelationship()  const;
  
  //! returns Value as a ProductDefinitionWithAssociatedDocuments (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionWithAssociatedDocuments) ProductDefinitionWithAssociatedDocuments()  const;
  
  //! returns Value as a Representation (Null if another type)
  Standard_EXPORT   Handle(StepRepr_Representation) Representation()  const;
  
  //! returns Value as a Representation (Null if another type)
  Standard_EXPORT   Handle(StepRepr_ExternallyDefinedRepresentation) ExternallyDefinedRepresentation()  const;
  
  Standard_EXPORT   Handle(StepAP214_AutoDesignDocumentReference) AutoDesignDocumentReference()  const;




protected:





private:





};







#endif // _StepAP214_AutoDesignGeneralOrgItem_HeaderFile
