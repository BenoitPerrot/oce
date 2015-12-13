// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_ListOfHElSpine_HeaderFile
#define _ChFiDS_ListOfHElSpine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_ChFiDS_HElSpine.hxx>
#include <Handle_ChFiDS_ListNodeOfListOfHElSpine.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class ChFiDS_ListIteratorOfListOfHElSpine;
class ChFiDS_HElSpine;
class ChFiDS_ListNodeOfListOfHElSpine;



class ChFiDS_ListOfHElSpine 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ChFiDS_ListOfHElSpine();
  
  Standard_EXPORT ChFiDS_ListOfHElSpine(const ChFiDS_ListOfHElSpine& Other);
  
  Standard_EXPORT   void Assign (const ChFiDS_ListOfHElSpine& Other) ;
  void operator= (const ChFiDS_ListOfHElSpine& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~ChFiDS_ListOfHElSpine()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Handle(ChFiDS_HElSpine)& I) ;
  
  Standard_EXPORT   void Prepend (const Handle(ChFiDS_HElSpine)& I, ChFiDS_ListIteratorOfListOfHElSpine& theIt) ;
  
  Standard_EXPORT   void Prepend (ChFiDS_ListOfHElSpine& Other) ;
  
  Standard_EXPORT   void Append (const Handle(ChFiDS_HElSpine)& I) ;
  
  Standard_EXPORT   void Append (const Handle(ChFiDS_HElSpine)& I, ChFiDS_ListIteratorOfListOfHElSpine& theIt) ;
  
  Standard_EXPORT   void Append (ChFiDS_ListOfHElSpine& Other) ;
  
  Standard_EXPORT   Handle(ChFiDS_HElSpine)& First()  const;
  
  Standard_EXPORT   Handle(ChFiDS_HElSpine)& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (ChFiDS_ListIteratorOfListOfHElSpine& It) ;
  
  Standard_EXPORT   void InsertBefore (const Handle(ChFiDS_HElSpine)& I, ChFiDS_ListIteratorOfListOfHElSpine& It) ;
  
  Standard_EXPORT   void InsertBefore (ChFiDS_ListOfHElSpine& Other, ChFiDS_ListIteratorOfListOfHElSpine& It) ;
  
  Standard_EXPORT   void InsertAfter (const Handle(ChFiDS_HElSpine)& I, ChFiDS_ListIteratorOfListOfHElSpine& It) ;
  
  Standard_EXPORT   void InsertAfter (ChFiDS_ListOfHElSpine& Other, ChFiDS_ListIteratorOfListOfHElSpine& It) ;


friend class ChFiDS_ListIteratorOfListOfHElSpine;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Handle(ChFiDS_HElSpine)
#define Item_hxx <ChFiDS_HElSpine.hxx>
#define TCollection_ListNode ChFiDS_ListNodeOfListOfHElSpine
#define TCollection_ListNode_hxx <ChFiDS_ListNodeOfListOfHElSpine.hxx>
#define TCollection_ListIterator ChFiDS_ListIteratorOfListOfHElSpine
#define TCollection_ListIterator_hxx <ChFiDS_ListIteratorOfListOfHElSpine.hxx>
#define Handle_TCollection_ListNode Handle_ChFiDS_ListNodeOfListOfHElSpine
#define TCollection_ListNode_Type_() ChFiDS_ListNodeOfListOfHElSpine_Type_()
#define TCollection_List ChFiDS_ListOfHElSpine
#define TCollection_List_hxx <ChFiDS_ListOfHElSpine.hxx>

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




#endif // _ChFiDS_ListOfHElSpine_HeaderFile
