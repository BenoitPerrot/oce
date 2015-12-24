// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepGeom_RWCompositeCurveOnSurface_HeaderFile
#define _RWStepGeom_RWCompositeCurveOnSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_CompositeCurveOnSurface.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepGeom_CompositeCurveOnSurface;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for CompositeCurveOnSurface
class RWStepGeom_RWCompositeCurveOnSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepGeom_RWCompositeCurveOnSurface();
  
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepGeom_CompositeCurveOnSurface)& ent)  const;
  
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepGeom_CompositeCurveOnSurface)& ent)  const;
  
  Standard_EXPORT   void Share (const Handle(StepGeom_CompositeCurveOnSurface)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepGeom_RWCompositeCurveOnSurface_HeaderFile
