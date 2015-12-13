// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_ListIteratorOfListOfSensitive_HeaderFile
#define _Select3D_ListIteratorOfListOfSensitive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_Select3D_SensitiveEntity.hxx>
#include <Handle_Select3D_ListNodeOfListOfSensitive.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Select3D_ListOfSensitive;
class Select3D_SensitiveEntity;
class Select3D_ListNodeOfListOfSensitive;



class Select3D_ListIteratorOfListOfSensitive 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Select3D_ListIteratorOfListOfSensitive();
  
  Standard_EXPORT Select3D_ListIteratorOfListOfSensitive(const Select3D_ListOfSensitive& L);
  
  Standard_EXPORT   void Initialize (const Select3D_ListOfSensitive& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(Select3D_SensitiveEntity)& Value()  const;


friend class Select3D_ListOfSensitive;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(Select3D_SensitiveEntity)
#define Item_hxx <Select3D_SensitiveEntity.hxx>
#define TCollection_ListNode Select3D_ListNodeOfListOfSensitive
#define TCollection_ListNode_hxx <Select3D_ListNodeOfListOfSensitive.hxx>
#define TCollection_ListIterator Select3D_ListIteratorOfListOfSensitive
#define TCollection_ListIterator_hxx <Select3D_ListIteratorOfListOfSensitive.hxx>
#define Handle_TCollection_ListNode Handle_Select3D_ListNodeOfListOfSensitive
#define TCollection_ListNode_Type_() Select3D_ListNodeOfListOfSensitive_Type_()
#define TCollection_List Select3D_ListOfSensitive
#define TCollection_List_hxx <Select3D_ListOfSensitive.hxx>

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




#endif // _Select3D_ListIteratorOfListOfSensitive_HeaderFile
