// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <SelectMgr_IndexedMapNodeOfIndexedMapOfOwner.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <SelectMgr_EntityOwner.hxx>
#include <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#include <SelectMgr_IndexedMapOfOwner.hxx>

 


IMPLEMENT_STANDARD_TYPE(SelectMgr_IndexedMapNodeOfIndexedMapOfOwner)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(SelectMgr_IndexedMapNodeOfIndexedMapOfOwner)


IMPLEMENT_DOWNCAST(SelectMgr_IndexedMapNodeOfIndexedMapOfOwner,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(SelectMgr_IndexedMapNodeOfIndexedMapOfOwner)


#define TheKey Handle(SelectMgr_EntityOwner)
#define TheKey_hxx <SelectMgr_EntityOwner.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedMapNode SelectMgr_IndexedMapNodeOfIndexedMapOfOwner
#define TCollection_IndexedMapNode_hxx <SelectMgr_IndexedMapNodeOfIndexedMapOfOwner.hxx>
#define Handle_TCollection_IndexedMapNode Handle_SelectMgr_IndexedMapNodeOfIndexedMapOfOwner
#define TCollection_IndexedMapNode_Type_() SelectMgr_IndexedMapNodeOfIndexedMapOfOwner_Type_()
#define TCollection_IndexedMap SelectMgr_IndexedMapOfOwner
#define TCollection_IndexedMap_hxx <SelectMgr_IndexedMapOfOwner.hxx>
#include <Foundation/TCollection/TCollection_IndexedMapNode.gxx>

