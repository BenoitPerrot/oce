// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_Builder_HeaderFile
#define _StepToTopoDS_Builder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepToTopoDS_BuilderError.hxx>
#include <TopoDS_Shape.hxx>
#include <StepToTopoDS_Root.hxx>
#include <Handle_StepShape_ManifoldSolidBrep.hxx>
#include <Handle_Transfer_TransientProcess.hxx>
#include <Handle_StepShape_BrepWithVoids.hxx>
#include <Handle_StepShape_FacetedBrep.hxx>
#include <Handle_StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <Handle_StepShape_ShellBasedSurfaceModel.hxx>
#include <Handle_StepShape_GeometricSet.hxx>
#include <Handle_StepShape_EdgeBasedWireframeModel.hxx>
#include <Handle_StepShape_FaceBasedSurfaceModel.hxx>
#include <Handle_Transfer_ActorOfTransientProcess.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class StdFail_NotDone;
class StepShape_ManifoldSolidBrep;
class Transfer_TransientProcess;
class StepShape_BrepWithVoids;
class StepShape_FacetedBrep;
class StepShape_FacetedBrepAndBrepWithVoids;
class StepShape_ShellBasedSurfaceModel;
class StepToTopoDS_NMTool;
class StepShape_GeometricSet;
class StepShape_EdgeBasedWireframeModel;
class StepShape_FaceBasedSurfaceModel;
class Transfer_ActorOfTransientProcess;
class TopoDS_Shape;



class StepToTopoDS_Builder  : public StepToTopoDS_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_Builder();
  
  Standard_EXPORT StepToTopoDS_Builder(const Handle(StepShape_ManifoldSolidBrep)& S, const Handle(Transfer_TransientProcess)& TP);
  
  Standard_EXPORT StepToTopoDS_Builder(const Handle(StepShape_BrepWithVoids)& S, const Handle(Transfer_TransientProcess)& TP);
  
  Standard_EXPORT StepToTopoDS_Builder(const Handle(StepShape_FacetedBrep)& S, const Handle(Transfer_TransientProcess)& TP);
  
  Standard_EXPORT StepToTopoDS_Builder(const Handle(StepShape_FacetedBrepAndBrepWithVoids)& S, const Handle(Transfer_TransientProcess)& TP);
  
  Standard_EXPORT StepToTopoDS_Builder(const Handle(StepShape_ShellBasedSurfaceModel)& S, const Handle(Transfer_TransientProcess)& TP, StepToTopoDS_NMTool& NMTool);
  
  Standard_EXPORT StepToTopoDS_Builder(const Handle(StepShape_GeometricSet)& S, const Handle(Transfer_TransientProcess)& TP);
  
  Standard_EXPORT   void Init (const Handle(StepShape_ManifoldSolidBrep)& S, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_BrepWithVoids)& S, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_FacetedBrep)& S, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_FacetedBrepAndBrepWithVoids)& S, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_ShellBasedSurfaceModel)& S, const Handle(Transfer_TransientProcess)& TP, StepToTopoDS_NMTool& NMTool) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_EdgeBasedWireframeModel)& S, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_FaceBasedSurfaceModel)& S, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT   void Init (const Handle(StepShape_GeometricSet)& S, const Handle(Transfer_TransientProcess)& TP, const Handle(Transfer_ActorOfTransientProcess)& RA = NULL, const Standard_Boolean isManifold = Standard_False) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;
  
  Standard_EXPORT   StepToTopoDS_BuilderError Error()  const;




protected:





private:



  StepToTopoDS_BuilderError myError;
  TopoDS_Shape myResult;


};







#endif // _StepToTopoDS_Builder_HeaderFile
