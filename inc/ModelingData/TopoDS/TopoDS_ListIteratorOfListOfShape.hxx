// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_ListIteratorOfListOfShape_HeaderFile
#define _TopoDS_ListIteratorOfListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <ModelingData/TopoDS/Handle_TopoDS_ListNodeOfListOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopoDS_ListOfShape;
class TopoDS_Shape;
class TopoDS_ListNodeOfListOfShape;



class TopoDS_ListIteratorOfListOfShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopoDS_ListIteratorOfListOfShape();
  
  Standard_EXPORT TopoDS_ListIteratorOfListOfShape(const TopoDS_ListOfShape& L);
  
  Standard_EXPORT   void Initialize (const TopoDS_ListOfShape& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   TopoDS_Shape& Value()  const;


friend class TopoDS_ListOfShape;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item TopoDS_Shape
#define Item_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TCollection_ListNode TopoDS_ListNodeOfListOfShape
#define TCollection_ListNode_hxx <ModelingData/TopoDS/TopoDS_ListNodeOfListOfShape.hxx>
#define TCollection_ListIterator TopoDS_ListIteratorOfListOfShape
#define TCollection_ListIterator_hxx <ModelingData/TopoDS/TopoDS_ListIteratorOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopoDS_ListNodeOfListOfShape
#define TCollection_ListNode_Type_() TopoDS_ListNodeOfListOfShape_Type_()
#define TCollection_List TopoDS_ListOfShape
#define TCollection_List_hxx <ModelingData/TopoDS/TopoDS_ListOfShape.hxx>

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




#endif // _TopoDS_ListIteratorOfListOfShape_HeaderFile
