// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_ListIteratorOfListOfOffsetWire_HeaderFile
#define _BRepFill_ListIteratorOfListOfOffsetWire_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_BRepFill_ListNodeOfListOfOffsetWire.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BRepFill_ListOfOffsetWire;
class BRepFill_OffsetWire;
class BRepFill_ListNodeOfListOfOffsetWire;



class BRepFill_ListIteratorOfListOfOffsetWire 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_ListIteratorOfListOfOffsetWire();
  
  Standard_EXPORT BRepFill_ListIteratorOfListOfOffsetWire(const BRepFill_ListOfOffsetWire& L);
  
  Standard_EXPORT   void Initialize (const BRepFill_ListOfOffsetWire& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   BRepFill_OffsetWire& Value()  const;


friend class BRepFill_ListOfOffsetWire;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item BRepFill_OffsetWire
#define Item_hxx <BRepFill_OffsetWire.hxx>
#define TCollection_ListNode BRepFill_ListNodeOfListOfOffsetWire
#define TCollection_ListNode_hxx <BRepFill_ListNodeOfListOfOffsetWire.hxx>
#define TCollection_ListIterator BRepFill_ListIteratorOfListOfOffsetWire
#define TCollection_ListIterator_hxx <BRepFill_ListIteratorOfListOfOffsetWire.hxx>
#define Handle_TCollection_ListNode Handle_BRepFill_ListNodeOfListOfOffsetWire
#define TCollection_ListNode_Type_() BRepFill_ListNodeOfListOfOffsetWire_Type_()
#define TCollection_List BRepFill_ListOfOffsetWire
#define TCollection_List_hxx <BRepFill_ListOfOffsetWire.hxx>

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




#endif // _BRepFill_ListIteratorOfListOfOffsetWire_HeaderFile
