// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_ListOfShape_HeaderFile
#define _TopoDS_ListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TopoDS_ListNodeOfListOfShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TopoDS_ListIteratorOfListOfShape;
class TopoDS_Shape;
class TopoDS_ListNodeOfListOfShape;



class TopoDS_ListOfShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopoDS_ListOfShape();
  
  Standard_EXPORT TopoDS_ListOfShape(const TopoDS_ListOfShape& Other);
  
  Standard_EXPORT   void Assign (const TopoDS_ListOfShape& Other) ;
  void operator= (const TopoDS_ListOfShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~TopoDS_ListOfShape()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const TopoDS_Shape& I) ;
  
  Standard_EXPORT   void Prepend (const TopoDS_Shape& I, TopoDS_ListIteratorOfListOfShape& theIt) ;
  
  Standard_EXPORT   void Prepend (TopoDS_ListOfShape& Other) ;
  
  Standard_EXPORT   void Append (const TopoDS_Shape& I) ;
  
  Standard_EXPORT   void Append (const TopoDS_Shape& I, TopoDS_ListIteratorOfListOfShape& theIt) ;
  
  Standard_EXPORT   void Append (TopoDS_ListOfShape& Other) ;
  
  Standard_EXPORT   TopoDS_Shape& First()  const;
  
  Standard_EXPORT   TopoDS_Shape& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (TopoDS_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertBefore (const TopoDS_Shape& I, TopoDS_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertBefore (TopoDS_ListOfShape& Other, TopoDS_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertAfter (const TopoDS_Shape& I, TopoDS_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertAfter (TopoDS_ListOfShape& Other, TopoDS_ListIteratorOfListOfShape& It) ;


friend class TopoDS_ListIteratorOfListOfShape;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item TopoDS_Shape
#define Item_hxx <TopoDS_Shape.hxx>
#define TCollection_ListNode TopoDS_ListNodeOfListOfShape
#define TCollection_ListNode_hxx <TopoDS_ListNodeOfListOfShape.hxx>
#define TCollection_ListIterator TopoDS_ListIteratorOfListOfShape
#define TCollection_ListIterator_hxx <TopoDS_ListIteratorOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopoDS_ListNodeOfListOfShape
#define TCollection_ListNode_Type_() TopoDS_ListNodeOfListOfShape_Type_()
#define TCollection_List TopoDS_ListOfShape
#define TCollection_List_hxx <TopoDS_ListOfShape.hxx>

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




#endif // _TopoDS_ListOfShape_HeaderFile
