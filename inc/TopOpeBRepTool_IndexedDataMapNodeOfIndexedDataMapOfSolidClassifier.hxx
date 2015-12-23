// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier_HeaderFile
#define _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/BRepClass3d/BRepClass3d_SolidClassifier.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TopoDS_Shape;
class BRepClass3d_SolidClassifier;
class TopTools_ShapeMapHasher;
class TopOpeBRepTool_IndexedDataMapOfSolidClassifier;



class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier : public TCollection_MapNode
{

public:

  
    TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier(const TopoDS_Shape& K1, const Standard_Integer K2, const BRepClass3d_SolidClassifier& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      BRepClass3d_SolidClassifier& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  BRepClass3d_SolidClassifier myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem BRepClass3d_SolidClassifier
#define TheItem_hxx <ModelingAlgorithms/BRepClass3d/BRepClass3d_SolidClassifier.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier
#define TCollection_IndexedDataMapNode_hxx <TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier
#define TCollection_IndexedDataMapNode_Type_() TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier_Type_()
#define TCollection_IndexedDataMap TopOpeBRepTool_IndexedDataMapOfSolidClassifier
#define TCollection_IndexedDataMap_hxx <TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx>

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




#endif // _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier_HeaderFile
