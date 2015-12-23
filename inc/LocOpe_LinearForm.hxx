// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_LinearForm_HeaderFile
#define _LocOpe_LinearForm_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
class Standard_NoSuchObject;
class StdFail_NotDone;
class TopoDS_Shape;
class gp_Vec;
class gp_Pnt;
class TopTools_ListOfShape;


//! Defines a linear form (using Prism from BRepSweep)
//! with modifications provided for the LinearForm feature.
class LocOpe_LinearForm 
{
public:

  DEFINE_STANDARD_ALLOC

  
    LocOpe_LinearForm();
  
    LocOpe_LinearForm(const TopoDS_Shape& Base, const gp_Vec& V, const gp_Pnt& Pnt1, const gp_Pnt& Pnt2);
  
    LocOpe_LinearForm(const TopoDS_Shape& Base, const gp_Vec& V, const gp_Vec& Vectra, const gp_Pnt& Pnt1, const gp_Pnt& Pnt2);
  
  Standard_EXPORT   void Perform (const TopoDS_Shape& Base, const gp_Vec& V, const gp_Pnt& Pnt1, const gp_Pnt& Pnt2) ;
  
  Standard_EXPORT   void Perform (const TopoDS_Shape& Base, const gp_Vec& V, const gp_Vec& Vectra, const gp_Pnt& Pnt1, const gp_Pnt& Pnt2) ;
  
  Standard_EXPORT  const  TopoDS_Shape& FirstShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& LastShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Shapes (const TopoDS_Shape& S)  const;




protected:





private:

  
  Standard_EXPORT   void IntPerf() ;


  TopoDS_Shape myBase;
  gp_Vec myVec;
  gp_Vec myTra;
  Standard_Boolean myDone;
  Standard_Boolean myIsTrans;
  TopoDS_Shape myRes;
  TopoDS_Shape myFirstShape;
  TopoDS_Shape myLastShape;
  TopTools_DataMapOfShapeListOfShape myMap;
  gp_Pnt myPnt1;
  gp_Pnt myPnt2;


};


#include <LocOpe_LinearForm.lxx>





#endif // _LocOpe_LinearForm_HeaderFile
