// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepShape_RWSweptFaceSolid_HeaderFile
#define _RWStepShape_RWSweptFaceSolid_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepShape/Handle_StepShape_SweptFaceSolid.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepShape_SweptFaceSolid;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for SweptFaceSolid
class RWStepShape_RWSweptFaceSolid 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepShape_RWSweptFaceSolid();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepShape_SweptFaceSolid)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepShape_SweptFaceSolid)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepShape_SweptFaceSolid)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepShape_RWSweptFaceSolid_HeaderFile
