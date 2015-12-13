// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_ListNodeOfListOfInterference_HeaderFile
#define _TopOpeBRepDS_ListNodeOfListOfInterference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_ListNodeOfListOfInterference.hxx>

#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_ListOfInterference;
class TopOpeBRepDS_ListIteratorOfListOfInterference;



class TopOpeBRepDS_ListNodeOfListOfInterference : public TCollection_MapNode
{

public:

  
    TopOpeBRepDS_ListNodeOfListOfInterference(const Handle(TopOpeBRepDS_Interference)& I, const TCollection_MapNodePtr& n);
  
      Handle(TopOpeBRepDS_Interference)& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_ListNodeOfListOfInterference)

protected:




private: 


  Handle(TopOpeBRepDS_Interference) myValue;


};

#define Item Handle(TopOpeBRepDS_Interference)
#define Item_hxx <TopOpeBRepDS_Interference.hxx>
#define TCollection_ListNode TopOpeBRepDS_ListNodeOfListOfInterference
#define TCollection_ListNode_hxx <TopOpeBRepDS_ListNodeOfListOfInterference.hxx>
#define TCollection_ListIterator TopOpeBRepDS_ListIteratorOfListOfInterference
#define TCollection_ListIterator_hxx <TopOpeBRepDS_ListIteratorOfListOfInterference.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepDS_ListNodeOfListOfInterference
#define TCollection_ListNode_Type_() TopOpeBRepDS_ListNodeOfListOfInterference_Type_()
#define TCollection_List TopOpeBRepDS_ListOfInterference
#define TCollection_List_hxx <TopOpeBRepDS_ListOfInterference.hxx>

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




#endif // _TopOpeBRepDS_ListNodeOfListOfInterference_HeaderFile
