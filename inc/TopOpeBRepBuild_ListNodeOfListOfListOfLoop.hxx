// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListNodeOfListOfListOfLoop_HeaderFile
#define _TopOpeBRepBuild_ListNodeOfListOfListOfLoop_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepBuild_ListNodeOfListOfListOfLoop.hxx>

#include <TopOpeBRepBuild_ListOfLoop.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopOpeBRepBuild_ListOfLoop;
class TopOpeBRepBuild_ListOfListOfLoop;
class TopOpeBRepBuild_ListIteratorOfListOfListOfLoop;



class TopOpeBRepBuild_ListNodeOfListOfListOfLoop : public TCollection_MapNode
{

public:

  
    TopOpeBRepBuild_ListNodeOfListOfListOfLoop(const TopOpeBRepBuild_ListOfLoop& I, const TCollection_MapNodePtr& n);
  
      TopOpeBRepBuild_ListOfLoop& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepBuild_ListNodeOfListOfListOfLoop)

protected:




private: 


  TopOpeBRepBuild_ListOfLoop myValue;


};

#define Item TopOpeBRepBuild_ListOfLoop
#define Item_hxx <TopOpeBRepBuild_ListOfLoop.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_hxx <TopOpeBRepBuild_ListNodeOfListOfListOfLoop.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfListOfLoop
#define TCollection_ListIterator_hxx <TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfListOfLoop_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfListOfLoop
#define TCollection_List_hxx <TopOpeBRepBuild_ListOfListOfLoop.hxx>

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




#endif // _TopOpeBRepBuild_ListNodeOfListOfListOfLoop_HeaderFile
