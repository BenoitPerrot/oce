// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ReversibleTopologyItem_HeaderFile
#define _StepShape_ReversibleTopologyItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepShape_Edge.hxx>
#include <Handle_StepShape_Path.hxx>
#include <Handle_StepShape_Face.hxx>
#include <Handle_StepShape_FaceBound.hxx>
#include <Handle_StepShape_ClosedShell.hxx>
#include <Handle_StepShape_OpenShell.hxx>
class Standard_Transient;
class StepShape_Edge;
class StepShape_Path;
class StepShape_Face;
class StepShape_FaceBound;
class StepShape_ClosedShell;
class StepShape_OpenShell;



class StepShape_ReversibleTopologyItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ReversibleTopologyItem SelectType
  Standard_EXPORT StepShape_ReversibleTopologyItem();
  
  //! Recognizes a ReversibleTopologyItem Kind Entity that is :
  //! 1 -> Edge
  //! 2 -> Path
  //! 3 -> Face
  //! 4 -> FaceBound
  //! 5 -> ClosedShell
  //! 6 -> OpenShell
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a Edge (Null if another type)
  Standard_EXPORT   Handle(StepShape_Edge) Edge()  const;
  
  //! returns Value as a Path (Null if another type)
  Standard_EXPORT   Handle(StepShape_Path) Path()  const;
  
  //! returns Value as a Face (Null if another type)
  Standard_EXPORT   Handle(StepShape_Face) Face()  const;
  
  //! returns Value as a FaceBound (Null if another type)
  Standard_EXPORT   Handle(StepShape_FaceBound) FaceBound()  const;
  
  //! returns Value as a ClosedShell (Null if another type)
  Standard_EXPORT   Handle(StepShape_ClosedShell) ClosedShell()  const;
  
  //! returns Value as a OpenShell (Null if another type)
  Standard_EXPORT   Handle(StepShape_OpenShell) OpenShell()  const;




protected:





private:





};







#endif // _StepShape_ReversibleTopologyItem_HeaderFile
