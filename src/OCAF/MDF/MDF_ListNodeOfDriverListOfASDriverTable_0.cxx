// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <MDF_ListNodeOfDriverListOfASDriverTable.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <MDF_ASDriver.hxx>
#include <MDF_DriverListOfASDriverTable.hxx>
#include <MDF_ListIteratorOfDriverListOfASDriverTable.hxx>

 


IMPLEMENT_STANDARD_TYPE(MDF_ListNodeOfDriverListOfASDriverTable)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDF_ListNodeOfDriverListOfASDriverTable)


IMPLEMENT_DOWNCAST(MDF_ListNodeOfDriverListOfASDriverTable,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDF_ListNodeOfDriverListOfASDriverTable)


#define Item Handle(MDF_ASDriver)
#define Item_hxx <MDF_ASDriver.hxx>
#define TCollection_ListNode MDF_ListNodeOfDriverListOfASDriverTable
#define TCollection_ListNode_hxx <MDF_ListNodeOfDriverListOfASDriverTable.hxx>
#define TCollection_ListIterator MDF_ListIteratorOfDriverListOfASDriverTable
#define TCollection_ListIterator_hxx <MDF_ListIteratorOfDriverListOfASDriverTable.hxx>
#define Handle_TCollection_ListNode Handle_MDF_ListNodeOfDriverListOfASDriverTable
#define TCollection_ListNode_Type_() MDF_ListNodeOfDriverListOfASDriverTable_Type_()
#define TCollection_List MDF_DriverListOfASDriverTable
#define TCollection_List_hxx <MDF_DriverListOfASDriverTable.hxx>
#include <TCollection_ListNode.gxx>

