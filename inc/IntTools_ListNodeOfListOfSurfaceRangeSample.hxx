// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_ListNodeOfListOfSurfaceRangeSample_HeaderFile
#define _IntTools_ListNodeOfListOfSurfaceRangeSample_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IntTools_ListNodeOfListOfSurfaceRangeSample.hxx>

#include <IntTools_SurfaceRangeSample.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class IntTools_SurfaceRangeSample;
class IntTools_ListOfSurfaceRangeSample;
class IntTools_ListIteratorOfListOfSurfaceRangeSample;



class IntTools_ListNodeOfListOfSurfaceRangeSample : public TCollection_MapNode
{

public:

  
    IntTools_ListNodeOfListOfSurfaceRangeSample(const IntTools_SurfaceRangeSample& I, const TCollection_MapNodePtr& n);
  
      IntTools_SurfaceRangeSample& Value()  const;




  DEFINE_STANDARD_RTTI(IntTools_ListNodeOfListOfSurfaceRangeSample)

protected:




private: 


  IntTools_SurfaceRangeSample myValue;


};

#define Item IntTools_SurfaceRangeSample
#define Item_hxx <IntTools_SurfaceRangeSample.hxx>
#define TCollection_ListNode IntTools_ListNodeOfListOfSurfaceRangeSample
#define TCollection_ListNode_hxx <IntTools_ListNodeOfListOfSurfaceRangeSample.hxx>
#define TCollection_ListIterator IntTools_ListIteratorOfListOfSurfaceRangeSample
#define TCollection_ListIterator_hxx <IntTools_ListIteratorOfListOfSurfaceRangeSample.hxx>
#define Handle_TCollection_ListNode Handle_IntTools_ListNodeOfListOfSurfaceRangeSample
#define TCollection_ListNode_Type_() IntTools_ListNodeOfListOfSurfaceRangeSample_Type_()
#define TCollection_List IntTools_ListOfSurfaceRangeSample
#define TCollection_List_hxx <IntTools_ListOfSurfaceRangeSample.hxx>

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




#endif // _IntTools_ListNodeOfListOfSurfaceRangeSample_HeaderFile
