// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_DataMapOfShapeOffset_HeaderFile
#define _BRepOffset_DataMapOfShapeOffset_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_BRepOffset_DataMapNodeOfDataMapOfShapeOffset.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class BRepOffset_Offset;
class TopTools_ShapeMapHasher;
class BRepOffset_DataMapNodeOfDataMapOfShapeOffset;
class BRepOffset_DataMapIteratorOfDataMapOfShapeOffset;



class BRepOffset_DataMapOfShapeOffset  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepOffset_DataMapOfShapeOffset(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   BRepOffset_DataMapOfShapeOffset& Assign (const BRepOffset_DataMapOfShapeOffset& Other) ;
  BRepOffset_DataMapOfShapeOffset& operator = (const BRepOffset_DataMapOfShapeOffset& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BRepOffset_DataMapOfShapeOffset()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const BRepOffset_Offset& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  BRepOffset_Offset& Find (const TopoDS_Shape& K)  const;
 const  BRepOffset_Offset& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   BRepOffset_Offset& ChangeFind (const TopoDS_Shape& K) ;
  BRepOffset_Offset& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT BRepOffset_DataMapOfShapeOffset(const BRepOffset_DataMapOfShapeOffset& Other);




};







#endif // _BRepOffset_DataMapOfShapeOffset_HeaderFile
