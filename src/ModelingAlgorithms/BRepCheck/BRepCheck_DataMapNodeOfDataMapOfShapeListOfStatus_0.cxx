// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <BRepCheck_ListOfStatus.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <BRepCheck_DataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx>

 


IMPLEMENT_STANDARD_TYPE(BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus)


IMPLEMENT_DOWNCAST(BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem BRepCheck_ListOfStatus
#define TheItem_hxx <BRepCheck_ListOfStatus.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus
#define TCollection_DataMapNode_hxx <BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus.hxx>
#define TCollection_DataMapIterator BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus
#define TCollection_DataMapIterator_hxx <BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus
#define TCollection_DataMapNode_Type_() BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus_Type_()
#define TCollection_DataMap BRepCheck_DataMapOfShapeListOfStatus
#define TCollection_DataMap_hxx <BRepCheck_DataMapOfShapeListOfStatus.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

