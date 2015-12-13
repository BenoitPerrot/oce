// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepShape_RWPrecisionQualifier_HeaderFile
#define _RWStepShape_RWPrecisionQualifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepShape_PrecisionQualifier.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepShape_PrecisionQualifier;
class StepData_StepWriter;


//! Read & Write Module for PrecisionQualifier
class RWStepShape_RWPrecisionQualifier 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepShape_RWPrecisionQualifier();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepShape_PrecisionQualifier)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepShape_PrecisionQualifier)& ent)  const;




protected:





private:





};







#endif // _RWStepShape_RWPrecisionQualifier_HeaderFile
