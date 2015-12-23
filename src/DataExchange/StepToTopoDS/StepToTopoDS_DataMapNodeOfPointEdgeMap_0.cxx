// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <DataExchange/StepToTopoDS/StepToTopoDS_DataMapNodeOfPointEdgeMap.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <DataExchange/StepToTopoDS/StepToTopoDS_PointPair.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <DataExchange/StepToTopoDS/StepToTopoDS_PointPairHasher.hxx>
#include <DataExchange/StepToTopoDS/StepToTopoDS_PointEdgeMap.hxx>
#include <DataExchange/StepToTopoDS/StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx>

 


IMPLEMENT_STANDARD_TYPE(StepToTopoDS_DataMapNodeOfPointEdgeMap)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepToTopoDS_DataMapNodeOfPointEdgeMap)


IMPLEMENT_DOWNCAST(StepToTopoDS_DataMapNodeOfPointEdgeMap,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepToTopoDS_DataMapNodeOfPointEdgeMap)


#define TheKey StepToTopoDS_PointPair
#define TheKey_hxx <DataExchange/StepToTopoDS/StepToTopoDS_PointPair.hxx>
#define TheItem TopoDS_Edge
#define TheItem_hxx <ModelingData/TopoDS/TopoDS_Edge.hxx>
#define Hasher StepToTopoDS_PointPairHasher
#define Hasher_hxx <DataExchange/StepToTopoDS/StepToTopoDS_PointPairHasher.hxx>
#define TCollection_DataMapNode StepToTopoDS_DataMapNodeOfPointEdgeMap
#define TCollection_DataMapNode_hxx <DataExchange/StepToTopoDS/StepToTopoDS_DataMapNodeOfPointEdgeMap.hxx>
#define TCollection_DataMapIterator StepToTopoDS_DataMapIteratorOfPointEdgeMap
#define TCollection_DataMapIterator_hxx <DataExchange/StepToTopoDS/StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx>
#define Handle_TCollection_DataMapNode Handle_StepToTopoDS_DataMapNodeOfPointEdgeMap
#define TCollection_DataMapNode_Type_() StepToTopoDS_DataMapNodeOfPointEdgeMap_Type_()
#define TCollection_DataMap StepToTopoDS_PointEdgeMap
#define TCollection_DataMap_hxx <DataExchange/StepToTopoDS/StepToTopoDS_PointEdgeMap.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

