// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_DataMapOfShapeMapOfShape_HeaderFile
#define _BRepOffset_DataMapOfShapeMapOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/BRepOffset/Handle_BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_MapOfShape;
class TopTools_ShapeMapHasher;
class BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape;
class BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape;



class BRepOffset_DataMapOfShapeMapOfShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepOffset_DataMapOfShapeMapOfShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   BRepOffset_DataMapOfShapeMapOfShape& Assign (const BRepOffset_DataMapOfShapeMapOfShape& Other) ;
  BRepOffset_DataMapOfShapeMapOfShape& operator = (const BRepOffset_DataMapOfShapeMapOfShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BRepOffset_DataMapOfShapeMapOfShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const TopTools_MapOfShape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  TopTools_MapOfShape& Find (const TopoDS_Shape& K)  const;
 const  TopTools_MapOfShape& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopTools_MapOfShape& ChangeFind (const TopoDS_Shape& K) ;
  TopTools_MapOfShape& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT BRepOffset_DataMapOfShapeMapOfShape(const BRepOffset_DataMapOfShapeMapOfShape& Other);




};







#endif // _BRepOffset_DataMapOfShapeMapOfShape_HeaderFile
