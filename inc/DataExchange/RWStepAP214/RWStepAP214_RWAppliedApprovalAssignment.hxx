// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP214_RWAppliedApprovalAssignment_HeaderFile
#define _RWStepAP214_RWAppliedApprovalAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepAP214/Handle_StepAP214_AppliedApprovalAssignment.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepAP214_AppliedApprovalAssignment;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for AppliedApprovalAssignment
class RWStepAP214_RWAppliedApprovalAssignment 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepAP214_RWAppliedApprovalAssignment();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepAP214_AppliedApprovalAssignment)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepAP214_AppliedApprovalAssignment)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepAP214_AppliedApprovalAssignment)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepAP214_RWAppliedApprovalAssignment_HeaderFile
