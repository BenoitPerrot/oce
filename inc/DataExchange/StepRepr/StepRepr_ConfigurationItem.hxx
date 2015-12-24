// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ConfigurationItem_HeaderFile
#define _StepRepr_ConfigurationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ConfigurationItem.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ProductConcept.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepRepr_ProductConcept;


//! Representation of STEP entity ConfigurationItem
class StepRepr_ConfigurationItem : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepRepr_ConfigurationItem();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aId, const Handle(TCollection_HAsciiString)& aName, const Standard_Boolean hasDescription, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepRepr_ProductConcept)& aItemConcept, const Standard_Boolean hasPurpose, const Handle(TCollection_HAsciiString)& aPurpose) ;
  
  //! Returns field Id
  Standard_EXPORT   Handle(TCollection_HAsciiString) Id()  const;
  
  //! Set field Id
  Standard_EXPORT   void SetId (const Handle(TCollection_HAsciiString)& Id) ;
  
  //! Returns field Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! Set field Name
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& Name) ;
  
  //! Returns field Description
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  //! Set field Description
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& Description) ;
  
  //! Returns True if optional field Description is defined
  Standard_EXPORT   Standard_Boolean HasDescription()  const;
  
  //! Returns field ItemConcept
  Standard_EXPORT   Handle(StepRepr_ProductConcept) ItemConcept()  const;
  
  //! Set field ItemConcept
  Standard_EXPORT   void SetItemConcept (const Handle(StepRepr_ProductConcept)& ItemConcept) ;
  
  //! Returns field Purpose
  Standard_EXPORT   Handle(TCollection_HAsciiString) Purpose()  const;
  
  //! Set field Purpose
  Standard_EXPORT   void SetPurpose (const Handle(TCollection_HAsciiString)& Purpose) ;
  
  //! Returns True if optional field Purpose is defined
  Standard_EXPORT   Standard_Boolean HasPurpose()  const;




  DEFINE_STANDARD_RTTI(StepRepr_ConfigurationItem)

protected:




private: 


  Handle(TCollection_HAsciiString) theId;
  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepRepr_ProductConcept) theItemConcept;
  Handle(TCollection_HAsciiString) thePurpose;
  Standard_Boolean defDescription;
  Standard_Boolean defPurpose;


};







#endif // _StepRepr_ConfigurationItem_HeaderFile
