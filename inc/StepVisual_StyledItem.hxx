// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_StyledItem_HeaderFile
#define _StepVisual_StyledItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepVisual_StyledItem.hxx>

#include <Handle_StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <Handle_StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepVisual_PresentationStyleAssignment.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepVisual_HArray1OfPresentationStyleAssignment;
class StepRepr_RepresentationItem;
class TCollection_HAsciiString;
class StepVisual_PresentationStyleAssignment;



class StepVisual_StyledItem : public StepRepr_RepresentationItem
{

public:

  
  //! Returns a StyledItem
  Standard_EXPORT StepVisual_StyledItem();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfPresentationStyleAssignment)& aStyles, const Handle(StepRepr_RepresentationItem)& aItem) ;
  
  Standard_EXPORT   void SetStyles (const Handle(StepVisual_HArray1OfPresentationStyleAssignment)& aStyles) ;
  
  Standard_EXPORT   Handle(StepVisual_HArray1OfPresentationStyleAssignment) Styles()  const;
  
  Standard_EXPORT   Handle(StepVisual_PresentationStyleAssignment) StylesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbStyles()  const;
  
  Standard_EXPORT   void SetItem (const Handle(StepRepr_RepresentationItem)& aItem) ;
  
  Standard_EXPORT   Handle(StepRepr_RepresentationItem) Item()  const;




  DEFINE_STANDARD_RTTI(StepVisual_StyledItem)

protected:




private: 


  Handle(StepVisual_HArray1OfPresentationStyleAssignment) styles;
  Handle(StepRepr_RepresentationItem) item;


};







#endif // _StepVisual_StyledItem_HeaderFile
