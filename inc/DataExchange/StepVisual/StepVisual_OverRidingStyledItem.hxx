// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_OverRidingStyledItem_HeaderFile
#define _StepVisual_OverRidingStyledItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_OverRidingStyledItem.hxx>

#include <DataExchange/StepVisual/Handle_StepVisual_StyledItem.hxx>
#include <DataExchange/StepVisual/StepVisual_StyledItem.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_RepresentationItem.hxx>
class StepVisual_StyledItem;
class TCollection_HAsciiString;
class StepVisual_HArray1OfPresentationStyleAssignment;
class StepRepr_RepresentationItem;



class StepVisual_OverRidingStyledItem : public StepVisual_StyledItem
{

public:

  
  //! Returns a OverRidingStyledItem
  Standard_EXPORT StepVisual_OverRidingStyledItem();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfPresentationStyleAssignment)& aStyles, const Handle(StepRepr_RepresentationItem)& aItem) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfPresentationStyleAssignment)& aStyles, const Handle(StepRepr_RepresentationItem)& aItem, const Handle(StepVisual_StyledItem)& aOverRiddenStyle) ;
  
  Standard_EXPORT   void SetOverRiddenStyle (const Handle(StepVisual_StyledItem)& aOverRiddenStyle) ;
  
  Standard_EXPORT   Handle(StepVisual_StyledItem) OverRiddenStyle()  const;




  DEFINE_STANDARD_RTTI(StepVisual_OverRidingStyledItem)

protected:




private: 


  Handle(StepVisual_StyledItem) overRiddenStyle;


};







#endif // _StepVisual_OverRidingStyledItem_HeaderFile
