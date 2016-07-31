// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_Map_HeaderFile
#define _ChFiDS_Map_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TopoDS_Shape;


//! Encapsulation of IndexedDataMapOfShapeListOfShape.
class ChFiDS_Map 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Create an empty Map
  Standard_EXPORT ChFiDS_Map();
  
  //! Fills the map with the subshapes of type T1 as keys
  //! and the list of ancestors  of type T2 as items.
  Standard_EXPORT   void Fill (const TopoDS_Shape& S, const TopAbs_ShapeEnum T1, const TopAbs_ShapeEnum T2) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& S)  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& FindFromKey (const TopoDS_Shape& S)  const;
 const  TopTools_ListOfShape& operator() (const TopoDS_Shape& S)  const
{
  return FindFromKey(S);
}
  
  Standard_EXPORT  const  TopTools_ListOfShape& FindFromIndex (const Standard_Integer I)  const;
 const  TopTools_ListOfShape& operator() (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}




protected:





private:



  TopTools_IndexedDataMapOfShapeListOfShape myMap;


};







#endif // _ChFiDS_Map_HeaderFile
