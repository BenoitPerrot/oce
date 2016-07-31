// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_HeaderFile
#define _BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepFill/Handle_BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class BRepFill_IndexedDataMapOfOrientedShapeListOfShape;



class BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape : public TCollection_MapNode
{

public:

  
    BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape(const TopoDS_Shape& K1, const Standard_Integer K2, const TopTools_ListOfShape& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      TopTools_ListOfShape& Value()  const;




  DEFINE_STANDARD_RTTI(BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  TopTools_ListOfShape myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TopTools_ListOfShape
#define TheItem_hxx <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape
#define TCollection_IndexedDataMapNode_hxx <ModelingAlgorithms/BRepFill/BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape
#define TCollection_IndexedDataMapNode_Type_() BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_Type_()
#define TCollection_IndexedDataMap BRepFill_IndexedDataMapOfOrientedShapeListOfShape
#define TCollection_IndexedDataMap_hxx <ModelingAlgorithms/BRepFill/BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx>

#include <Foundation/TCollection/TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_HeaderFile
