// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DocumentRelationship_HeaderFile
#define _StepBasic_DocumentRelationship_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_DocumentRelationship.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_Document.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_Document;



class StepBasic_DocumentRelationship : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepBasic_DocumentRelationship();
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_Document)& aRelating, const Handle(StepBasic_Document)& aRelated) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(StepBasic_Document) RelatingDocument()  const;
  
  Standard_EXPORT   void SetRelatingDocument (const Handle(StepBasic_Document)& aRelating) ;
  
  Standard_EXPORT   Handle(StepBasic_Document) RelatedDocument()  const;
  
  Standard_EXPORT   void SetRelatedDocument (const Handle(StepBasic_Document)& aRelated) ;




  DEFINE_STANDARD_RTTI(StepBasic_DocumentRelationship)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepBasic_Document) theRelating;
  Handle(StepBasic_Document) theRelated;


};







#endif // _StepBasic_DocumentRelationship_HeaderFile
