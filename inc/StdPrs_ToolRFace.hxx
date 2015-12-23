// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_ToolRFace_HeaderFile
#define _StdPrs_ToolRFace_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Face.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <Geometry/Geom2dAdaptor/Geom2dAdaptor_Curve.hxx>
#include <Handle_BRepAdaptor_HSurface.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_Curve2dPtr.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
class BRepAdaptor_HSurface;



class StdPrs_ToolRFace 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StdPrs_ToolRFace();
  
  Standard_EXPORT StdPrs_ToolRFace(const Handle(BRepAdaptor_HSurface)& aSurface);
  
  Standard_EXPORT   Standard_Boolean IsOriented()  const;
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Adaptor2d_Curve2dPtr Value()  const;
  
  Standard_EXPORT   TopAbs_Orientation Orientation()  const;




protected:





private:



  TopoDS_Face myFace;
  TopExp_Explorer myExplorer;
  Geom2dAdaptor_Curve DummyCurve;


};







#endif // _StdPrs_ToolRFace_HeaderFile
