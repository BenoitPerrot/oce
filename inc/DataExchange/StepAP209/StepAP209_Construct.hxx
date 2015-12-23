// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP209_Construct_HeaderFile
#define _StepAP209_Construct_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/STEPConstruct/STEPConstruct_Tool.hxx>
#include <Handle_XSControl_WorkSession.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#include <Handle_StepFEA_FeaModel.hxx>
#include <Handle_StepBasic_Product.hxx>
#include <Handle_StepFEA_FeaAxis2Placement3d.hxx>
#include <Handle_StepShape_ShapeRepresentation.hxx>
#include <Handle_StepElement_HSequenceOfElementMaterial.hxx>
#include <Handle_StepFEA_HSequenceOfElementGeometricRelationship.hxx>
#include <Handle_StepFEA_HSequenceOfElementRepresentation.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_StepElement_HSequenceOfCurveElementSectionDefinition.hxx>
#include <Handle_StepFEA_Curve3dElementRepresentation.hxx>
#include <Handle_StepFEA_ElementRepresentation.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_StepData_StepModel.hxx>
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
class XSControl_WorkSession;
class StepBasic_ProductDefinitionFormation;
class StepFEA_FeaModel;
class StepBasic_Product;
class StepFEA_FeaAxis2Placement3d;
class StepShape_ShapeRepresentation;
class StepElement_HSequenceOfElementMaterial;
class StepFEA_HSequenceOfElementGeometricRelationship;
class StepFEA_HSequenceOfElementRepresentation;
class Standard_Type;
class StepElement_HSequenceOfCurveElementSectionDefinition;
class StepFEA_Curve3dElementRepresentation;
class StepFEA_ElementRepresentation;
class StepBasic_ProductDefinition;
class StepData_StepModel;
class StepRepr_ProductDefinitionShape;


//! Basic tool for working with AP209 model
class StepAP209_Construct  : public STEPConstruct_Tool
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty tool
  Standard_EXPORT StepAP209_Construct();
  
  //! Creates a tool and initializes it
  Standard_EXPORT StepAP209_Construct(const Handle(XSControl_WorkSession)& WS);
  
  //! Initializes tool; returns True if succeeded
  Standard_EXPORT   Standard_Boolean Init (const Handle(XSControl_WorkSession)& WS) ;
  
  Standard_EXPORT   Standard_Boolean IsDesing (const Handle(StepBasic_ProductDefinitionFormation)& PD)  const;
  
  Standard_EXPORT   Standard_Boolean IsAnalys (const Handle(StepBasic_ProductDefinitionFormation)& PD)  const;
  
  Standard_EXPORT   Handle(StepFEA_FeaModel) FeaModel (const Handle(StepBasic_Product)& Prod)  const;
  
  Standard_EXPORT   Handle(StepFEA_FeaModel) FeaModel (const Handle(StepBasic_ProductDefinitionFormation)& PDF)  const;
  
  Standard_EXPORT   Handle(StepFEA_FeaAxis2Placement3d) GetFeaAxis2Placement3d (const Handle(StepFEA_FeaModel)& theFeaModel)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) IdealShape (const Handle(StepBasic_Product)& Prod)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) IdealShape (const Handle(StepBasic_ProductDefinitionFormation)& PDF)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) NominShape (const Handle(StepBasic_Product)& Prod)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) NominShape (const Handle(StepBasic_ProductDefinitionFormation)& PDF)  const;
  
  Standard_EXPORT   Handle(StepElement_HSequenceOfElementMaterial) GetElementMaterial()  const;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementGeometricRelationship) GetElemGeomRelat()  const;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementRepresentation) GetElements1D (const Handle(StepFEA_FeaModel)& theFeaModel)  const;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementRepresentation) GetElements2D (const Handle(StepFEA_FeaModel)& theFEAModel)  const;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementRepresentation) GetElements3D (const Handle(StepFEA_FeaModel)& theFEAModel)  const;
  
  //! Getting list of curve_element_section_definitions
  //! for given element_representation
  Standard_EXPORT   Handle(StepElement_HSequenceOfCurveElementSectionDefinition) GetCurElemSection (const Handle(StepFEA_Curve3dElementRepresentation)& ElemRepr)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) GetShReprForElem (const Handle(StepFEA_ElementRepresentation)& ElemRepr)  const;
  
  //! Create empty structure for idealized_analysis_shape
  Standard_EXPORT   Standard_Boolean CreateAnalysStructure (const Handle(StepBasic_Product)& Prod)  const;
  
  //! Create fea structure
  Standard_EXPORT   Standard_Boolean CreateFeaStructure (const Handle(StepBasic_Product)& Prod)  const;
  
  //! Put into model entities Applied... for AP209 instead of
  //! entities CcDesing... from AP203.
  Standard_EXPORT   Standard_Boolean ReplaceCcDesingToApplied()  const;
  
  //! Create approval.. , date.. , time.. , person.. and
  //! organization.. entities for analysis structure
  Standard_EXPORT   Standard_Boolean CreateAddingEntities (const Handle(StepBasic_ProductDefinition)& AnaPD)  const;
  
  //! Create AP203 structure from existing AP209 structure
  Standard_EXPORT   Handle(StepData_StepModel) CreateAP203Structure()  const;
  
  //! Create approval.. , date.. , time.. , person.. and
  //! organization.. entities for 203 structure
  Standard_EXPORT   Standard_Boolean CreateAdding203Entities (const Handle(StepBasic_ProductDefinition)& PD, Handle(StepData_StepModel)& aModel)  const;
  
  Standard_EXPORT   Handle(StepFEA_FeaModel) FeaModel (const Handle(StepRepr_ProductDefinitionShape)& PDS)  const;
  
  Standard_EXPORT   Handle(StepFEA_FeaModel) FeaModel (const Handle(StepBasic_ProductDefinition)& PD)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) IdealShape (const Handle(StepBasic_ProductDefinition)& PD)  const;
  
  Standard_EXPORT   Handle(StepShape_ShapeRepresentation) IdealShape (const Handle(StepRepr_ProductDefinitionShape)& PDS)  const;




protected:

  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementRepresentation) GetFeaElements (const Handle(StepFEA_FeaModel)& theFeaModel, const Handle(Standard_Type)& theType)  const;




private:





};







#endif // _StepAP209_Construct_HeaderFile
