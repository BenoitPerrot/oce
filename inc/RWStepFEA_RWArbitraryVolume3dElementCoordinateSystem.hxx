// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem_HeaderFile
#define _RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepFEA_ArbitraryVolume3dElementCoordinateSystem;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for ArbitraryVolume3dElementCoordinateSystem
class RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem();
  
  //! Reads ArbitraryVolume3dElementCoordinateSystem
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepFEA_ArbitraryVolume3dElementCoordinateSystem)& ent)  const;
  
  //! Writes ArbitraryVolume3dElementCoordinateSystem
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepFEA_ArbitraryVolume3dElementCoordinateSystem)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepFEA_ArbitraryVolume3dElementCoordinateSystem)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem_HeaderFile
