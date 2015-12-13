// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_ListIteratorOfListOfMapOfShape_HeaderFile
#define _TNaming_ListIteratorOfListOfMapOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TNaming_ListNodeOfListOfMapOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TNaming_ListOfMapOfShape;
class TopTools_MapOfShape;
class TNaming_ListNodeOfListOfMapOfShape;



class TNaming_ListIteratorOfListOfMapOfShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TNaming_ListIteratorOfListOfMapOfShape();
  
  Standard_EXPORT TNaming_ListIteratorOfListOfMapOfShape(const TNaming_ListOfMapOfShape& L);
  
  Standard_EXPORT   void Initialize (const TNaming_ListOfMapOfShape& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   TopTools_MapOfShape& Value()  const;


friend class TNaming_ListOfMapOfShape;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item TopTools_MapOfShape
#define Item_hxx <TopTools_MapOfShape.hxx>
#define TCollection_ListNode TNaming_ListNodeOfListOfMapOfShape
#define TCollection_ListNode_hxx <TNaming_ListNodeOfListOfMapOfShape.hxx>
#define TCollection_ListIterator TNaming_ListIteratorOfListOfMapOfShape
#define TCollection_ListIterator_hxx <TNaming_ListIteratorOfListOfMapOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TNaming_ListNodeOfListOfMapOfShape
#define TCollection_ListNode_Type_() TNaming_ListNodeOfListOfMapOfShape_Type_()
#define TCollection_List TNaming_ListOfMapOfShape
#define TCollection_List_hxx <TNaming_ListOfMapOfShape.hxx>

#include <TCollection_ListIterator.lxx>

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




#endif // _TNaming_ListIteratorOfListOfMapOfShape_HeaderFile
