// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_CharacterizedDefinition_HeaderFile
#define _StepRepr_CharacterizedDefinition_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_CharacterizedObject.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
#include <Handle_StepRepr_ShapeAspect.hxx>
#include <Handle_StepRepr_ShapeAspectRelationship.hxx>
#include <Handle_StepBasic_DocumentFile.hxx>
class Standard_Transient;
class StepBasic_CharacterizedObject;
class StepBasic_ProductDefinition;
class StepBasic_ProductDefinitionRelationship;
class StepRepr_ProductDefinitionShape;
class StepRepr_ShapeAspect;
class StepRepr_ShapeAspectRelationship;
class StepBasic_DocumentFile;


//! Representation of STEP SELECT type CharacterizedDefinition
class StepRepr_CharacterizedDefinition  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepRepr_CharacterizedDefinition();
  
  //! Recognizes a kind of CharacterizedDefinition select type
  //! 1 -> CharacterizedObject from StepBasic
  //! 2 -> ProductDefinition from StepBasic
  //! 3 -> ProductDefinitionRelationship from StepBasic
  //! 4 -> ProductDefinitionShape from StepRepr
  //! 5 -> ShapeAspect from StepRepr
  //! 6 -> ShapeAspectRelationship from StepRepr
  //! 7 -> DocumentFile from StepBasic
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as CharacterizedObject (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_CharacterizedObject) CharacterizedObject()  const;
  
  //! Returns Value as ProductDefinition (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  //! Returns Value as ProductDefinitionRelationship (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionRelationship) ProductDefinitionRelationship()  const;
  
  //! Returns Value as ProductDefinitionShape (or Null if another type)
  Standard_EXPORT   Handle(StepRepr_ProductDefinitionShape) ProductDefinitionShape()  const;
  
  //! Returns Value as ShapeAspect (or Null if another type)
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) ShapeAspect()  const;
  
  //! Returns Value as ShapeAspectRelationship (or Null if another type)
  Standard_EXPORT   Handle(StepRepr_ShapeAspectRelationship) ShapeAspectRelationship()  const;
  
  //! Returns Value as DocumentFile (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_DocumentFile) DocumentFile()  const;




protected:





private:





};







#endif // _StepRepr_CharacterizedDefinition_HeaderFile
