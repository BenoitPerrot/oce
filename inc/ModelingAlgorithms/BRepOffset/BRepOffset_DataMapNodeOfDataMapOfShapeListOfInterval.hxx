// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval_HeaderFile
#define _BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepOffset/Handle_BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_ListOfInterval.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class BRepOffset_ListOfInterval;
class TopTools_ShapeMapHasher;
class BRepOffset_DataMapOfShapeListOfInterval;
class BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval;



class BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval : public TCollection_MapNode
{

public:

  
    BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval(const TopoDS_Shape& K, const BRepOffset_ListOfInterval& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      BRepOffset_ListOfInterval& Value()  const;




  DEFINE_STANDARD_RTTI(BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval)

protected:




private: 


  TopoDS_Shape myKey;
  BRepOffset_ListOfInterval myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem BRepOffset_ListOfInterval
#define TheItem_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_ListOfInterval.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval.hxx>
#define TCollection_DataMapIterator BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval
#define TCollection_DataMapNode_Type_() BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval_Type_()
#define TCollection_DataMap BRepOffset_DataMapOfShapeListOfInterval
#define TCollection_DataMap_hxx <ModelingAlgorithms/BRepOffset/BRepOffset_DataMapOfShapeListOfInterval.hxx>

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




#endif // _BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval_HeaderFile
