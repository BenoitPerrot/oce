// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_ListOfDocument_HeaderFile
#define _CDM_ListOfDocument_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_CDM_Document.hxx>
#include <Handle_CDM_ListNodeOfListOfDocument.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class CDM_ListIteratorOfListOfDocument;
class CDM_Document;
class CDM_ListNodeOfListOfDocument;



class CDM_ListOfDocument 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT CDM_ListOfDocument();
  
  Standard_EXPORT CDM_ListOfDocument(const CDM_ListOfDocument& Other);
  
  Standard_EXPORT   void Assign (const CDM_ListOfDocument& Other) ;
  void operator= (const CDM_ListOfDocument& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~CDM_ListOfDocument()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Handle(CDM_Document)& I) ;
  
  Standard_EXPORT   void Prepend (const Handle(CDM_Document)& I, CDM_ListIteratorOfListOfDocument& theIt) ;
  
  Standard_EXPORT   void Prepend (CDM_ListOfDocument& Other) ;
  
  Standard_EXPORT   void Append (const Handle(CDM_Document)& I) ;
  
  Standard_EXPORT   void Append (const Handle(CDM_Document)& I, CDM_ListIteratorOfListOfDocument& theIt) ;
  
  Standard_EXPORT   void Append (CDM_ListOfDocument& Other) ;
  
  Standard_EXPORT   Handle(CDM_Document)& First()  const;
  
  Standard_EXPORT   Handle(CDM_Document)& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (CDM_ListIteratorOfListOfDocument& It) ;
  
  Standard_EXPORT   void InsertBefore (const Handle(CDM_Document)& I, CDM_ListIteratorOfListOfDocument& It) ;
  
  Standard_EXPORT   void InsertBefore (CDM_ListOfDocument& Other, CDM_ListIteratorOfListOfDocument& It) ;
  
  Standard_EXPORT   void InsertAfter (const Handle(CDM_Document)& I, CDM_ListIteratorOfListOfDocument& It) ;
  
  Standard_EXPORT   void InsertAfter (CDM_ListOfDocument& Other, CDM_ListIteratorOfListOfDocument& It) ;


friend class CDM_ListIteratorOfListOfDocument;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Handle(CDM_Document)
#define Item_hxx <CDM_Document.hxx>
#define TCollection_ListNode CDM_ListNodeOfListOfDocument
#define TCollection_ListNode_hxx <CDM_ListNodeOfListOfDocument.hxx>
#define TCollection_ListIterator CDM_ListIteratorOfListOfDocument
#define TCollection_ListIterator_hxx <CDM_ListIteratorOfListOfDocument.hxx>
#define Handle_TCollection_ListNode Handle_CDM_ListNodeOfListOfDocument
#define TCollection_ListNode_Type_() CDM_ListNodeOfListOfDocument_Type_()
#define TCollection_List CDM_ListOfDocument
#define TCollection_List_hxx <CDM_ListOfDocument.hxx>

#include <Foundation/TCollection/TCollection_List.lxx>

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




#endif // _CDM_ListOfDocument_HeaderFile
