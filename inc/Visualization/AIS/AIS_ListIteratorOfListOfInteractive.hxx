// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ListIteratorOfListOfInteractive_HeaderFile
#define _AIS_ListIteratorOfListOfInteractive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Visualization/AIS/Handle_AIS_InteractiveObject.hxx>
#include <Visualization/AIS/Handle_AIS_ListNodeOfListOfInteractive.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class AIS_ListOfInteractive;
class AIS_InteractiveObject;
class AIS_ListNodeOfListOfInteractive;



class AIS_ListIteratorOfListOfInteractive 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_ListIteratorOfListOfInteractive();
  
  Standard_EXPORT AIS_ListIteratorOfListOfInteractive(const AIS_ListOfInteractive& L);
  
  Standard_EXPORT   void Initialize (const AIS_ListOfInteractive& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(AIS_InteractiveObject)& Value()  const;


friend class AIS_ListOfInteractive;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(AIS_InteractiveObject)
#define Item_hxx <Visualization/AIS/AIS_InteractiveObject.hxx>
#define TCollection_ListNode AIS_ListNodeOfListOfInteractive
#define TCollection_ListNode_hxx <Visualization/AIS/AIS_ListNodeOfListOfInteractive.hxx>
#define TCollection_ListIterator AIS_ListIteratorOfListOfInteractive
#define TCollection_ListIterator_hxx <Visualization/AIS/AIS_ListIteratorOfListOfInteractive.hxx>
#define Handle_TCollection_ListNode Handle_AIS_ListNodeOfListOfInteractive
#define TCollection_ListNode_Type_() AIS_ListNodeOfListOfInteractive_Type_()
#define TCollection_List AIS_ListOfInteractive
#define TCollection_List_hxx <Visualization/AIS/AIS_ListOfInteractive.hxx>

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




#endif // _AIS_ListIteratorOfListOfInteractive_HeaderFile
