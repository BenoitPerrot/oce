// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslatePolyLoop_HeaderFile
#define _StepToTopoDS_TranslatePolyLoop_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepToTopoDS_TranslatePolyLoopError.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <StepToTopoDS_Root.hxx>
#include <Handle_StepShape_PolyLoop.hxx>
#include <Handle_Geom_Surface.hxx>
class StdFail_NotDone;
class StepShape_PolyLoop;
class StepToTopoDS_Tool;
class Geom_Surface;
class TopoDS_Face;
class TopoDS_Shape;



class StepToTopoDS_TranslatePolyLoop  : public StepToTopoDS_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_TranslatePolyLoop();
  
  Standard_EXPORT StepToTopoDS_TranslatePolyLoop(const Handle(StepShape_PolyLoop)& PL, StepToTopoDS_Tool& T, const Handle(Geom_Surface)& S, const TopoDS_Face& F);
  
  Standard_EXPORT   void Init (const Handle(StepShape_PolyLoop)& PL, StepToTopoDS_Tool& T, const Handle(Geom_Surface)& S, const TopoDS_Face& F) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;
  
  Standard_EXPORT   StepToTopoDS_TranslatePolyLoopError Error()  const;




protected:





private:



  StepToTopoDS_TranslatePolyLoopError myError;
  TopoDS_Shape myResult;


};







#endif // _StepToTopoDS_TranslatePolyLoop_HeaderFile
