// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepBasic_RWIdentificationRole_HeaderFile
#define _RWStepBasic_RWIdentificationRole_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_IdentificationRole.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepBasic_IdentificationRole;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for IdentificationRole
class RWStepBasic_RWIdentificationRole 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepBasic_RWIdentificationRole();
  
  //! Reads IdentificationRole
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepBasic_IdentificationRole)& ent)  const;
  
  //! Writes IdentificationRole
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepBasic_IdentificationRole)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepBasic_IdentificationRole)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepBasic_RWIdentificationRole_HeaderFile
