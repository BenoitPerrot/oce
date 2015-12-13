// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TNaming_DataMapNodeOfDataMapOfShapePtrRefShape.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <TopoDS_Shape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TNaming_DataMapOfShapePtrRefShape.hxx>
#include <TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(TNaming_DataMapNodeOfDataMapOfShapePtrRefShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TNaming_DataMapNodeOfDataMapOfShapePtrRefShape)


IMPLEMENT_DOWNCAST(TNaming_DataMapNodeOfDataMapOfShapePtrRefShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TNaming_DataMapNodeOfDataMapOfShapePtrRefShape)


#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TNaming_PtrRefShape
#define TheItem_hxx <TNaming_PtrRefShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TNaming_DataMapNodeOfDataMapOfShapePtrRefShape
#define TCollection_DataMapNode_hxx <TNaming_DataMapNodeOfDataMapOfShapePtrRefShape.hxx>
#define TCollection_DataMapIterator TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape
#define TCollection_DataMapIterator_hxx <TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TNaming_DataMapNodeOfDataMapOfShapePtrRefShape
#define TCollection_DataMapNode_Type_() TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_Type_()
#define TCollection_DataMap TNaming_DataMapOfShapePtrRefShape
#define TCollection_DataMap_hxx <TNaming_DataMapOfShapePtrRefShape.hxx>
#include <TCollection_DataMapNode.gxx>

