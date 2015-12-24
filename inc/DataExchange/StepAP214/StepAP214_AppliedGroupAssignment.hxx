// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AppliedGroupAssignment_HeaderFile
#define _StepAP214_AppliedGroupAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepAP214/Handle_StepAP214_AppliedGroupAssignment.hxx>

#include <DataExchange/StepAP214/Handle_StepAP214_HArray1OfGroupItem.hxx>
#include <DataExchange/StepBasic/StepBasic_GroupAssignment.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Group.hxx>
class StepAP214_HArray1OfGroupItem;
class StepBasic_Group;


//! Representation of STEP entity AppliedGroupAssignment
class StepAP214_AppliedGroupAssignment : public StepBasic_GroupAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP214_AppliedGroupAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_Group)& aGroupAssignment_AssignedGroup, const Handle(StepAP214_HArray1OfGroupItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP214_HArray1OfGroupItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP214_HArray1OfGroupItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP214_AppliedGroupAssignment)

protected:




private: 


  Handle(StepAP214_HArray1OfGroupItem) theItems;


};







#endif // _StepAP214_AppliedGroupAssignment_HeaderFile
