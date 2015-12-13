// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslateEdge_HeaderFile
#define _StepToTopoDS_TranslateEdge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepToTopoDS_TranslateEdgeError.hxx>
#include <TopoDS_Shape.hxx>
#include <StepToTopoDS_Root.hxx>
#include <Handle_StepShape_Edge.hxx>
#include <Handle_StepGeom_Curve.hxx>
#include <Handle_StepShape_EdgeCurve.hxx>
#include <Handle_StepShape_Vertex.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_StepGeom_Pcurve.hxx>
#include <Handle_Geom_Surface.hxx>
class StdFail_NotDone;
class StepShape_Edge;
class StepToTopoDS_Tool;
class StepToTopoDS_NMTool;
class StepGeom_Curve;
class StepShape_EdgeCurve;
class StepShape_Vertex;
class TopoDS_Edge;
class TopoDS_Vertex;
class Geom2d_Curve;
class StepGeom_Pcurve;
class Geom_Surface;
class TopoDS_Shape;



class StepToTopoDS_TranslateEdge  : public StepToTopoDS_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_TranslateEdge();
  
  Standard_EXPORT StepToTopoDS_TranslateEdge(const Handle(StepShape_Edge)& E, StepToTopoDS_Tool& T, StepToTopoDS_NMTool& NMTool);
  
  Standard_EXPORT   void Init (const Handle(StepShape_Edge)& E, StepToTopoDS_Tool& T, StepToTopoDS_NMTool& NMTool) ;
  
  //! Warning! C3D is assumed to be a Curve 3D ...
  //! other cases to checked before calling this
  Standard_EXPORT   void MakeFromCurve3D (const Handle(StepGeom_Curve)& C3D, const Handle(StepShape_EdgeCurve)& EC, const Handle(StepShape_Vertex)& Vend, const Standard_Real preci, TopoDS_Edge& E, TopoDS_Vertex& V1, TopoDS_Vertex& V2, StepToTopoDS_Tool& T) ;
  
  Standard_EXPORT   Handle(Geom2d_Curve) MakePCurve (const Handle(StepGeom_Pcurve)& PCU, const Handle(Geom_Surface)& ConvSurf)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;
  
  Standard_EXPORT   StepToTopoDS_TranslateEdgeError Error()  const;




protected:





private:



  StepToTopoDS_TranslateEdgeError myError;
  TopoDS_Shape myResult;


};







#endif // _StepToTopoDS_TranslateEdge_HeaderFile
