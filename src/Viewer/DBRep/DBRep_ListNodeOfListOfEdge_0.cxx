// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Viewer/DBRep/DBRep_ListNodeOfListOfEdge.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Viewer/DBRep/DBRep_Edge.hxx>
#include <Viewer/DBRep/DBRep_ListOfEdge.hxx>
#include <Viewer/DBRep/DBRep_ListIteratorOfListOfEdge.hxx>

 


IMPLEMENT_STANDARD_TYPE(DBRep_ListNodeOfListOfEdge)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DBRep_ListNodeOfListOfEdge)


IMPLEMENT_DOWNCAST(DBRep_ListNodeOfListOfEdge,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DBRep_ListNodeOfListOfEdge)


#define Item Handle(DBRep_Edge)
#define Item_hxx <Viewer/DBRep/DBRep_Edge.hxx>
#define TCollection_ListNode DBRep_ListNodeOfListOfEdge
#define TCollection_ListNode_hxx <Viewer/DBRep/DBRep_ListNodeOfListOfEdge.hxx>
#define TCollection_ListIterator DBRep_ListIteratorOfListOfEdge
#define TCollection_ListIterator_hxx <Viewer/DBRep/DBRep_ListIteratorOfListOfEdge.hxx>
#define Handle_TCollection_ListNode Handle_DBRep_ListNodeOfListOfEdge
#define TCollection_ListNode_Type_() DBRep_ListNodeOfListOfEdge_Type_()
#define TCollection_List DBRep_ListOfEdge
#define TCollection_List_hxx <Viewer/DBRep/DBRep_ListOfEdge.hxx>
#include <Foundation/TCollection/TCollection_ListNode.gxx>

