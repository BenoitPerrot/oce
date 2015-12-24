// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_IndexedDataMapOfOwnerCriterion_HeaderFile
#define _SelectMgr_IndexedDataMapOfOwnerCriterion_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Visualization/SelectBasics/Handle_SelectBasics_EntityOwner.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class SelectBasics_EntityOwner;
class SelectMgr_SortCriterion;
class TColStd_MapTransientHasher;
class SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion;



class SelectMgr_IndexedDataMapOfOwnerCriterion  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT SelectMgr_IndexedDataMapOfOwnerCriterion(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   SelectMgr_IndexedDataMapOfOwnerCriterion& Assign (const SelectMgr_IndexedDataMapOfOwnerCriterion& Other) ;
  SelectMgr_IndexedDataMapOfOwnerCriterion& operator = (const SelectMgr_IndexedDataMapOfOwnerCriterion& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~SelectMgr_IndexedDataMapOfOwnerCriterion()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const Handle(SelectBasics_EntityOwner)& K, const SelectMgr_SortCriterion& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const Handle(SelectBasics_EntityOwner)& K, const SelectMgr_SortCriterion& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  Handle(SelectBasics_EntityOwner)& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  SelectMgr_SortCriterion& FindFromIndex (const Standard_Integer I)  const;
 const  SelectMgr_SortCriterion& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   SelectMgr_SortCriterion& ChangeFromIndex (const Standard_Integer I) ;
  SelectMgr_SortCriterion& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  SelectMgr_SortCriterion& FindFromKey (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT   SelectMgr_SortCriterion& ChangeFromKey (const Handle(SelectBasics_EntityOwner)& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const Handle(SelectBasics_EntityOwner)& K) ;




protected:





private:

  
  Standard_EXPORT SelectMgr_IndexedDataMapOfOwnerCriterion(const SelectMgr_IndexedDataMapOfOwnerCriterion& Other);




};







#endif // _SelectMgr_IndexedDataMapOfOwnerCriterion_HeaderFile
