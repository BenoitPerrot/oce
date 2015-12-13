// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TDF_ListNodeOfAttributeDeltaList.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <TDF_AttributeDelta.hxx>
#include <TDF_AttributeDeltaList.hxx>
#include <TDF_ListIteratorOfAttributeDeltaList.hxx>

 


IMPLEMENT_STANDARD_TYPE(TDF_ListNodeOfAttributeDeltaList)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDF_ListNodeOfAttributeDeltaList)


IMPLEMENT_DOWNCAST(TDF_ListNodeOfAttributeDeltaList,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDF_ListNodeOfAttributeDeltaList)


#define Item Handle(TDF_AttributeDelta)
#define Item_hxx <TDF_AttributeDelta.hxx>
#define TCollection_ListNode TDF_ListNodeOfAttributeDeltaList
#define TCollection_ListNode_hxx <TDF_ListNodeOfAttributeDeltaList.hxx>
#define TCollection_ListIterator TDF_ListIteratorOfAttributeDeltaList
#define TCollection_ListIterator_hxx <TDF_ListIteratorOfAttributeDeltaList.hxx>
#define Handle_TCollection_ListNode Handle_TDF_ListNodeOfAttributeDeltaList
#define TCollection_ListNode_Type_() TDF_ListNodeOfAttributeDeltaList_Type_()
#define TCollection_List TDF_AttributeDeltaList
#define TCollection_List_hxx <TDF_AttributeDeltaList.hxx>
#include <Foundation/TCollection/TCollection_ListNode.gxx>

