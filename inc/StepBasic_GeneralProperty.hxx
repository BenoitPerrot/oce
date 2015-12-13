// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_GeneralProperty_HeaderFile
#define _StepBasic_GeneralProperty_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_GeneralProperty.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;


//! Representation of STEP entity GeneralProperty
class StepBasic_GeneralProperty : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_GeneralProperty();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aId, const Handle(TCollection_HAsciiString)& aName, const Standard_Boolean hasDescription, const Handle(TCollection_HAsciiString)& aDescription) ;
  
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




  DEFINE_STANDARD_RTTI(StepBasic_GeneralProperty)

protected:




private: 


  Handle(TCollection_HAsciiString) theId;
  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Standard_Boolean defDescription;


};







#endif // _StepBasic_GeneralProperty_HeaderFile
