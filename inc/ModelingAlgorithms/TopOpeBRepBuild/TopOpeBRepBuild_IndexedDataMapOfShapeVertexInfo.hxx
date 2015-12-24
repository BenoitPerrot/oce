// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo_HeaderFile
#define _TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepBuild_VertexInfo;
class TopTools_ShapeMapHasher;
class TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo;



class TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& Assign (const TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& Other) ;
  TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& operator = (const TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K, const TopOpeBRepBuild_VertexInfo& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K, const TopOpeBRepBuild_VertexInfo& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  TopOpeBRepBuild_VertexInfo& FindFromIndex (const Standard_Integer I)  const;
 const  TopOpeBRepBuild_VertexInfo& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   TopOpeBRepBuild_VertexInfo& ChangeFromIndex (const Standard_Integer I) ;
  TopOpeBRepBuild_VertexInfo& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopOpeBRepBuild_VertexInfo& FindFromKey (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   TopOpeBRepBuild_VertexInfo& ChangeFromKey (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo(const TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& Other);




};







#endif // _TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo_HeaderFile
