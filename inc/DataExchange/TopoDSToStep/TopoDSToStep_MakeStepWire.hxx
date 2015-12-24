// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_MakeStepWire_HeaderFile
#define _TopoDSToStep_MakeStepWire_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepShape/Handle_StepShape_TopologicalRepresentationItem.hxx>
#include <DataExchange/TopoDSToStep/TopoDSToStep_MakeWireError.hxx>
#include <DataExchange/TopoDSToStep/TopoDSToStep_Root.hxx>
#include <DataExchange/Transfer/Handle_Transfer_FinderProcess.hxx>
class StepShape_TopologicalRepresentationItem;
class StdFail_NotDone;
class TopoDS_Wire;
class TopoDSToStep_Tool;
class Transfer_FinderProcess;


//! This class implements the mapping between classes
//! Wire from TopoDS and TopologicalRepresentationItem from
//! StepShape.
class TopoDSToStep_MakeStepWire  : public TopoDSToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopoDSToStep_MakeStepWire();
  
  Standard_EXPORT TopoDSToStep_MakeStepWire(const TopoDS_Wire& W, TopoDSToStep_Tool& T, const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT   void Init (const TopoDS_Wire& W, TopoDSToStep_Tool& T, const Handle(Transfer_FinderProcess)& FP) ;
  
  Standard_EXPORT  const  Handle(StepShape_TopologicalRepresentationItem)& Value()  const;
  
  Standard_EXPORT   TopoDSToStep_MakeWireError Error()  const;




protected:





private:



  Handle(StepShape_TopologicalRepresentationItem) myResult;
  TopoDSToStep_MakeWireError myError;


};







#endif // _TopoDSToStep_MakeStepWire_HeaderFile
