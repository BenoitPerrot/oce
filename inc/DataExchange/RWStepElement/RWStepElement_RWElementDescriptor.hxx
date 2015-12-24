// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepElement_RWElementDescriptor_HeaderFile
#define _RWStepElement_RWElementDescriptor_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepElement/Handle_StepElement_ElementDescriptor.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepElement_ElementDescriptor;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for ElementDescriptor
class RWStepElement_RWElementDescriptor 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepElement_RWElementDescriptor();
  
  //! Reads ElementDescriptor
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepElement_ElementDescriptor)& ent)  const;
  
  //! Writes ElementDescriptor
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepElement_ElementDescriptor)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepElement_ElementDescriptor)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepElement_RWElementDescriptor_HeaderFile
