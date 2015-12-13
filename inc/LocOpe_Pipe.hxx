// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_Pipe_HeaderFile
#define _LocOpe_Pipe_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepFill_Pipe.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TColGeom_SequenceOfCurve.hxx>
#include <Handle_Geom_Curve.hxx>
class Standard_NoSuchObject;
class Standard_DomainError;
class TopoDS_Wire;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TColGeom_SequenceOfCurve;
class TColgp_SequenceOfPnt;
class Geom_Curve;


//! Defines a  pipe  (near from   Pipe from BRepFill),
//! with modifications provided for the Pipe feature.
class LocOpe_Pipe 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LocOpe_Pipe(const TopoDS_Wire& Spine, const TopoDS_Shape& Profile);
  
     const  TopoDS_Shape& Spine()  const;
  
     const  TopoDS_Shape& Profile()  const;
  
     const  TopoDS_Shape& FirstShape()  const;
  
     const  TopoDS_Shape& LastShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Shapes (const TopoDS_Shape& S) ;
  
  Standard_EXPORT  const  TColGeom_SequenceOfCurve& Curves (const TColgp_SequenceOfPnt& Spt) ;
  
  Standard_EXPORT   Handle(Geom_Curve) BarycCurve() ;




protected:





private:



  BRepFill_Pipe myPipe;
  TopTools_DataMapOfShapeListOfShape myMap;
  TopoDS_Shape myRes;
  TopTools_ListOfShape myGShap;
  TColGeom_SequenceOfCurve myCrvs;
  TopoDS_Shape myFirstShape;
  TopoDS_Shape myLastShape;


};


#include <LocOpe_Pipe.lxx>





#endif // _LocOpe_Pipe_HeaderFile
