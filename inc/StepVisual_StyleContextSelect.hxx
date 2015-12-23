// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_StyleContextSelect_HeaderFile
#define _StepVisual_StyleContextSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepRepr_Representation.hxx>
#include <Handle_StepRepr_RepresentationItem.hxx>
#include <Handle_StepVisual_PresentationSet.hxx>
class Standard_Transient;
class StepRepr_Representation;
class StepRepr_RepresentationItem;
class StepVisual_PresentationSet;



class StepVisual_StyleContextSelect  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a StyleContextSelect SelectType
  Standard_EXPORT StepVisual_StyleContextSelect();
  
  //! Recognizes a StyleContextSelect Kind Entity that is :
  //! 1 -> Representation
  //! 2 -> RepresentationItem
  //! 3 -> PresentationSet
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a Representation (Null if another type)
  Standard_EXPORT   Handle(StepRepr_Representation) Representation()  const;
  
  //! returns Value as a RepresentationItem (Null if another type)
  Standard_EXPORT   Handle(StepRepr_RepresentationItem) RepresentationItem()  const;
  
  //! returns Value as a PresentationSet (Null if another type)
  Standard_EXPORT   Handle(StepVisual_PresentationSet) PresentationSet()  const;




protected:





private:





};







#endif // _StepVisual_StyleContextSelect_HeaderFile
