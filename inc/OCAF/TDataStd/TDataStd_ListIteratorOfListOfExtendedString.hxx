// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_ListIteratorOfListOfExtendedString_HeaderFile
#define _TDataStd_ListIteratorOfListOfExtendedString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_ListNodeOfListOfExtendedString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TDataStd_ListOfExtendedString;
class TCollection_ExtendedString;
class TDataStd_ListNodeOfListOfExtendedString;



class TDataStd_ListIteratorOfListOfExtendedString 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDataStd_ListIteratorOfListOfExtendedString();
  
  Standard_EXPORT TDataStd_ListIteratorOfListOfExtendedString(const TDataStd_ListOfExtendedString& L);
  
  Standard_EXPORT   void Initialize (const TDataStd_ListOfExtendedString& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   TCollection_ExtendedString& Value()  const;


friend class TDataStd_ListOfExtendedString;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item TCollection_ExtendedString
#define Item_hxx <Foundation/TCollection/TCollection_ExtendedString.hxx>
#define TCollection_ListNode TDataStd_ListNodeOfListOfExtendedString
#define TCollection_ListNode_hxx <OCAF/TDataStd/TDataStd_ListNodeOfListOfExtendedString.hxx>
#define TCollection_ListIterator TDataStd_ListIteratorOfListOfExtendedString
#define TCollection_ListIterator_hxx <OCAF/TDataStd/TDataStd_ListIteratorOfListOfExtendedString.hxx>
#define Handle_TCollection_ListNode Handle_TDataStd_ListNodeOfListOfExtendedString
#define TCollection_ListNode_Type_() TDataStd_ListNodeOfListOfExtendedString_Type_()
#define TCollection_List TDataStd_ListOfExtendedString
#define TCollection_List_hxx <OCAF/TDataStd/TDataStd_ListOfExtendedString.hxx>

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




#endif // _TDataStd_ListIteratorOfListOfExtendedString_HeaderFile
