// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_FaceData.hxx>
#include <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DataMapOfShapeFaceData.hxx>
#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx>

 


IMPLEMENT_STANDARD_TYPE(HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData)


IMPLEMENT_DOWNCAST(HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem HLRTopoBRep_FaceData
#define TheItem_hxx <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_FaceData.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData.hxx>
#define TCollection_DataMapIterator HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx>
#define Handle_TCollection_DataMapNode Handle_HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData
#define TCollection_DataMapNode_Type_() HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData_Type_()
#define TCollection_DataMap HLRTopoBRep_DataMapOfShapeFaceData
#define TCollection_DataMap_hxx <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DataMapOfShapeFaceData.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

