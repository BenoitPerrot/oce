// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapOfShapeMapOfShape.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape)


IMPLEMENT_DOWNCAST(BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TopTools_MapOfShape
#define TheItem_hxx <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.hxx>
#define TCollection_DataMapIterator BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape
#define TCollection_DataMapNode_Type_() BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape_Type_()
#define TCollection_DataMap BRepOffset_DataMapOfShapeMapOfShape
#define TCollection_DataMap_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapOfShapeMapOfShape.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

