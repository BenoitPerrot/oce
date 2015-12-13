// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapNodeOfDataMapOfNodeShape_HeaderFile
#define _BRepFill_DataMapNodeOfDataMapOfNodeShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepFill_DataMapNodeOfDataMapOfNodeShape.hxx>

#include <Handle_MAT_Node.hxx>
#include <TopoDS_Shape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class MAT_Node;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class BRepFill_DataMapOfNodeShape;
class BRepFill_DataMapIteratorOfDataMapOfNodeShape;



class BRepFill_DataMapNodeOfDataMapOfNodeShape : public TCollection_MapNode
{

public:

  
    BRepFill_DataMapNodeOfDataMapOfNodeShape(const Handle(MAT_Node)& K, const TopoDS_Shape& I, const TCollection_MapNodePtr& n);
  
      Handle(MAT_Node)& Key()  const;
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(BRepFill_DataMapNodeOfDataMapOfNodeShape)

protected:




private: 


  Handle(MAT_Node) myKey;
  TopoDS_Shape myValue;


};

#define TheKey Handle(MAT_Node)
#define TheKey_hxx <MAT_Node.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <TopoDS_Shape.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode BRepFill_DataMapNodeOfDataMapOfNodeShape
#define TCollection_DataMapNode_hxx <BRepFill_DataMapNodeOfDataMapOfNodeShape.hxx>
#define TCollection_DataMapIterator BRepFill_DataMapIteratorOfDataMapOfNodeShape
#define TCollection_DataMapIterator_hxx <BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepFill_DataMapNodeOfDataMapOfNodeShape
#define TCollection_DataMapNode_Type_() BRepFill_DataMapNodeOfDataMapOfNodeShape_Type_()
#define TCollection_DataMap BRepFill_DataMapOfNodeShape
#define TCollection_DataMap_hxx <BRepFill_DataMapOfNodeShape.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _BRepFill_DataMapNodeOfDataMapOfNodeShape_HeaderFile
