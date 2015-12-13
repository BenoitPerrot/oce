// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP214_RWAutoDesignPresentedItem_HeaderFile
#define _RWStepAP214_RWAutoDesignPresentedItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepAP214_AutoDesignPresentedItem.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepAP214_AutoDesignPresentedItem;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for AutoDesignPresentedItem
class RWStepAP214_RWAutoDesignPresentedItem 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepAP214_RWAutoDesignPresentedItem();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepAP214_AutoDesignPresentedItem)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepAP214_AutoDesignPresentedItem)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepAP214_AutoDesignPresentedItem)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepAP214_RWAutoDesignPresentedItem_HeaderFile
