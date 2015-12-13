// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <TopoDS_Edge.hxx>
#include <Draft_EdgeInfo.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <Draft_DataMapOfEdgeEdgeInfo.hxx>
#include <Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo.hxx>

 


IMPLEMENT_STANDARD_TYPE(Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo)


IMPLEMENT_DOWNCAST(Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo)


#define TheKey TopoDS_Edge
#define TheKey_hxx <TopoDS_Edge.hxx>
#define TheItem Draft_EdgeInfo
#define TheItem_hxx <Draft_EdgeInfo.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo
#define TCollection_DataMapNode_hxx <Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo.hxx>
#define TCollection_DataMapIterator Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo
#define TCollection_DataMapIterator_hxx <Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo.hxx>
#define Handle_TCollection_DataMapNode Handle_Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo
#define TCollection_DataMapNode_Type_() Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo_Type_()
#define TCollection_DataMap Draft_DataMapOfEdgeEdgeInfo
#define TCollection_DataMap_hxx <Draft_DataMapOfEdgeEdgeInfo.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

