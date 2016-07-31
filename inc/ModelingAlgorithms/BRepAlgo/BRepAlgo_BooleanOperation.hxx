// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_BooleanOperation_HeaderFile
#define _BRepAlgo_BooleanOperation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/TopOpeBRepBuild/Handle_TopOpeBRepBuild_HBuilder.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
class TopOpeBRepBuild_HBuilder;
class TopoDS_Shape;


//! The abstract class BooleanOperation is the root
//! class of Boolean operations.
//! A BooleanOperation object stores the two shapes in
//! preparation for the Boolean operation specified in
//! one of the classes inheriting from this one. These include:
//! - Common
//! - Cut
//! - Fuse
//! - Section.
class BRepAlgo_BooleanOperation  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~BRepAlgo_BooleanOperation() {Delete();}
  
  Standard_EXPORT   void PerformDS() ;
  
  Standard_EXPORT   void Perform (const TopAbs_State St1, const TopAbs_State St2) ;
  
  Standard_EXPORT   Handle(TopOpeBRepBuild_HBuilder) Builder()  const;
  
  //! Returns the first shape involved in this Boolean operation.
  Standard_EXPORT  const  TopoDS_Shape& Shape1()  const;
  
  //! Returns the second shape involved in this Boolean operation.
  Standard_EXPORT  const  TopoDS_Shape& Shape2()  const;
  
  //! Returns the list  of shapes modified from the shape
  //! <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& S) ;
  
  Standard_EXPORT virtual   Standard_Boolean IsDeleted (const TopoDS_Shape& S) ;




protected:

  
  //! Prepares the operations for S1 and S2.
  Standard_EXPORT BRepAlgo_BooleanOperation(const TopoDS_Shape& S1, const TopoDS_Shape& S2);
  
  Standard_EXPORT   void BuilderCanWork (const Standard_Boolean B) ;
  
  Standard_EXPORT   Standard_Boolean BuilderCanWork()  const;
  
  Standard_EXPORT virtual   void InitParameters() ;


  Handle(TopOpeBRepBuild_HBuilder) myHBuilder;
  TopoDS_Shape myS1;
  TopoDS_Shape myS2;


private:



  TopTools_MapOfShape myMap;
  Standard_Boolean myBuilderCanWork;
  TopTools_DataMapOfShapeShape topToSew;


};







#endif // _BRepAlgo_BooleanOperation_HeaderFile
