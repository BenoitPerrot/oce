// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_ListNodeOfListOfStatus_HeaderFile
#define _BRepCheck_ListNodeOfListOfStatus_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepCheck/Handle_BRepCheck_ListNodeOfListOfStatus.hxx>

#include <ModelingAlgorithms/BRepCheck/BRepCheck_Status.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class BRepCheck_ListOfStatus;
class BRepCheck_ListIteratorOfListOfStatus;



class BRepCheck_ListNodeOfListOfStatus : public TCollection_MapNode
{

public:

  
    BRepCheck_ListNodeOfListOfStatus(const BRepCheck_Status& I, const TCollection_MapNodePtr& n);
  
      BRepCheck_Status& Value()  const;




  DEFINE_STANDARD_RTTI(BRepCheck_ListNodeOfListOfStatus)

protected:




private: 


  BRepCheck_Status myValue;


};

#define Item BRepCheck_Status
#define Item_hxx <ModelingAlgorithms/BRepCheck/BRepCheck_Status.hxx>
#define TCollection_ListNode BRepCheck_ListNodeOfListOfStatus
#define TCollection_ListNode_hxx <ModelingAlgorithms/BRepCheck/BRepCheck_ListNodeOfListOfStatus.hxx>
#define TCollection_ListIterator BRepCheck_ListIteratorOfListOfStatus
#define TCollection_ListIterator_hxx <ModelingAlgorithms/BRepCheck/BRepCheck_ListIteratorOfListOfStatus.hxx>
#define Handle_TCollection_ListNode Handle_BRepCheck_ListNodeOfListOfStatus
#define TCollection_ListNode_Type_() BRepCheck_ListNodeOfListOfStatus_Type_()
#define TCollection_List BRepCheck_ListOfStatus
#define TCollection_List_hxx <ModelingAlgorithms/BRepCheck/BRepCheck_ListOfStatus.hxx>

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




#endif // _BRepCheck_ListNodeOfListOfStatus_HeaderFile
