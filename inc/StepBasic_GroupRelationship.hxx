// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_GroupRelationship_HeaderFile
#define _StepBasic_GroupRelationship_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_GroupRelationship.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_Group.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_Group;


//! Representation of STEP entity GroupRelationship
class StepBasic_GroupRelationship : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_GroupRelationship();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Boolean hasDescription, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_Group)& aRelatingGroup, const Handle(StepBasic_Group)& aRelatedGroup) ;
  
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
  
  //! Returns field RelatingGroup
  Standard_EXPORT   Handle(StepBasic_Group) RelatingGroup()  const;
  
  //! Set field RelatingGroup
  Standard_EXPORT   void SetRelatingGroup (const Handle(StepBasic_Group)& RelatingGroup) ;
  
  //! Returns field RelatedGroup
  Standard_EXPORT   Handle(StepBasic_Group) RelatedGroup()  const;
  
  //! Set field RelatedGroup
  Standard_EXPORT   void SetRelatedGroup (const Handle(StepBasic_Group)& RelatedGroup) ;




  DEFINE_STANDARD_RTTI(StepBasic_GroupRelationship)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepBasic_Group) theRelatingGroup;
  Handle(StepBasic_Group) theRelatedGroup;
  Standard_Boolean defDescription;


};







#endif // _StepBasic_GroupRelationship_HeaderFile
