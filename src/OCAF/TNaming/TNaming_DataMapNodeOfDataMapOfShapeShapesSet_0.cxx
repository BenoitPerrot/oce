// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TNaming_DataMapNodeOfDataMapOfShapeShapesSet.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TNaming_ShapesSet.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TNaming_DataMapOfShapeShapesSet.hxx>
#include <TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx>

 


IMPLEMENT_STANDARD_TYPE(TNaming_DataMapNodeOfDataMapOfShapeShapesSet)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TNaming_DataMapNodeOfDataMapOfShapeShapesSet)


IMPLEMENT_DOWNCAST(TNaming_DataMapNodeOfDataMapOfShapeShapesSet,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TNaming_DataMapNodeOfDataMapOfShapeShapesSet)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TNaming_ShapesSet
#define TheItem_hxx <TNaming_ShapesSet.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TNaming_DataMapNodeOfDataMapOfShapeShapesSet
#define TCollection_DataMapNode_hxx <TNaming_DataMapNodeOfDataMapOfShapeShapesSet.hxx>
#define TCollection_DataMapIterator TNaming_DataMapIteratorOfDataMapOfShapeShapesSet
#define TCollection_DataMapIterator_hxx <TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx>
#define Handle_TCollection_DataMapNode Handle_TNaming_DataMapNodeOfDataMapOfShapeShapesSet
#define TCollection_DataMapNode_Type_() TNaming_DataMapNodeOfDataMapOfShapeShapesSet_Type_()
#define TCollection_DataMap TNaming_DataMapOfShapeShapesSet
#define TCollection_DataMap_hxx <TNaming_DataMapOfShapeShapesSet.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

