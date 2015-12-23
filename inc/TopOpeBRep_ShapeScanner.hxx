// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_ShapeScanner_HeaderFile
#define _TopOpeBRep_ShapeScanner_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopOpeBRepTool_BoxSort.hxx>
#include <Foundation/TColStd/TColStd_ListIteratorOfListOfInteger.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TopoDS_Shape;
class TopOpeBRepTool_ShapeExplorer;
class TopOpeBRepTool_BoxSort;


//! Find, among the  subshapes SS of a reference shape
//! RS, the ones which 3D box interfers with the box of
//! a shape S (SS and S are of the same type).
class TopOpeBRep_ShapeScanner 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRep_ShapeScanner();
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void AddBoxesMakeCOB (const TopoDS_Shape& S, const TopAbs_ShapeEnum TS, const TopAbs_ShapeEnum TA = TopAbs_SHAPE) ;
  
  Standard_EXPORT   void Init (const TopoDS_Shape& E) ;
  
  Standard_EXPORT   void Init (TopOpeBRepTool_ShapeExplorer& X) ;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT  const  TopoDS_Shape& Current()  const;
  
  Standard_EXPORT  const  TopOpeBRepTool_BoxSort& BoxSort()  const;
  
  Standard_EXPORT   TopOpeBRepTool_BoxSort& ChangeBoxSort() ;
  
  Standard_EXPORT   Standard_Integer Index()  const;
  
  Standard_EXPORT   Standard_OStream& DumpCurrent (Standard_OStream& OS)  const;




protected:





private:



  TopOpeBRepTool_BoxSort myBoxSort;
  TColStd_ListIteratorOfListOfInteger myListIterator;


};







#endif // _TopOpeBRep_ShapeScanner_HeaderFile
