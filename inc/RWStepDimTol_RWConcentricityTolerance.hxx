// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepDimTol_RWConcentricityTolerance_HeaderFile
#define _RWStepDimTol_RWConcentricityTolerance_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepDimTol_ConcentricityTolerance.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepDimTol_ConcentricityTolerance;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for ConcentricityTolerance
class RWStepDimTol_RWConcentricityTolerance 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepDimTol_RWConcentricityTolerance();
  
  //! Reads ConcentricityTolerance
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepDimTol_ConcentricityTolerance)& ent)  const;
  
  //! Writes ConcentricityTolerance
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepDimTol_ConcentricityTolerance)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepDimTol_ConcentricityTolerance)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepDimTol_RWConcentricityTolerance_HeaderFile
