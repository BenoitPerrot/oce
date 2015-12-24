// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_ListOfPointRepresentation_HeaderFile
#define _BRep_ListOfPointRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <ModelingData/BRep/Handle_BRep_PointRepresentation.hxx>
#include <ModelingData/BRep/Handle_BRep_ListNodeOfListOfPointRepresentation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class BRep_ListIteratorOfListOfPointRepresentation;
class BRep_PointRepresentation;
class BRep_ListNodeOfListOfPointRepresentation;



class BRep_ListOfPointRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRep_ListOfPointRepresentation();
  
  Standard_EXPORT BRep_ListOfPointRepresentation(const BRep_ListOfPointRepresentation& Other);
  
  Standard_EXPORT   void Assign (const BRep_ListOfPointRepresentation& Other) ;
  void operator= (const BRep_ListOfPointRepresentation& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~BRep_ListOfPointRepresentation()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Handle(BRep_PointRepresentation)& I) ;
  
  Standard_EXPORT   void Prepend (const Handle(BRep_PointRepresentation)& I, BRep_ListIteratorOfListOfPointRepresentation& theIt) ;
  
  Standard_EXPORT   void Prepend (BRep_ListOfPointRepresentation& Other) ;
  
  Standard_EXPORT   void Append (const Handle(BRep_PointRepresentation)& I) ;
  
  Standard_EXPORT   void Append (const Handle(BRep_PointRepresentation)& I, BRep_ListIteratorOfListOfPointRepresentation& theIt) ;
  
  Standard_EXPORT   void Append (BRep_ListOfPointRepresentation& Other) ;
  
  Standard_EXPORT   Handle(BRep_PointRepresentation)& First()  const;
  
  Standard_EXPORT   Handle(BRep_PointRepresentation)& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (BRep_ListIteratorOfListOfPointRepresentation& It) ;
  
  Standard_EXPORT   void InsertBefore (const Handle(BRep_PointRepresentation)& I, BRep_ListIteratorOfListOfPointRepresentation& It) ;
  
  Standard_EXPORT   void InsertBefore (BRep_ListOfPointRepresentation& Other, BRep_ListIteratorOfListOfPointRepresentation& It) ;
  
  Standard_EXPORT   void InsertAfter (const Handle(BRep_PointRepresentation)& I, BRep_ListIteratorOfListOfPointRepresentation& It) ;
  
  Standard_EXPORT   void InsertAfter (BRep_ListOfPointRepresentation& Other, BRep_ListIteratorOfListOfPointRepresentation& It) ;


friend class BRep_ListIteratorOfListOfPointRepresentation;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Handle(BRep_PointRepresentation)
#define Item_hxx <ModelingData/BRep/BRep_PointRepresentation.hxx>
#define TCollection_ListNode BRep_ListNodeOfListOfPointRepresentation
#define TCollection_ListNode_hxx <ModelingData/BRep/BRep_ListNodeOfListOfPointRepresentation.hxx>
#define TCollection_ListIterator BRep_ListIteratorOfListOfPointRepresentation
#define TCollection_ListIterator_hxx <ModelingData/BRep/BRep_ListIteratorOfListOfPointRepresentation.hxx>
#define Handle_TCollection_ListNode Handle_BRep_ListNodeOfListOfPointRepresentation
#define TCollection_ListNode_Type_() BRep_ListNodeOfListOfPointRepresentation_Type_()
#define TCollection_List BRep_ListOfPointRepresentation
#define TCollection_List_hxx <ModelingData/BRep/BRep_ListOfPointRepresentation.hxx>

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




#endif // _BRep_ListOfPointRepresentation_HeaderFile
