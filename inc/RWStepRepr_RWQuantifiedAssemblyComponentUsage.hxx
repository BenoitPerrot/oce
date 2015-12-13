// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepRepr_RWQuantifiedAssemblyComponentUsage_HeaderFile
#define _RWStepRepr_RWQuantifiedAssemblyComponentUsage_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepRepr_QuantifiedAssemblyComponentUsage.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepRepr_QuantifiedAssemblyComponentUsage;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for QuantifiedAssemblyComponentUsage
class RWStepRepr_RWQuantifiedAssemblyComponentUsage 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepRepr_RWQuantifiedAssemblyComponentUsage();
  
  //! Reads QuantifiedAssemblyComponentUsage
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepRepr_QuantifiedAssemblyComponentUsage)& ent)  const;
  
  //! Writes QuantifiedAssemblyComponentUsage
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepRepr_QuantifiedAssemblyComponentUsage)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepRepr_QuantifiedAssemblyComponentUsage)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepRepr_RWQuantifiedAssemblyComponentUsage_HeaderFile
