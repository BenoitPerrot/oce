// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingData/TopTools/TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfOrientedShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)


IMPLEMENT_DOWNCAST(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_IndexedMapNode TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape
#define TCollection_IndexedMapNode_hxx <ModelingData/TopTools/TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape
#define TCollection_IndexedMapNode_Type_() TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape_Type_()
#define TCollection_IndexedMap TopTools_IndexedMapOfOrientedShape
#define TCollection_IndexedMap_hxx <ModelingData/TopTools/TopTools_IndexedMapOfOrientedShape.hxx>
#include <Foundation/TCollection/TCollection_IndexedMapNode.gxx>

