// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_IndexedMapOfOwner_HeaderFile
#define _SelectMgr_IndexedMapOfOwner_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_EntityOwner.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_IndexedMapNodeOfIndexedMapOfOwner.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class SelectMgr_EntityOwner;
class TColStd_MapTransientHasher;
class SelectMgr_IndexedMapNodeOfIndexedMapOfOwner;



class SelectMgr_IndexedMapOfOwner  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT SelectMgr_IndexedMapOfOwner(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT SelectMgr_IndexedMapOfOwner(const SelectMgr_IndexedMapOfOwner& Other);
  
  Standard_EXPORT   SelectMgr_IndexedMapOfOwner& Assign (const SelectMgr_IndexedMapOfOwner& Other) ;
  SelectMgr_IndexedMapOfOwner& operator = (const SelectMgr_IndexedMapOfOwner& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~SelectMgr_IndexedMapOfOwner()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const Handle(SelectMgr_EntityOwner)& K) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const Handle(SelectMgr_EntityOwner)& K) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(SelectMgr_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& FindKey (const Standard_Integer I)  const;
 const  Handle(SelectMgr_EntityOwner)& operator () (const Standard_Integer I)  const
{
  return FindKey(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const Handle(SelectMgr_EntityOwner)& K)  const;




protected:





private:





};







#endif // _SelectMgr_IndexedMapOfOwner_HeaderFile
