// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_ListOfShape_HeaderFile
#define _TopTools_ListOfShape_HeaderFile

#include <list>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>

typedef std::list<TopoDS_Shape> TopTools_ListOfShape;

#if 0
#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <ModelingData/TopTools/Handle_TopTools_ListNodeOfListOfShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TopTools_ListIteratorOfListOfShape;
class TopoDS_Shape;
class TopTools_ListNodeOfListOfShape;



class TopTools_ListOfShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_ListOfShape();
  
  Standard_EXPORT TopTools_ListOfShape(const TopTools_ListOfShape& Other);
  
  Standard_EXPORT   void Assign (const TopTools_ListOfShape& Other) ;
  void operator= (const TopTools_ListOfShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer size()  const;
  
  Standard_EXPORT   void clear() ;

~TopTools_ListOfShape()
{
  clear();
}
  
  Standard_Boolean empty()  const
  {
    return myFirst == 0L;
  }
  
  Standard_EXPORT   TopoDS_Shape& front()  const;
  
  Standard_EXPORT   TopoDS_Shape& back()  const;

  Standard_EXPORT   void push_front (const TopoDS_Shape& I) ;

  Standard_EXPORT   void push_back (const TopoDS_Shape& I) ;

  Standard_EXPORT   void pop_front() ;

  Standard_EXPORT   TopTools_ListIteratorOfListOfShape erase (TopTools_ListIteratorOfListOfShape& It) ;
  
public:
  Standard_EXPORT   void Prepend (TopTools_ListOfShape& Other) ;
  
  Standard_EXPORT   void Append (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& theIt) ;
  
  Standard_EXPORT   void Append (TopTools_ListOfShape& Other) ;

  Standard_EXPORT   void InsertBefore (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertBefore (TopTools_ListOfShape& Other, TopTools_ListIteratorOfListOfShape& It) ;

private:
  Standard_EXPORT   void Prepend (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& theIt) ;

  Standard_EXPORT   void InsertAfter (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertAfter (TopTools_ListOfShape& Other, TopTools_ListIteratorOfListOfShape& It) ;
public:

friend class TopTools_ListIteratorOfListOfShape;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item TopoDS_Shape
#define Item_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TCollection_ListNode TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_hxx <ModelingData/TopTools/TopTools_ListNodeOfListOfShape.hxx>
#define TCollection_ListIterator TopTools_ListIteratorOfListOfShape
#define TCollection_ListIterator_hxx <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_Type_() TopTools_ListNodeOfListOfShape_Type_()
#define TCollection_List TopTools_ListOfShape
#define TCollection_List_hxx <ModelingData/TopTools/TopTools_ListOfShape.hxx>

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


#endif

#endif // _TopTools_ListOfShape_HeaderFile
