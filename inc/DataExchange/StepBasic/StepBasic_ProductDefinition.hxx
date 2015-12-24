// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductDefinition_HeaderFile
#define _StepBasic_ProductDefinition_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinition.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinitionFormation.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinitionContext.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_ProductDefinitionFormation;
class StepBasic_ProductDefinitionContext;



class StepBasic_ProductDefinition : public MMgt_TShared
{

public:

  
  //! Returns a ProductDefinition
  Standard_EXPORT StepBasic_ProductDefinition();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aId, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_ProductDefinitionFormation)& aFormation, const Handle(StepBasic_ProductDefinitionContext)& aFrameOfReference) ;
  
  Standard_EXPORT   void SetId (const Handle(TCollection_HAsciiString)& aId) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Id()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   void SetFormation (const Handle(StepBasic_ProductDefinitionFormation)& aFormation) ;
  
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionFormation) Formation()  const;
  
  Standard_EXPORT   void SetFrameOfReference (const Handle(StepBasic_ProductDefinitionContext)& aFrameOfReference) ;
  
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionContext) FrameOfReference()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ProductDefinition)

protected:




private: 


  Handle(TCollection_HAsciiString) id;
  Handle(TCollection_HAsciiString) description;
  Handle(StepBasic_ProductDefinitionFormation) formation;
  Handle(StepBasic_ProductDefinitionContext) frameOfReference;


};







#endif // _StepBasic_ProductDefinition_HeaderFile
