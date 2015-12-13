// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_ListNodeOfIDList_HeaderFile
#define _TDF_ListNodeOfIDList_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDF_ListNodeOfIDList.hxx>

#include <Foundation/Standard/Standard_GUID.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Standard_GUID;
class TDF_IDList;
class TDF_ListIteratorOfIDList;



class TDF_ListNodeOfIDList : public TCollection_MapNode
{

public:

  
    TDF_ListNodeOfIDList(const Standard_GUID& I, const TCollection_MapNodePtr& n);
  
      Standard_GUID& Value()  const;




  DEFINE_STANDARD_RTTI(TDF_ListNodeOfIDList)

protected:




private: 


  Standard_GUID myValue;


};

#define Item Standard_GUID
#define Item_hxx <Foundation/Standard/Standard_GUID.hxx>
#define TCollection_ListNode TDF_ListNodeOfIDList
#define TCollection_ListNode_hxx <TDF_ListNodeOfIDList.hxx>
#define TCollection_ListIterator TDF_ListIteratorOfIDList
#define TCollection_ListIterator_hxx <TDF_ListIteratorOfIDList.hxx>
#define Handle_TCollection_ListNode Handle_TDF_ListNodeOfIDList
#define TCollection_ListNode_Type_() TDF_ListNodeOfIDList_Type_()
#define TCollection_List TDF_IDList
#define TCollection_List_hxx <TDF_IDList.hxx>

#include <Foundation/TCollection/TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TDF_ListNodeOfIDList_HeaderFile
