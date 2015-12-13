// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <DBRep_ListNodeOfListOfFace.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <DBRep_Face.hxx>
#include <DBRep_ListOfFace.hxx>
#include <DBRep_ListIteratorOfListOfFace.hxx>

 


IMPLEMENT_STANDARD_TYPE(DBRep_ListNodeOfListOfFace)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DBRep_ListNodeOfListOfFace)


IMPLEMENT_DOWNCAST(DBRep_ListNodeOfListOfFace,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DBRep_ListNodeOfListOfFace)


#define Item Handle(DBRep_Face)
#define Item_hxx <DBRep_Face.hxx>
#define TCollection_ListNode DBRep_ListNodeOfListOfFace
#define TCollection_ListNode_hxx <DBRep_ListNodeOfListOfFace.hxx>
#define TCollection_ListIterator DBRep_ListIteratorOfListOfFace
#define TCollection_ListIterator_hxx <DBRep_ListIteratorOfListOfFace.hxx>
#define Handle_TCollection_ListNode Handle_DBRep_ListNodeOfListOfFace
#define TCollection_ListNode_Type_() DBRep_ListNodeOfListOfFace_Type_()
#define TCollection_List DBRep_ListOfFace
#define TCollection_List_hxx <DBRep_ListOfFace.hxx>
#include <TCollection_ListNode.gxx>

