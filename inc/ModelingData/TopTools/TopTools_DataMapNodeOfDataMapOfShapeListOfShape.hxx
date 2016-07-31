// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapNodeOfDataMapOfShapeListOfShape_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingData/TopTools/Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeListOfShape;
class TopTools_DataMapIteratorOfDataMapOfShapeListOfShape;



class TopTools_DataMapNodeOfDataMapOfShapeListOfShape : public TCollection_MapNode
{

public:

  
    TopTools_DataMapNodeOfDataMapOfShapeListOfShape(const TopoDS_Shape& K, const TopTools_ListOfShape& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TopTools_ListOfShape& Value()  const;




  DEFINE_STANDARD_RTTI(TopTools_DataMapNodeOfDataMapOfShapeListOfShape)

protected:




private: 


  TopoDS_Shape myKey;
  TopTools_ListOfShape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TopTools_ListOfShape
#define TheItem_hxx <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopTools_DataMapNodeOfDataMapOfShapeListOfShape
#define TCollection_DataMapNode_hxx <ModelingData/TopTools/TopTools_DataMapNodeOfDataMapOfShapeListOfShape.hxx>
#define TCollection_DataMapIterator TopTools_DataMapIteratorOfDataMapOfShapeListOfShape
#define TCollection_DataMapIterator_hxx <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape
#define TCollection_DataMapNode_Type_() TopTools_DataMapNodeOfDataMapOfShapeListOfShape_Type_()
#define TCollection_DataMap TopTools_DataMapOfShapeListOfShape
#define TCollection_DataMap_hxx <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>

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




#endif // _TopTools_DataMapNodeOfDataMapOfShapeListOfShape_HeaderFile
