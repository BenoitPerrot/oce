// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_IndexedDataMapOfOwnerPrs_HeaderFile
#define _StdSelect_IndexedDataMapOfOwnerPrs_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Handle_StdSelect_Prs.hxx>
#include <Handle_StdSelect_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class SelectBasics_EntityOwner;
class StdSelect_Prs;
class TColStd_MapTransientHasher;
class StdSelect_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;



class StdSelect_IndexedDataMapOfOwnerPrs  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StdSelect_IndexedDataMapOfOwnerPrs(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   StdSelect_IndexedDataMapOfOwnerPrs& Assign (const StdSelect_IndexedDataMapOfOwnerPrs& Other) ;
  StdSelect_IndexedDataMapOfOwnerPrs& operator = (const StdSelect_IndexedDataMapOfOwnerPrs& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~StdSelect_IndexedDataMapOfOwnerPrs()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const Handle(SelectBasics_EntityOwner)& K, const Handle(StdSelect_Prs)& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const Handle(SelectBasics_EntityOwner)& K, const Handle(StdSelect_Prs)& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  Handle(SelectBasics_EntityOwner)& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  Handle(StdSelect_Prs)& FindFromIndex (const Standard_Integer I)  const;
 const  Handle(StdSelect_Prs)& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   Handle(StdSelect_Prs)& ChangeFromIndex (const Standard_Integer I) ;
  Handle(StdSelect_Prs)& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT  const  Handle(StdSelect_Prs)& FindFromKey (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT   Handle(StdSelect_Prs)& ChangeFromKey (const Handle(SelectBasics_EntityOwner)& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const Handle(SelectBasics_EntityOwner)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const Handle(SelectBasics_EntityOwner)& K) ;




protected:





private:

  
  Standard_EXPORT StdSelect_IndexedDataMapOfOwnerPrs(const StdSelect_IndexedDataMapOfOwnerPrs& Other);




};







#endif // _StdSelect_IndexedDataMapOfOwnerPrs_HeaderFile
