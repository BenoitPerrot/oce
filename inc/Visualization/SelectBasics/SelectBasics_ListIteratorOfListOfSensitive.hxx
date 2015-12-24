// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_ListIteratorOfListOfSensitive_HeaderFile
#define _SelectBasics_ListIteratorOfListOfSensitive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Visualization/SelectBasics/Handle_SelectBasics_SensitiveEntity.hxx>
#include <Visualization/SelectBasics/Handle_SelectBasics_ListNodeOfListOfSensitive.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class SelectBasics_ListOfSensitive;
class SelectBasics_SensitiveEntity;
class SelectBasics_ListNodeOfListOfSensitive;



class SelectBasics_ListIteratorOfListOfSensitive 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT SelectBasics_ListIteratorOfListOfSensitive();
  
  Standard_EXPORT SelectBasics_ListIteratorOfListOfSensitive(const SelectBasics_ListOfSensitive& L);
  
  Standard_EXPORT   void Initialize (const SelectBasics_ListOfSensitive& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(SelectBasics_SensitiveEntity)& Value()  const;


friend class SelectBasics_ListOfSensitive;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(SelectBasics_SensitiveEntity)
#define Item_hxx <Visualization/SelectBasics/SelectBasics_SensitiveEntity.hxx>
#define TCollection_ListNode SelectBasics_ListNodeOfListOfSensitive
#define TCollection_ListNode_hxx <Visualization/SelectBasics/SelectBasics_ListNodeOfListOfSensitive.hxx>
#define TCollection_ListIterator SelectBasics_ListIteratorOfListOfSensitive
#define TCollection_ListIterator_hxx <Visualization/SelectBasics/SelectBasics_ListIteratorOfListOfSensitive.hxx>
#define Handle_TCollection_ListNode Handle_SelectBasics_ListNodeOfListOfSensitive
#define TCollection_ListNode_Type_() SelectBasics_ListNodeOfListOfSensitive_Type_()
#define TCollection_List SelectBasics_ListOfSensitive
#define TCollection_List_hxx <Visualization/SelectBasics/SelectBasics_ListOfSensitive.hxx>

#include <Foundation/TCollection/TCollection_ListIterator.lxx>

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




#endif // _SelectBasics_ListIteratorOfListOfSensitive_HeaderFile
