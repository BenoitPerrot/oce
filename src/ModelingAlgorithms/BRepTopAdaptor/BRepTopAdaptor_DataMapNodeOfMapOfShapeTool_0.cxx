// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BRepTopAdaptor_DataMapNodeOfMapOfShapeTool.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <BRepTopAdaptor_Tool.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <BRepTopAdaptor_MapOfShapeTool.hxx>
#include <BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx>

 


IMPLEMENT_STANDARD_TYPE(BRepTopAdaptor_DataMapNodeOfMapOfShapeTool)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepTopAdaptor_DataMapNodeOfMapOfShapeTool)


IMPLEMENT_DOWNCAST(BRepTopAdaptor_DataMapNodeOfMapOfShapeTool,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepTopAdaptor_DataMapNodeOfMapOfShapeTool)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem BRepTopAdaptor_Tool
#define TheItem_hxx <BRepTopAdaptor_Tool.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepTopAdaptor_DataMapNodeOfMapOfShapeTool
#define TCollection_DataMapNode_hxx <BRepTopAdaptor_DataMapNodeOfMapOfShapeTool.hxx>
#define TCollection_DataMapIterator BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool
#define TCollection_DataMapIterator_hxx <BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepTopAdaptor_DataMapNodeOfMapOfShapeTool
#define TCollection_DataMapNode_Type_() BRepTopAdaptor_DataMapNodeOfMapOfShapeTool_Type_()
#define TCollection_DataMap BRepTopAdaptor_MapOfShapeTool
#define TCollection_DataMap_hxx <BRepTopAdaptor_MapOfShapeTool.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

