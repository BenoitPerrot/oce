// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_ListNodeOfListOfCurveRepresentation_HeaderFile
#define _BRep_ListNodeOfListOfCurveRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRep_ListNodeOfListOfCurveRepresentation.hxx>

#include <Handle_BRep_CurveRepresentation.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class BRep_CurveRepresentation;
class BRep_ListOfCurveRepresentation;
class BRep_ListIteratorOfListOfCurveRepresentation;



class BRep_ListNodeOfListOfCurveRepresentation : public TCollection_MapNode
{

public:

  
    BRep_ListNodeOfListOfCurveRepresentation(const Handle(BRep_CurveRepresentation)& I, const TCollection_MapNodePtr& n);
  
      Handle(BRep_CurveRepresentation)& Value()  const;




  DEFINE_STANDARD_RTTI(BRep_ListNodeOfListOfCurveRepresentation)

protected:




private: 


  Handle(BRep_CurveRepresentation) myValue;


};

#define Item Handle(BRep_CurveRepresentation)
#define Item_hxx <BRep_CurveRepresentation.hxx>
#define TCollection_ListNode BRep_ListNodeOfListOfCurveRepresentation
#define TCollection_ListNode_hxx <BRep_ListNodeOfListOfCurveRepresentation.hxx>
#define TCollection_ListIterator BRep_ListIteratorOfListOfCurveRepresentation
#define TCollection_ListIterator_hxx <BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#define Handle_TCollection_ListNode Handle_BRep_ListNodeOfListOfCurveRepresentation
#define TCollection_ListNode_Type_() BRep_ListNodeOfListOfCurveRepresentation_Type_()
#define TCollection_List BRep_ListOfCurveRepresentation
#define TCollection_List_hxx <BRep_ListOfCurveRepresentation.hxx>

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




#endif // _BRep_ListNodeOfListOfCurveRepresentation_HeaderFile
