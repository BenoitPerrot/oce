// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_IndexedDataMapOfSolidClassifier_HeaderFile
#define _TopOpeBRepTool_IndexedDataMapOfSolidClassifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class BRepClass3d_SolidClassifier;
class TopTools_ShapeMapHasher;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier;



class TopOpeBRepTool_IndexedDataMapOfSolidClassifier  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepTool_IndexedDataMapOfSolidClassifier(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepTool_IndexedDataMapOfSolidClassifier& Assign (const TopOpeBRepTool_IndexedDataMapOfSolidClassifier& Other) ;
  TopOpeBRepTool_IndexedDataMapOfSolidClassifier& operator = (const TopOpeBRepTool_IndexedDataMapOfSolidClassifier& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepTool_IndexedDataMapOfSolidClassifier()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K, const BRepClass3d_SolidClassifier& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K, const BRepClass3d_SolidClassifier& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  BRepClass3d_SolidClassifier& FindFromIndex (const Standard_Integer I)  const;
 const  BRepClass3d_SolidClassifier& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   BRepClass3d_SolidClassifier& ChangeFromIndex (const Standard_Integer I) ;
  BRepClass3d_SolidClassifier& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  BRepClass3d_SolidClassifier& FindFromKey (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   BRepClass3d_SolidClassifier& ChangeFromKey (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepTool_IndexedDataMapOfSolidClassifier(const TopOpeBRepTool_IndexedDataMapOfSolidClassifier& Other);




};







#endif // _TopOpeBRepTool_IndexedDataMapOfSolidClassifier_HeaderFile
