// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <LocOpe_DataMapOfShapePnt.hxx>
#include <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>

 


IMPLEMENT_STANDARD_TYPE(LocOpe_DataMapNodeOfDataMapOfShapePnt)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(LocOpe_DataMapNodeOfDataMapOfShapePnt)


IMPLEMENT_DOWNCAST(LocOpe_DataMapNodeOfDataMapOfShapePnt,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(LocOpe_DataMapNodeOfDataMapOfShapePnt)


#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem gp_Pnt
#define TheItem_hxx <gp_Pnt.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode LocOpe_DataMapNodeOfDataMapOfShapePnt
#define TCollection_DataMapNode_hxx <LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>
#define TCollection_DataMapIterator LocOpe_DataMapIteratorOfDataMapOfShapePnt
#define TCollection_DataMapIterator_hxx <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#define Handle_TCollection_DataMapNode Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt
#define TCollection_DataMapNode_Type_() LocOpe_DataMapNodeOfDataMapOfShapePnt_Type_()
#define TCollection_DataMap LocOpe_DataMapOfShapePnt
#define TCollection_DataMap_hxx <LocOpe_DataMapOfShapePnt.hxx>
#include <TCollection_DataMapNode.gxx>

