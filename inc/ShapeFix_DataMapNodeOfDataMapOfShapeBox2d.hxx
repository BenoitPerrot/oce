// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_DataMapNodeOfDataMapOfShapeBox2d_HeaderFile
#define _ShapeFix_DataMapNodeOfDataMapOfShapeBox2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ShapeFix_DataMapNodeOfDataMapOfShapeBox2d.hxx>

#include <TopoDS_Shape.hxx>
#include <Bnd_Box2d.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class Bnd_Box2d;
class TopTools_ShapeMapHasher;
class ShapeFix_DataMapOfShapeBox2d;
class ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d;



class ShapeFix_DataMapNodeOfDataMapOfShapeBox2d : public TCollection_MapNode
{

public:

  
    ShapeFix_DataMapNodeOfDataMapOfShapeBox2d(const TopoDS_Shape& K, const Bnd_Box2d& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      Bnd_Box2d& Value()  const;




  DEFINE_STANDARD_RTTI(ShapeFix_DataMapNodeOfDataMapOfShapeBox2d)

protected:




private: 


  TopoDS_Shape myKey;
  Bnd_Box2d myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Bnd_Box2d
#define TheItem_hxx <Bnd_Box2d.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode ShapeFix_DataMapNodeOfDataMapOfShapeBox2d
#define TCollection_DataMapNode_hxx <ShapeFix_DataMapNodeOfDataMapOfShapeBox2d.hxx>
#define TCollection_DataMapIterator ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d
#define TCollection_DataMapIterator_hxx <ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx>
#define Handle_TCollection_DataMapNode Handle_ShapeFix_DataMapNodeOfDataMapOfShapeBox2d
#define TCollection_DataMapNode_Type_() ShapeFix_DataMapNodeOfDataMapOfShapeBox2d_Type_()
#define TCollection_DataMap ShapeFix_DataMapOfShapeBox2d
#define TCollection_DataMap_hxx <ShapeFix_DataMapOfShapeBox2d.hxx>

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




#endif // _ShapeFix_DataMapNodeOfDataMapOfShapeBox2d_HeaderFile
