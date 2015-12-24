// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ListOfShortReal_HeaderFile
#define _Graphic3d_ListOfShortReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Visualization/Graphic3d/Handle_Graphic3d_ListNodeOfListOfShortReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class Graphic3d_ListIteratorOfListOfShortReal;
class Graphic3d_ListNodeOfListOfShortReal;



class Graphic3d_ListOfShortReal 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Graphic3d_ListOfShortReal();
  
  Standard_EXPORT Graphic3d_ListOfShortReal(const Graphic3d_ListOfShortReal& Other);
  
  Standard_EXPORT   void Assign (const Graphic3d_ListOfShortReal& Other) ;
  void operator= (const Graphic3d_ListOfShortReal& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~Graphic3d_ListOfShortReal()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Standard_ShortReal& I) ;
  
  Standard_EXPORT   void Prepend (const Standard_ShortReal& I, Graphic3d_ListIteratorOfListOfShortReal& theIt) ;
  
  Standard_EXPORT   void Prepend (Graphic3d_ListOfShortReal& Other) ;
  
  Standard_EXPORT   void Append (const Standard_ShortReal& I) ;
  
  Standard_EXPORT   void Append (const Standard_ShortReal& I, Graphic3d_ListIteratorOfListOfShortReal& theIt) ;
  
  Standard_EXPORT   void Append (Graphic3d_ListOfShortReal& Other) ;
  
  Standard_EXPORT   Standard_ShortReal& First()  const;
  
  Standard_EXPORT   Standard_ShortReal& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (Graphic3d_ListIteratorOfListOfShortReal& It) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_ShortReal& I, Graphic3d_ListIteratorOfListOfShortReal& It) ;
  
  Standard_EXPORT   void InsertBefore (Graphic3d_ListOfShortReal& Other, Graphic3d_ListIteratorOfListOfShortReal& It) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_ShortReal& I, Graphic3d_ListIteratorOfListOfShortReal& It) ;
  
  Standard_EXPORT   void InsertAfter (Graphic3d_ListOfShortReal& Other, Graphic3d_ListIteratorOfListOfShortReal& It) ;


friend class Graphic3d_ListIteratorOfListOfShortReal;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Standard_ShortReal
#define Item_hxx <Foundation/Standard/Standard_ShortReal.hxx>
#define TCollection_ListNode Graphic3d_ListNodeOfListOfShortReal
#define TCollection_ListNode_hxx <Visualization/Graphic3d/Graphic3d_ListNodeOfListOfShortReal.hxx>
#define TCollection_ListIterator Graphic3d_ListIteratorOfListOfShortReal
#define TCollection_ListIterator_hxx <Visualization/Graphic3d/Graphic3d_ListIteratorOfListOfShortReal.hxx>
#define Handle_TCollection_ListNode Handle_Graphic3d_ListNodeOfListOfShortReal
#define TCollection_ListNode_Type_() Graphic3d_ListNodeOfListOfShortReal_Type_()
#define TCollection_List Graphic3d_ListOfShortReal
#define TCollection_List_hxx <Visualization/Graphic3d/Graphic3d_ListOfShortReal.hxx>

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




#endif // _Graphic3d_ListOfShortReal_HeaderFile
