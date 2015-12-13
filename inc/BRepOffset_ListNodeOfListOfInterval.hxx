// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_ListNodeOfListOfInterval_HeaderFile
#define _BRepOffset_ListNodeOfListOfInterval_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepOffset_ListNodeOfListOfInterval.hxx>

#include <BRepOffset_Interval.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class BRepOffset_Interval;
class BRepOffset_ListOfInterval;
class BRepOffset_ListIteratorOfListOfInterval;



class BRepOffset_ListNodeOfListOfInterval : public TCollection_MapNode
{

public:

  
    BRepOffset_ListNodeOfListOfInterval(const BRepOffset_Interval& I, const TCollection_MapNodePtr& n);
  
      BRepOffset_Interval& Value()  const;




  DEFINE_STANDARD_RTTI(BRepOffset_ListNodeOfListOfInterval)

protected:




private: 


  BRepOffset_Interval myValue;


};

#define Item BRepOffset_Interval
#define Item_hxx <BRepOffset_Interval.hxx>
#define TCollection_ListNode BRepOffset_ListNodeOfListOfInterval
#define TCollection_ListNode_hxx <BRepOffset_ListNodeOfListOfInterval.hxx>
#define TCollection_ListIterator BRepOffset_ListIteratorOfListOfInterval
#define TCollection_ListIterator_hxx <BRepOffset_ListIteratorOfListOfInterval.hxx>
#define Handle_TCollection_ListNode Handle_BRepOffset_ListNodeOfListOfInterval
#define TCollection_ListNode_Type_() BRepOffset_ListNodeOfListOfInterval_Type_()
#define TCollection_List BRepOffset_ListOfInterval
#define TCollection_List_hxx <BRepOffset_ListOfInterval.hxx>

#include <TCollection_ListNode.lxx>

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




#endif // _BRepOffset_ListNodeOfListOfInterval_HeaderFile
