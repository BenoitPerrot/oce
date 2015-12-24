// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListNodeOfListOfLoop_HeaderFile
#define _TopOpeBRepBuild_ListNodeOfListOfLoop_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/Handle_TopOpeBRepBuild_ListNodeOfListOfLoop.hxx>

#include <ModelingAlgorithms/TopOpeBRepBuild/Handle_TopOpeBRepBuild_Loop.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopOpeBRepBuild_Loop;
class TopOpeBRepBuild_ListOfLoop;
class TopOpeBRepBuild_ListIteratorOfListOfLoop;



class TopOpeBRepBuild_ListNodeOfListOfLoop : public TCollection_MapNode
{

public:

  
    TopOpeBRepBuild_ListNodeOfListOfLoop(const Handle(TopOpeBRepBuild_Loop)& I, const TCollection_MapNodePtr& n);
  
      Handle(TopOpeBRepBuild_Loop)& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepBuild_ListNodeOfListOfLoop)

protected:




private: 


  Handle(TopOpeBRepBuild_Loop) myValue;


};

#define Item Handle(TopOpeBRepBuild_Loop)
#define Item_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_Loop.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfLoop
#define TCollection_ListNode_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ListNodeOfListOfLoop.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfLoop
#define TCollection_ListIterator_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfLoop
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfLoop_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfLoop
#define TCollection_List_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ListOfLoop.hxx>

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




#endif // _TopOpeBRepBuild_ListNodeOfListOfLoop_HeaderFile
