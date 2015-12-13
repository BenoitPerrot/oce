// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP214_RWRepItemGroup_HeaderFile
#define _RWStepAP214_RWRepItemGroup_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepAP214_RepItemGroup.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepAP214_RepItemGroup;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for RepItemGroup
class RWStepAP214_RWRepItemGroup 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepAP214_RWRepItemGroup();
  
  //! Reads RepItemGroup
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepAP214_RepItemGroup)& ent)  const;
  
  //! Writes RepItemGroup
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepAP214_RepItemGroup)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepAP214_RepItemGroup)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepAP214_RWRepItemGroup_HeaderFile
