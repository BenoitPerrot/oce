// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListNodeOfListOfPave_HeaderFile
#define _TopOpeBRepBuild_ListNodeOfListOfPave_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/Handle_TopOpeBRepBuild_ListNodeOfListOfPave.hxx>

#include <ModelingAlgorithms/TopOpeBRepBuild/Handle_TopOpeBRepBuild_Pave.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopOpeBRepBuild_Pave;
class TopOpeBRepBuild_ListOfPave;
class TopOpeBRepBuild_ListIteratorOfListOfPave;



class TopOpeBRepBuild_ListNodeOfListOfPave : public TCollection_MapNode
{

public:

  
    TopOpeBRepBuild_ListNodeOfListOfPave(const Handle(TopOpeBRepBuild_Pave)& I, const TCollection_MapNodePtr& n);
  
      Handle(TopOpeBRepBuild_Pave)& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepBuild_ListNodeOfListOfPave)

protected:




private: 


  Handle(TopOpeBRepBuild_Pave) myValue;


};

#define Item Handle(TopOpeBRepBuild_Pave)
#define Item_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_Pave.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfPave
#define TCollection_ListNode_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ListNodeOfListOfPave.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfPave
#define TCollection_ListIterator_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ListIteratorOfListOfPave.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfPave
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfPave_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfPave
#define TCollection_List_hxx <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ListOfPave.hxx>

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




#endif // _TopOpeBRepBuild_ListNodeOfListOfPave_HeaderFile
