// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ListNodeOfListOfInteractive_HeaderFile
#define _AIS_ListNodeOfListOfInteractive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_ListNodeOfListOfInteractive.hxx>

#include <Handle_AIS_InteractiveObject.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class AIS_InteractiveObject;
class AIS_ListOfInteractive;
class AIS_ListIteratorOfListOfInteractive;



class AIS_ListNodeOfListOfInteractive : public TCollection_MapNode
{

public:

  
    AIS_ListNodeOfListOfInteractive(const Handle(AIS_InteractiveObject)& I, const TCollection_MapNodePtr& n);
  
      Handle(AIS_InteractiveObject)& Value()  const;




  DEFINE_STANDARD_RTTI(AIS_ListNodeOfListOfInteractive)

protected:




private: 


  Handle(AIS_InteractiveObject) myValue;


};

#define Item Handle(AIS_InteractiveObject)
#define Item_hxx <AIS_InteractiveObject.hxx>
#define TCollection_ListNode AIS_ListNodeOfListOfInteractive
#define TCollection_ListNode_hxx <AIS_ListNodeOfListOfInteractive.hxx>
#define TCollection_ListIterator AIS_ListIteratorOfListOfInteractive
#define TCollection_ListIterator_hxx <AIS_ListIteratorOfListOfInteractive.hxx>
#define Handle_TCollection_ListNode Handle_AIS_ListNodeOfListOfInteractive
#define TCollection_ListNode_Type_() AIS_ListNodeOfListOfInteractive_Type_()
#define TCollection_List AIS_ListOfInteractive
#define TCollection_List_hxx <AIS_ListOfInteractive.hxx>

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




#endif // _AIS_ListNodeOfListOfInteractive_HeaderFile
