// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape_HeaderFile
#define _BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepOffset/Handle_BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopTools_MapOfShape;
class TopTools_ShapeMapHasher;
class BRepOffset_DataMapOfShapeMapOfShape;
class BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape;



class BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape : public TCollection_MapNode
{

public:

  
    BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape(const TopoDS_Shape& K, const TopTools_MapOfShape& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TopTools_MapOfShape& Value()  const;




  DEFINE_STANDARD_RTTI(BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape)

protected:




private: 


  TopoDS_Shape myKey;
  TopTools_MapOfShape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TopTools_MapOfShape
#define TheItem_hxx <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.hxx>
#define TCollection_DataMapIterator BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape
#define TCollection_DataMapNode_Type_() BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape_Type_()
#define TCollection_DataMap BRepOffset_DataMapOfShapeMapOfShape
#define TCollection_DataMap_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapOfShapeMapOfShape.hxx>

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




#endif // _BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape_HeaderFile
