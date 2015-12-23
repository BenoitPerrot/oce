// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslateEdgeLoop_HeaderFile
#define _StepToTopoDS_TranslateEdgeLoop_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepToTopoDS_TranslateEdgeLoopError.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <StepToTopoDS_Root.hxx>
#include <Handle_StepShape_FaceBound.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_StepGeom_Surface.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class StdFail_NotDone;
class StepShape_FaceBound;
class TopoDS_Face;
class Geom_Surface;
class StepGeom_Surface;
class StepToTopoDS_Tool;
class StepToTopoDS_NMTool;
class TopoDS_Shape;



class StepToTopoDS_TranslateEdgeLoop  : public StepToTopoDS_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_TranslateEdgeLoop();
  
  Standard_EXPORT StepToTopoDS_TranslateEdgeLoop(const Handle(StepShape_FaceBound)& FB, const TopoDS_Face& F, const Handle(Geom_Surface)& S, const Handle(StepGeom_Surface)& SS, const Standard_Boolean ss, StepToTopoDS_Tool& T, StepToTopoDS_NMTool& NMTool);
  
  Standard_EXPORT   void Init (const Handle(StepShape_FaceBound)& FB, const TopoDS_Face& F, const Handle(Geom_Surface)& S, const Handle(StepGeom_Surface)& SS, const Standard_Boolean ss, StepToTopoDS_Tool& T, StepToTopoDS_NMTool& NMTool) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;
  
  Standard_EXPORT   StepToTopoDS_TranslateEdgeLoopError Error()  const;




protected:





private:



  StepToTopoDS_TranslateEdgeLoopError myError;
  TopoDS_Shape myResult;


};







#endif // _StepToTopoDS_TranslateEdgeLoop_HeaderFile
