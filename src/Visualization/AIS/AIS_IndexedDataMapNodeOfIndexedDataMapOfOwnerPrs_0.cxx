// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <SelectMgr_EntityOwner.hxx>
#include <Prs3d_Presentation.hxx>
#include <TColStd_MapTransientHasher.hxx>
#include <AIS_IndexedDataMapOfOwnerPrs.hxx>

 


IMPLEMENT_STANDARD_TYPE(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)


IMPLEMENT_DOWNCAST(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)


#define TheKey Handle(SelectMgr_EntityOwner)
#define TheKey_hxx <SelectMgr_EntityOwner.hxx>
#define TheItem Handle(Prs3d_Presentation)
#define TheItem_hxx <Prs3d_Presentation.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedDataMapNode AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs
#define TCollection_IndexedDataMapNode_hxx <AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs
#define TCollection_IndexedDataMapNode_Type_() AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_Type_()
#define TCollection_IndexedDataMap AIS_IndexedDataMapOfOwnerPrs
#define TCollection_IndexedDataMap_hxx <AIS_IndexedDataMapOfOwnerPrs.hxx>
#include <TCollection_IndexedDataMapNode.gxx>

