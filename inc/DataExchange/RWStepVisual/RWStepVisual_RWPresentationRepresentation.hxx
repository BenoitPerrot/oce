// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepVisual_RWPresentationRepresentation_HeaderFile
#define _RWStepVisual_RWPresentationRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_PresentationRepresentation.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepVisual_PresentationRepresentation;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for PresentationRepresentation
class RWStepVisual_RWPresentationRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepVisual_RWPresentationRepresentation();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepVisual_PresentationRepresentation)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepVisual_PresentationRepresentation)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepVisual_PresentationRepresentation)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepVisual_RWPresentationRepresentation_HeaderFile
