// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_ListNodeOfListOfBPoint_HeaderFile
#define _HLRAlgo_ListNodeOfListOfBPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_ListNodeOfListOfBPoint.hxx>

#include <HLRAlgo_BiPoint.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class HLRAlgo_BiPoint;
class HLRAlgo_ListOfBPoint;
class HLRAlgo_ListIteratorOfListOfBPoint;



class HLRAlgo_ListNodeOfListOfBPoint : public TCollection_MapNode
{

public:

  
    HLRAlgo_ListNodeOfListOfBPoint(const HLRAlgo_BiPoint& I, const TCollection_MapNodePtr& n);
  
      HLRAlgo_BiPoint& Value()  const;




  DEFINE_STANDARD_RTTI(HLRAlgo_ListNodeOfListOfBPoint)

protected:




private: 


  HLRAlgo_BiPoint myValue;


};

#define Item HLRAlgo_BiPoint
#define Item_hxx <HLRAlgo_BiPoint.hxx>
#define TCollection_ListNode HLRAlgo_ListNodeOfListOfBPoint
#define TCollection_ListNode_hxx <HLRAlgo_ListNodeOfListOfBPoint.hxx>
#define TCollection_ListIterator HLRAlgo_ListIteratorOfListOfBPoint
#define TCollection_ListIterator_hxx <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#define Handle_TCollection_ListNode Handle_HLRAlgo_ListNodeOfListOfBPoint
#define TCollection_ListNode_Type_() HLRAlgo_ListNodeOfListOfBPoint_Type_()
#define TCollection_List HLRAlgo_ListOfBPoint
#define TCollection_List_hxx <HLRAlgo_ListOfBPoint.hxx>

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




#endif // _HLRAlgo_ListNodeOfListOfBPoint_HeaderFile
