// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_ListNodeOfListOfCurveRangeSample_HeaderFile
#define _IntTools_ListNodeOfListOfCurveRangeSample_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IntTools_ListNodeOfListOfCurveRangeSample.hxx>

#include <IntTools_CurveRangeSample.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class IntTools_CurveRangeSample;
class IntTools_ListOfCurveRangeSample;
class IntTools_ListIteratorOfListOfCurveRangeSample;



class IntTools_ListNodeOfListOfCurveRangeSample : public TCollection_MapNode
{

public:

  
    IntTools_ListNodeOfListOfCurveRangeSample(const IntTools_CurveRangeSample& I, const TCollection_MapNodePtr& n);
  
      IntTools_CurveRangeSample& Value()  const;




  DEFINE_STANDARD_RTTI(IntTools_ListNodeOfListOfCurveRangeSample)

protected:




private: 


  IntTools_CurveRangeSample myValue;


};

#define Item IntTools_CurveRangeSample
#define Item_hxx <IntTools_CurveRangeSample.hxx>
#define TCollection_ListNode IntTools_ListNodeOfListOfCurveRangeSample
#define TCollection_ListNode_hxx <IntTools_ListNodeOfListOfCurveRangeSample.hxx>
#define TCollection_ListIterator IntTools_ListIteratorOfListOfCurveRangeSample
#define TCollection_ListIterator_hxx <IntTools_ListIteratorOfListOfCurveRangeSample.hxx>
#define Handle_TCollection_ListNode Handle_IntTools_ListNodeOfListOfCurveRangeSample
#define TCollection_ListNode_Type_() IntTools_ListNodeOfListOfCurveRangeSample_Type_()
#define TCollection_List IntTools_ListOfCurveRangeSample
#define TCollection_List_hxx <IntTools_ListOfCurveRangeSample.hxx>

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




#endif // _IntTools_ListNodeOfListOfCurveRangeSample_HeaderFile
