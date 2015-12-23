// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox_HeaderFile
#define _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TopoDS_Shape;
class Bnd_Box;
class TopTools_OrientedShapeMapHasher;
class TopOpeBRepTool_IndexedDataMapOfShapeBox;



class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox : public TCollection_MapNode
{

public:

  
    TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox(const TopoDS_Shape& K1, const Standard_Integer K2, const Bnd_Box& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      Bnd_Box& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  Bnd_Box myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem Bnd_Box
#define TheItem_hxx <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox
#define TCollection_IndexedDataMapNode_hxx <TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox
#define TCollection_IndexedDataMapNode_Type_() TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox_Type_()
#define TCollection_IndexedDataMap TopOpeBRepTool_IndexedDataMapOfShapeBox
#define TCollection_IndexedDataMap_hxx <TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx>

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




#endif // _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox_HeaderFile
