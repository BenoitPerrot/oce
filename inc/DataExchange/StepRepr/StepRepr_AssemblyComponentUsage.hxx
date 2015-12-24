// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_AssemblyComponentUsage_HeaderFile
#define _StepRepr_AssemblyComponentUsage_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_AssemblyComponentUsage.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepRepr/StepRepr_ProductDefinitionUsage.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinition.hxx>
class TCollection_HAsciiString;
class StepBasic_ProductDefinition;


//! Representation of STEP entity AssemblyComponentUsage
class StepRepr_AssemblyComponentUsage : public StepRepr_ProductDefinitionUsage
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepRepr_AssemblyComponentUsage();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Id, const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Name, const Standard_Boolean hasProductDefinitionRelationship_Description, const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Description, const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatingProductDefinition, const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatedProductDefinition, const Standard_Boolean hasReferenceDesignator, const Handle(TCollection_HAsciiString)& aReferenceDesignator) ;
  
  //! Returns field ReferenceDesignator
  Standard_EXPORT   Handle(TCollection_HAsciiString) ReferenceDesignator()  const;
  
  //! Set field ReferenceDesignator
  Standard_EXPORT   void SetReferenceDesignator (const Handle(TCollection_HAsciiString)& ReferenceDesignator) ;
  
  //! Returns True if optional field ReferenceDesignator is defined
  Standard_EXPORT   Standard_Boolean HasReferenceDesignator()  const;




  DEFINE_STANDARD_RTTI(StepRepr_AssemblyComponentUsage)

protected:




private: 


  Handle(TCollection_HAsciiString) theReferenceDesignator;
  Standard_Boolean defReferenceDesignator;


};







#endif // _StepRepr_AssemblyComponentUsage_HeaderFile
