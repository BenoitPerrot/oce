// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_ListNodeOfListOfPnt2d_HeaderFile
#define _TestTopOpeDraw_ListNodeOfListOfPnt2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TestTopOpeDraw_ListNodeOfListOfPnt2d.hxx>

#include <gp_Pnt2d.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class gp_Pnt2d;
class TestTopOpeDraw_ListOfPnt2d;
class TestTopOpeDraw_ListIteratorOfListOfPnt2d;



class TestTopOpeDraw_ListNodeOfListOfPnt2d : public TCollection_MapNode
{

public:

  
    TestTopOpeDraw_ListNodeOfListOfPnt2d(const gp_Pnt2d& I, const TCollection_MapNodePtr& n);
  
      gp_Pnt2d& Value()  const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_ListNodeOfListOfPnt2d)

protected:




private: 


  gp_Pnt2d myValue;


};

#define Item gp_Pnt2d
#define Item_hxx <gp_Pnt2d.hxx>
#define TCollection_ListNode TestTopOpeDraw_ListNodeOfListOfPnt2d
#define TCollection_ListNode_hxx <TestTopOpeDraw_ListNodeOfListOfPnt2d.hxx>
#define TCollection_ListIterator TestTopOpeDraw_ListIteratorOfListOfPnt2d
#define TCollection_ListIterator_hxx <TestTopOpeDraw_ListIteratorOfListOfPnt2d.hxx>
#define Handle_TCollection_ListNode Handle_TestTopOpeDraw_ListNodeOfListOfPnt2d
#define TCollection_ListNode_Type_() TestTopOpeDraw_ListNodeOfListOfPnt2d_Type_()
#define TCollection_List TestTopOpeDraw_ListOfPnt2d
#define TCollection_List_hxx <TestTopOpeDraw_ListOfPnt2d.hxx>

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




#endif // _TestTopOpeDraw_ListNodeOfListOfPnt2d_HeaderFile
