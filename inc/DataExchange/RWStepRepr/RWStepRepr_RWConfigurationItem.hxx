// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepRepr_RWConfigurationItem_HeaderFile
#define _RWStepRepr_RWConfigurationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ConfigurationItem.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepRepr_ConfigurationItem;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for ConfigurationItem
class RWStepRepr_RWConfigurationItem 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepRepr_RWConfigurationItem();
  
  //! Reads ConfigurationItem
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepRepr_ConfigurationItem)& ent)  const;
  
  //! Writes ConfigurationItem
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepRepr_ConfigurationItem)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepRepr_ConfigurationItem)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepRepr_RWConfigurationItem_HeaderFile
