// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_MakeGeometricCurveSet_HeaderFile
#define _TopoDSToStep_MakeGeometricCurveSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepShape/Handle_StepShape_GeometricCurveSet.hxx>
#include <DataExchange/TopoDSToStep/TopoDSToStep_Root.hxx>
#include <DataExchange/Transfer/Handle_Transfer_FinderProcess.hxx>
class StepShape_GeometricCurveSet;
class StdFail_NotDone;
class TopoDS_Shape;
class Transfer_FinderProcess;


//! This class implements the mapping between a Shape
//! from TopoDS and a GeometricCurveSet from StepShape in order
//! to create a GeometricallyBoundedWireframeRepresentation.
class TopoDSToStep_MakeGeometricCurveSet  : public TopoDSToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopoDSToStep_MakeGeometricCurveSet(const TopoDS_Shape& SH, const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT  const  Handle(StepShape_GeometricCurveSet)& Value()  const;




protected:





private:



  Handle(StepShape_GeometricCurveSet) theGeometricCurveSet;


};







#endif // _TopoDSToStep_MakeGeometricCurveSet_HeaderFile
