// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP214_RWAutoDesignGroupAssignment_HeaderFile
#define _RWStepAP214_RWAutoDesignGroupAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepAP214/Handle_StepAP214_AutoDesignGroupAssignment.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepAP214_AutoDesignGroupAssignment;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for AutoDesignGroupAssignment
class RWStepAP214_RWAutoDesignGroupAssignment 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepAP214_RWAutoDesignGroupAssignment();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepAP214_AutoDesignGroupAssignment)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepAP214_AutoDesignGroupAssignment)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepAP214_AutoDesignGroupAssignment)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepAP214_RWAutoDesignGroupAssignment_HeaderFile
