// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile
#define _BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape.hxx>

#include <Handle_MAT_Node.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class MAT_Node;
class TopTools_DataMapOfShapeShape;
class TColStd_MapTransientHasher;
class BRepFill_DataMapOfNodeDataMapOfShapeShape;
class BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape;



class BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape : public TCollection_MapNode
{

public:

  
    BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape(const Handle(MAT_Node)& K, const TopTools_DataMapOfShapeShape& I, const TCollection_MapNodePtr& n);
  
      Handle(MAT_Node)& Key()  const;
  
      TopTools_DataMapOfShapeShape& Value()  const;




  DEFINE_STANDARD_RTTI(BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape)

protected:




private: 


  Handle(MAT_Node) myKey;
  TopTools_DataMapOfShapeShape myValue;


};

#define TheKey Handle(MAT_Node)
#define TheKey_hxx <MAT_Node.hxx>
#define TheItem TopTools_DataMapOfShapeShape
#define TheItem_hxx <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMapNode_hxx <BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape.hxx>
#define TCollection_DataMapIterator BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMapIterator_hxx <BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMapNode_Type_() BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_Type_()
#define TCollection_DataMap BRepFill_DataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMap_hxx <BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx>

#include <Foundation/TCollection/TCollection_DataMapNode.lxx>

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




#endif // _BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile
