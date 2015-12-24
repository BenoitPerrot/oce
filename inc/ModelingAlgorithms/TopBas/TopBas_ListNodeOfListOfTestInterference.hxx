// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopBas_ListNodeOfListOfTestInterference_HeaderFile
#define _TopBas_ListNodeOfListOfTestInterference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/TopBas/Handle_TopBas_ListNodeOfListOfTestInterference.hxx>

#include <ModelingAlgorithms/TopBas/TopBas_TestInterference.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopBas_TestInterference;
class TopBas_ListOfTestInterference;
class TopBas_ListIteratorOfListOfTestInterference;



class TopBas_ListNodeOfListOfTestInterference : public TCollection_MapNode
{

public:

  
    TopBas_ListNodeOfListOfTestInterference(const TopBas_TestInterference& I, const TCollection_MapNodePtr& n);
  
      TopBas_TestInterference& Value()  const;




  DEFINE_STANDARD_RTTI(TopBas_ListNodeOfListOfTestInterference)

protected:




private: 


  TopBas_TestInterference myValue;


};

#define Item TopBas_TestInterference
#define Item_hxx <ModelingAlgorithms/TopBas/TopBas_TestInterference.hxx>
#define TCollection_ListNode TopBas_ListNodeOfListOfTestInterference
#define TCollection_ListNode_hxx <ModelingAlgorithms/TopBas/TopBas_ListNodeOfListOfTestInterference.hxx>
#define TCollection_ListIterator TopBas_ListIteratorOfListOfTestInterference
#define TCollection_ListIterator_hxx <ModelingAlgorithms/TopBas/TopBas_ListIteratorOfListOfTestInterference.hxx>
#define Handle_TCollection_ListNode Handle_TopBas_ListNodeOfListOfTestInterference
#define TCollection_ListNode_Type_() TopBas_ListNodeOfListOfTestInterference_Type_()
#define TCollection_List TopBas_ListOfTestInterference
#define TCollection_List_hxx <ModelingAlgorithms/TopBas/TopBas_ListOfTestInterference.hxx>

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




#endif // _TopBas_ListNodeOfListOfTestInterference_HeaderFile
