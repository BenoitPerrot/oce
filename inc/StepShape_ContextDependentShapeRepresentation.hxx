// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ContextDependentShapeRepresentation_HeaderFile
#define _StepShape_ContextDependentShapeRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_ContextDependentShapeRepresentation.hxx>

#include <Handle_StepRepr_ShapeRepresentationRelationship.hxx>
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepRepr_ShapeRepresentationRelationship;
class StepRepr_ProductDefinitionShape;



class StepShape_ContextDependentShapeRepresentation : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepShape_ContextDependentShapeRepresentation();
  
  Standard_EXPORT   void Init (const Handle(StepRepr_ShapeRepresentationRelationship)& aRepRel, const Handle(StepRepr_ProductDefinitionShape)& aProRel) ;
  
  Standard_EXPORT   Handle(StepRepr_ShapeRepresentationRelationship) RepresentationRelation()  const;
  
  Standard_EXPORT   void SetRepresentationRelation (const Handle(StepRepr_ShapeRepresentationRelationship)& aRepRel) ;
  
  Standard_EXPORT   Handle(StepRepr_ProductDefinitionShape) RepresentedProductRelation()  const;
  
  Standard_EXPORT   void SetRepresentedProductRelation (const Handle(StepRepr_ProductDefinitionShape)& aProRel) ;




  DEFINE_STANDARD_RTTI(StepShape_ContextDependentShapeRepresentation)

protected:




private: 


  Handle(StepRepr_ShapeRepresentationRelationship) theRepRel;
  Handle(StepRepr_ProductDefinitionShape) theProRel;


};







#endif // _StepShape_ContextDependentShapeRepresentation_HeaderFile
