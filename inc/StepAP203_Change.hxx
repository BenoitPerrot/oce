// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_Change_HeaderFile
#define _StepAP203_Change_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepAP203_Change.hxx>

#include <Handle_StepAP203_HArray1OfWorkItem.hxx>
#include <StepBasic_ActionAssignment.hxx>
#include <Handle_StepBasic_Action.hxx>
class StepAP203_HArray1OfWorkItem;
class StepBasic_Action;


//! Representation of STEP entity Change
class StepAP203_Change : public StepBasic_ActionAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP203_Change();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_Action)& aActionAssignment_AssignedAction, const Handle(StepAP203_HArray1OfWorkItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP203_HArray1OfWorkItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP203_HArray1OfWorkItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_Change)

protected:




private: 


  Handle(StepAP203_HArray1OfWorkItem) theItems;


};







#endif // _StepAP203_Change_HeaderFile
