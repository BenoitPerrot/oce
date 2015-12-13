// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PresentationRepresentationSelect_HeaderFile
#define _StepVisual_PresentationRepresentationSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepVisual_PresentationRepresentation.hxx>
#include <Handle_StepVisual_PresentationSet.hxx>
class Standard_Transient;
class StepVisual_PresentationRepresentation;
class StepVisual_PresentationSet;



class StepVisual_PresentationRepresentationSelect  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a PresentationRepresentationSelect SelectType
  Standard_EXPORT StepVisual_PresentationRepresentationSelect();
  
  //! Recognizes a PresentationRepresentationSelect Kind Entity that is :
  //! 1 -> PresentationRepresentation
  //! 2 -> PresentationSet
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a PresentationRepresentation (Null if another type)
  Standard_EXPORT   Handle(StepVisual_PresentationRepresentation) PresentationRepresentation()  const;
  
  //! returns Value as a PresentationSet (Null if another type)
  Standard_EXPORT   Handle(StepVisual_PresentationSet) PresentationSet()  const;




protected:





private:





};







#endif // _StepVisual_PresentationRepresentationSelect_HeaderFile
