// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_LoaderParent_HeaderFile
#define _QANewBRepNaming_LoaderParent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopoDS_Shape;
class TNaming_Builder;
class TopTools_DataMapOfShapeShape;



class QANewBRepNaming_LoaderParent 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void LoadGeneratedDangleShapes (const TopoDS_Shape& ShapeIn, const TopAbs_ShapeEnum GeneratedFrom, TNaming_Builder& GenBuider) ;
  
  Standard_EXPORT static   Standard_Boolean GetDangleShapes (const TopoDS_Shape& ShapeIn, const TopAbs_ShapeEnum GeneratedFrom, TopTools_DataMapOfShapeShape& Dangles) ;




protected:





private:





};







#endif // _QANewBRepNaming_LoaderParent_HeaderFile
