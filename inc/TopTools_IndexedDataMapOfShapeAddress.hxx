// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_IndexedDataMapOfShapeAddress_HeaderFile
#define _TopTools_IndexedDataMapOfShapeAddress_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress;



class TopTools_IndexedDataMapOfShapeAddress  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_IndexedDataMapOfShapeAddress(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopTools_IndexedDataMapOfShapeAddress& Assign (const TopTools_IndexedDataMapOfShapeAddress& Other) ;
  TopTools_IndexedDataMapOfShapeAddress& operator = (const TopTools_IndexedDataMapOfShapeAddress& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_IndexedDataMapOfShapeAddress()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K, const Standard_Address& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K, const Standard_Address& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  Standard_Address& FindFromIndex (const Standard_Integer I)  const;
 const  Standard_Address& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   Standard_Address& ChangeFromIndex (const Standard_Integer I) ;
  Standard_Address& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  Standard_Address& FindFromKey (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address& ChangeFromKey (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopTools_IndexedDataMapOfShapeAddress(const TopTools_IndexedDataMapOfShapeAddress& Other);




};







#endif // _TopTools_IndexedDataMapOfShapeAddress_HeaderFile
