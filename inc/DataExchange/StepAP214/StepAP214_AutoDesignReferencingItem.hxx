// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignReferencingItem_HeaderFile
#define _StepAP214_AutoDesignReferencingItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Approval.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_DocumentRelationship.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ExternallyDefinedRepresentation.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_MappedItem.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_MaterialDesignation.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_PresentationArea.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_PresentationView.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductCategory.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinition.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinitionRelationship.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_PropertyDefinition.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_Representation.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_RepresentationRelationship.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ShapeAspect.hxx>
class Standard_Transient;
class StepBasic_Approval;
class StepBasic_DocumentRelationship;
class StepRepr_ExternallyDefinedRepresentation;
class StepRepr_MappedItem;
class StepRepr_MaterialDesignation;
class StepVisual_PresentationArea;
class StepVisual_PresentationView;
class StepBasic_ProductCategory;
class StepBasic_ProductDefinition;
class StepBasic_ProductDefinitionRelationship;
class StepRepr_PropertyDefinition;
class StepRepr_Representation;
class StepRepr_RepresentationRelationship;
class StepRepr_ShapeAspect;



class StepAP214_AutoDesignReferencingItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a AutoDesignReferencingItem SelectType
  Standard_EXPORT StepAP214_AutoDesignReferencingItem();
  
  //! Recognizes a AutoDesignReferencingItem Kind Entity that is :
  //! 1     Approval from StepBasic,
  //! 2     DocumentRelationship from StepBasic,
  //! 3     ExternallyDefinedRepresentation from StepRepr,
  //! 4     MappedItem from StepRepr,
  //! 5     MaterialDesignation from StepRepr,
  //! 6     PresentationArea from StepVisual,
  //! 7     PresentationView from StepVisual,
  //! 8     ProductCategory from StepBasic,
  //! 9     ProductDefinition from StepBasic,
  //! 10     ProductDefinitionRelationship from StepBasic,
  //! 11     PropertyDefinition from StepBasic,
  //! 12     Representation from StepRepr,
  //! 13     RepresentationRelationship from StepRepr,
  //! 14     ShapeAspect from StepRepr
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  Standard_EXPORT   Handle(StepBasic_Approval) Approval()  const;
  
  Standard_EXPORT   Handle(StepBasic_DocumentRelationship) DocumentRelationship()  const;
  
  Standard_EXPORT   Handle(StepRepr_ExternallyDefinedRepresentation) ExternallyDefinedRepresentation()  const;
  
  Standard_EXPORT   Handle(StepRepr_MappedItem) MappedItem()  const;
  
  Standard_EXPORT   Handle(StepRepr_MaterialDesignation) MaterialDesignation()  const;
  
  Standard_EXPORT   Handle(StepVisual_PresentationArea) PresentationArea()  const;
  
  Standard_EXPORT   Handle(StepVisual_PresentationView) PresentationView()  const;
  
  Standard_EXPORT   Handle(StepBasic_ProductCategory) ProductCategory()  const;
  
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionRelationship) ProductDefinitionRelationship()  const;
  
  Standard_EXPORT   Handle(StepRepr_PropertyDefinition) PropertyDefinition()  const;
  
  Standard_EXPORT   Handle(StepRepr_Representation) Representation()  const;
  
  Standard_EXPORT   Handle(StepRepr_RepresentationRelationship) RepresentationRelationship()  const;
  
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) ShapeAspect()  const;




protected:





private:





};







#endif // _StepAP214_AutoDesignReferencingItem_HeaderFile
