// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_ListIteratorOfListOfSensitiveTriangle_HeaderFile
#define _Select3D_ListIteratorOfListOfSensitiveTriangle_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_Select3D_SensitiveTriangle.hxx>
#include <Handle_Select3D_ListNodeOfListOfSensitiveTriangle.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Select3D_ListOfSensitiveTriangle;
class Select3D_SensitiveTriangle;
class Select3D_ListNodeOfListOfSensitiveTriangle;



class Select3D_ListIteratorOfListOfSensitiveTriangle 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Select3D_ListIteratorOfListOfSensitiveTriangle();
  
  Standard_EXPORT Select3D_ListIteratorOfListOfSensitiveTriangle(const Select3D_ListOfSensitiveTriangle& L);
  
  Standard_EXPORT   void Initialize (const Select3D_ListOfSensitiveTriangle& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(Select3D_SensitiveTriangle)& Value()  const;


friend class Select3D_ListOfSensitiveTriangle;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(Select3D_SensitiveTriangle)
#define Item_hxx <Select3D_SensitiveTriangle.hxx>
#define TCollection_ListNode Select3D_ListNodeOfListOfSensitiveTriangle
#define TCollection_ListNode_hxx <Select3D_ListNodeOfListOfSensitiveTriangle.hxx>
#define TCollection_ListIterator Select3D_ListIteratorOfListOfSensitiveTriangle
#define TCollection_ListIterator_hxx <Select3D_ListIteratorOfListOfSensitiveTriangle.hxx>
#define Handle_TCollection_ListNode Handle_Select3D_ListNodeOfListOfSensitiveTriangle
#define TCollection_ListNode_Type_() Select3D_ListNodeOfListOfSensitiveTriangle_Type_()
#define TCollection_List Select3D_ListOfSensitiveTriangle
#define TCollection_List_hxx <Select3D_ListOfSensitiveTriangle.hxx>

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




#endif // _Select3D_ListIteratorOfListOfSensitiveTriangle_HeaderFile
