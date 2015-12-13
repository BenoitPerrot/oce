// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ShapeAspectRelationship_HeaderFile
#define _StepRepr_ShapeAspectRelationship_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepRepr_ShapeAspectRelationship.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepRepr_ShapeAspect.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepRepr_ShapeAspect;


//! Representation of STEP entity ShapeAspectRelationship
class StepRepr_ShapeAspectRelationship : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepRepr_ShapeAspectRelationship();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Boolean hasDescription, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepRepr_ShapeAspect)& aRelatingShapeAspect, const Handle(StepRepr_ShapeAspect)& aRelatedShapeAspect) ;
  
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
  
  //! Returns field RelatingShapeAspect
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) RelatingShapeAspect()  const;
  
  //! Set field RelatingShapeAspect
  Standard_EXPORT   void SetRelatingShapeAspect (const Handle(StepRepr_ShapeAspect)& RelatingShapeAspect) ;
  
  //! Returns field RelatedShapeAspect
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) RelatedShapeAspect()  const;
  
  //! Set field RelatedShapeAspect
  Standard_EXPORT   void SetRelatedShapeAspect (const Handle(StepRepr_ShapeAspect)& RelatedShapeAspect) ;




  DEFINE_STANDARD_RTTI(StepRepr_ShapeAspectRelationship)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepRepr_ShapeAspect) theRelatingShapeAspect;
  Handle(StepRepr_ShapeAspect) theRelatedShapeAspect;
  Standard_Boolean defDescription;


};







#endif // _StepRepr_ShapeAspectRelationship_HeaderFile
