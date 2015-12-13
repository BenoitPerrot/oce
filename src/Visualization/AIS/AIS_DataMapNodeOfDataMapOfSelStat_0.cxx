// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <AIS_DataMapNodeOfDataMapOfSelStat.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <SelectMgr_SelectableObject.hxx>
#include <AIS_LocalStatus.hxx>
#include <TColStd_MapTransientHasher.hxx>
#include <AIS_DataMapOfSelStat.hxx>
#include <AIS_DataMapIteratorOfDataMapOfSelStat.hxx>

 


IMPLEMENT_STANDARD_TYPE(AIS_DataMapNodeOfDataMapOfSelStat)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AIS_DataMapNodeOfDataMapOfSelStat)


IMPLEMENT_DOWNCAST(AIS_DataMapNodeOfDataMapOfSelStat,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AIS_DataMapNodeOfDataMapOfSelStat)


#define TheKey Handle(SelectMgr_SelectableObject)
#define TheKey_hxx <SelectMgr_SelectableObject.hxx>
#define TheItem Handle(AIS_LocalStatus)
#define TheItem_hxx <AIS_LocalStatus.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode AIS_DataMapNodeOfDataMapOfSelStat
#define TCollection_DataMapNode_hxx <AIS_DataMapNodeOfDataMapOfSelStat.hxx>
#define TCollection_DataMapIterator AIS_DataMapIteratorOfDataMapOfSelStat
#define TCollection_DataMapIterator_hxx <AIS_DataMapIteratorOfDataMapOfSelStat.hxx>
#define Handle_TCollection_DataMapNode Handle_AIS_DataMapNodeOfDataMapOfSelStat
#define TCollection_DataMapNode_Type_() AIS_DataMapNodeOfDataMapOfSelStat_Type_()
#define TCollection_DataMap AIS_DataMapOfSelStat
#define TCollection_DataMap_hxx <AIS_DataMapOfSelStat.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

