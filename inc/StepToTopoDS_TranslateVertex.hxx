// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslateVertex_HeaderFile
#define _StepToTopoDS_TranslateVertex_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepToTopoDS_TranslateVertexError.hxx>
#include <TopoDS_Shape.hxx>
#include <StepToTopoDS_Root.hxx>
#include <Handle_StepShape_Vertex.hxx>
class StdFail_NotDone;
class StepShape_Vertex;
class StepToTopoDS_Tool;
class StepToTopoDS_NMTool;
class TopoDS_Shape;



class StepToTopoDS_TranslateVertex  : public StepToTopoDS_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_TranslateVertex();
  
  Standard_EXPORT StepToTopoDS_TranslateVertex(const Handle(StepShape_Vertex)& V, StepToTopoDS_Tool& T, StepToTopoDS_NMTool& NMTool);
  
  Standard_EXPORT   void Init (const Handle(StepShape_Vertex)& V, StepToTopoDS_Tool& T, StepToTopoDS_NMTool& NMTool) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;
  
  Standard_EXPORT   StepToTopoDS_TranslateVertexError Error()  const;




protected:





private:



  StepToTopoDS_TranslateVertexError myError;
  TopoDS_Shape myResult;


};







#endif // _StepToTopoDS_TranslateVertex_HeaderFile
