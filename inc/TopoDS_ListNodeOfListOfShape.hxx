// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_ListNodeOfListOfShape_HeaderFile
#define _TopoDS_ListNodeOfListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopoDS_ListNodeOfListOfShape.hxx>

#include <TopoDS_Shape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopoDS_ListOfShape;
class TopoDS_ListIteratorOfListOfShape;



class TopoDS_ListNodeOfListOfShape : public TCollection_MapNode
{

public:

  
    TopoDS_ListNodeOfListOfShape(const TopoDS_Shape& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(TopoDS_ListNodeOfListOfShape)

protected:




private: 


  TopoDS_Shape myValue;


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

#include <TCollection_ListNode.lxx>

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




#endif // _TopoDS_ListNodeOfListOfShape_HeaderFile
