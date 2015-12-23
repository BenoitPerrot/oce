// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_DPrism_HeaderFile
#define _LocOpe_DPrism_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepFill_Evolved.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/TColGeom/TColGeom_SequenceOfCurve.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_Curve.hxx>
class Standard_NoSuchObject;
class Standard_DomainError;
class StdFail_NotDone;
class TopoDS_Face;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TColGeom_SequenceOfCurve;
class Geom_Curve;


//! Defines a  pipe  (near from   Pipe from BRepFill),
//! with modifications provided for the Pipe feature.
class LocOpe_DPrism 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LocOpe_DPrism(const TopoDS_Face& Spine, const Standard_Real Height1, const Standard_Real Height2, const Standard_Real Angle);
  
  Standard_EXPORT LocOpe_DPrism(const TopoDS_Face& Spine, const Standard_Real Height, const Standard_Real Angle);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Spine()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Profile()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FirstShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& LastShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Shapes (const TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void Curves (TColGeom_SequenceOfCurve& SCurves)  const;
  
  Standard_EXPORT   Handle(Geom_Curve) BarycCurve()  const;




protected:





private:

  
  Standard_EXPORT   void IntPerf() ;


  BRepFill_Evolved myDPrism;
  TopoDS_Shape myRes;
  TopoDS_Face mySpine;
  TopoDS_Wire myProfile;
  TopoDS_Edge myProfile1;
  TopoDS_Edge myProfile2;
  TopoDS_Edge myProfile3;
  Standard_Real myHeight;
  TopoDS_Shape myFirstShape;
  TopoDS_Shape myLastShape;
  TColGeom_SequenceOfCurve myCurvs;
  TopTools_DataMapOfShapeListOfShape myMap;


};







#endif // _LocOpe_DPrism_HeaderFile
