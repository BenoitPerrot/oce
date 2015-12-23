// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_AreaOrView_HeaderFile
#define _StepVisual_AreaOrView_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepVisual_PresentationArea.hxx>
#include <Handle_StepVisual_PresentationView.hxx>
class Standard_Transient;
class StepVisual_PresentationArea;
class StepVisual_PresentationView;



class StepVisual_AreaOrView  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a AreaOrView SelectType
  Standard_EXPORT StepVisual_AreaOrView();
  
  //! Recognizes a AreaOrView Kind Entity that is :
  //! 1 -> PresentationArea
  //! 2 -> PresentationView
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a PresentationArea (Null if another type)
  Standard_EXPORT   Handle(StepVisual_PresentationArea) PresentationArea()  const;
  
  //! returns Value as a PresentationView (Null if another type)
  Standard_EXPORT   Handle(StepVisual_PresentationView) PresentationView()  const;




protected:





private:





};







#endif // _StepVisual_AreaOrView_HeaderFile
