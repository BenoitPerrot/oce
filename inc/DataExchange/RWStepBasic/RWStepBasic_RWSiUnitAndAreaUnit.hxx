// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepBasic_RWSiUnitAndAreaUnit_HeaderFile
#define _RWStepBasic_RWSiUnitAndAreaUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_SiUnitAndAreaUnit.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepBasic_SiUnitAndAreaUnit;
class StepData_StepWriter;


//! Read & Write Module for SiUnitAndAreaUnit
class RWStepBasic_RWSiUnitAndAreaUnit 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepBasic_RWSiUnitAndAreaUnit();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepBasic_SiUnitAndAreaUnit)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepBasic_SiUnitAndAreaUnit)& ent)  const;




protected:





private:





};







#endif // _RWStepBasic_RWSiUnitAndAreaUnit_HeaderFile
