// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfIntegerOwner_HeaderFile
#define _MeshVS_DataMapOfIntegerOwner_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_EntityOwner.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_DataMapNodeOfDataMapOfIntegerOwner.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class SelectMgr_EntityOwner;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapNodeOfDataMapOfIntegerOwner;
class MeshVS_DataMapIteratorOfDataMapOfIntegerOwner;



class MeshVS_DataMapOfIntegerOwner  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapOfIntegerOwner(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MeshVS_DataMapOfIntegerOwner& Assign (const MeshVS_DataMapOfIntegerOwner& Other) ;
  MeshVS_DataMapOfIntegerOwner& operator = (const MeshVS_DataMapOfIntegerOwner& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MeshVS_DataMapOfIntegerOwner()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Handle(SelectMgr_EntityOwner)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& Find (const Standard_Integer& K)  const;
 const  Handle(SelectMgr_EntityOwner)& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(SelectMgr_EntityOwner)& ChangeFind (const Standard_Integer& K) ;
  Handle(SelectMgr_EntityOwner)& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT MeshVS_DataMapOfIntegerOwner(const MeshVS_DataMapOfIntegerOwner& Other);




};







#endif // _MeshVS_DataMapOfIntegerOwner_HeaderFile
