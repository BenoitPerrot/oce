// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Draft_DataMapNodeOfDataMapOfFaceFaceInfo.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <TopoDS_Face.hxx>
#include <Draft_FaceInfo.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <Draft_DataMapOfFaceFaceInfo.hxx>
#include <Draft_DataMapIteratorOfDataMapOfFaceFaceInfo.hxx>

 


IMPLEMENT_STANDARD_TYPE(Draft_DataMapNodeOfDataMapOfFaceFaceInfo)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Draft_DataMapNodeOfDataMapOfFaceFaceInfo)


IMPLEMENT_DOWNCAST(Draft_DataMapNodeOfDataMapOfFaceFaceInfo,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Draft_DataMapNodeOfDataMapOfFaceFaceInfo)


#define TheKey TopoDS_Face
#define TheKey_hxx <TopoDS_Face.hxx>
#define TheItem Draft_FaceInfo
#define TheItem_hxx <Draft_FaceInfo.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode Draft_DataMapNodeOfDataMapOfFaceFaceInfo
#define TCollection_DataMapNode_hxx <Draft_DataMapNodeOfDataMapOfFaceFaceInfo.hxx>
#define TCollection_DataMapIterator Draft_DataMapIteratorOfDataMapOfFaceFaceInfo
#define TCollection_DataMapIterator_hxx <Draft_DataMapIteratorOfDataMapOfFaceFaceInfo.hxx>
#define Handle_TCollection_DataMapNode Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo
#define TCollection_DataMapNode_Type_() Draft_DataMapNodeOfDataMapOfFaceFaceInfo_Type_()
#define TCollection_DataMap Draft_DataMapOfFaceFaceInfo
#define TCollection_DataMap_hxx <Draft_DataMapOfFaceFaceInfo.hxx>
#include <TCollection_DataMapNode.gxx>

