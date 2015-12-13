// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_ListOfPnt2d_HeaderFile
#define _TestTopOpeDraw_ListOfPnt2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TestTopOpeDraw_ListNodeOfListOfPnt2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TestTopOpeDraw_ListIteratorOfListOfPnt2d;
class gp_Pnt2d;
class TestTopOpeDraw_ListNodeOfListOfPnt2d;



class TestTopOpeDraw_ListOfPnt2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TestTopOpeDraw_ListOfPnt2d();
  
  Standard_EXPORT TestTopOpeDraw_ListOfPnt2d(const TestTopOpeDraw_ListOfPnt2d& Other);
  
  Standard_EXPORT   void Assign (const TestTopOpeDraw_ListOfPnt2d& Other) ;
  void operator= (const TestTopOpeDraw_ListOfPnt2d& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~TestTopOpeDraw_ListOfPnt2d()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const gp_Pnt2d& I) ;
  
  Standard_EXPORT   void Prepend (const gp_Pnt2d& I, TestTopOpeDraw_ListIteratorOfListOfPnt2d& theIt) ;
  
  Standard_EXPORT   void Prepend (TestTopOpeDraw_ListOfPnt2d& Other) ;
  
  Standard_EXPORT   void Append (const gp_Pnt2d& I) ;
  
  Standard_EXPORT   void Append (const gp_Pnt2d& I, TestTopOpeDraw_ListIteratorOfListOfPnt2d& theIt) ;
  
  Standard_EXPORT   void Append (TestTopOpeDraw_ListOfPnt2d& Other) ;
  
  Standard_EXPORT   gp_Pnt2d& First()  const;
  
  Standard_EXPORT   gp_Pnt2d& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (TestTopOpeDraw_ListIteratorOfListOfPnt2d& It) ;
  
  Standard_EXPORT   void InsertBefore (const gp_Pnt2d& I, TestTopOpeDraw_ListIteratorOfListOfPnt2d& It) ;
  
  Standard_EXPORT   void InsertBefore (TestTopOpeDraw_ListOfPnt2d& Other, TestTopOpeDraw_ListIteratorOfListOfPnt2d& It) ;
  
  Standard_EXPORT   void InsertAfter (const gp_Pnt2d& I, TestTopOpeDraw_ListIteratorOfListOfPnt2d& It) ;
  
  Standard_EXPORT   void InsertAfter (TestTopOpeDraw_ListOfPnt2d& Other, TestTopOpeDraw_ListIteratorOfListOfPnt2d& It) ;


friend class TestTopOpeDraw_ListIteratorOfListOfPnt2d;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


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

#include <TCollection_List.lxx>

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




#endif // _TestTopOpeDraw_ListOfPnt2d_HeaderFile
