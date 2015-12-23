// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape_HeaderFile
#define _TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TopOpeBRepBuild_ListOfShapeListOfShape.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopOpeBRepBuild_ListOfShapeListOfShape;
class TopTools_ShapeMapHasher;
class TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape;
class TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape;



class TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape : public TCollection_MapNode
{

public:

  
    TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape(const TopoDS_Shape& K, const TopOpeBRepBuild_ListOfShapeListOfShape& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TopOpeBRepBuild_ListOfShapeListOfShape& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape)

protected:




private: 


  TopoDS_Shape myKey;
  TopOpeBRepBuild_ListOfShapeListOfShape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TopOpeBRepBuild_ListOfShapeListOfShape
#define TheItem_hxx <TopOpeBRepBuild_ListOfShapeListOfShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape
#define TCollection_DataMapNode_hxx <TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape.hxx>
#define TCollection_DataMapIterator TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape
#define TCollection_DataMapIterator_hxx <TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape
#define TCollection_DataMapNode_Type_() TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape_Type_()
#define TCollection_DataMap TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape
#define TCollection_DataMap_hxx <TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx>

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




#endif // _TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape_HeaderFile
