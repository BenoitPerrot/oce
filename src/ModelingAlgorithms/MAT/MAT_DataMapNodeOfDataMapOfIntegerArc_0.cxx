// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/MAT/MAT_DataMapNodeOfDataMapOfIntegerArc.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingAlgorithms/MAT/MAT_Arc.hxx>
#include <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#include <ModelingAlgorithms/MAT/MAT_DataMapOfIntegerArc.hxx>
#include <ModelingAlgorithms/MAT/MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>

 


IMPLEMENT_STANDARD_TYPE(MAT_DataMapNodeOfDataMapOfIntegerArc)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MAT_DataMapNodeOfDataMapOfIntegerArc)


IMPLEMENT_DOWNCAST(MAT_DataMapNodeOfDataMapOfIntegerArc,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MAT_DataMapNodeOfDataMapOfIntegerArc)


#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Handle(MAT_Arc)
#define TheItem_hxx <ModelingAlgorithms/MAT/MAT_Arc.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT_DataMapNodeOfDataMapOfIntegerArc
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/MAT/MAT_DataMapNodeOfDataMapOfIntegerArc.hxx>
#define TCollection_DataMapIterator MAT_DataMapIteratorOfDataMapOfIntegerArc
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/MAT/MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT_DataMapNodeOfDataMapOfIntegerArc
#define TCollection_DataMapNode_Type_() MAT_DataMapNodeOfDataMapOfIntegerArc_Type_()
#define TCollection_DataMap MAT_DataMapOfIntegerArc
#define TCollection_DataMap_hxx <ModelingAlgorithms/MAT/MAT_DataMapOfIntegerArc.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

