// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData_HeaderFile
#define _TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData.hxx>

#include <TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class TopoDS_Shape;
class TopOpeBRepDS_ShapeData;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_MapOfShapeData;



class TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData : public TCollection_MapNode
{

public:

  
    TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData(const TopoDS_Shape& K1, const Standard_Integer K2, const TopOpeBRepDS_ShapeData& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      TopOpeBRepDS_ShapeData& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  TopOpeBRepDS_ShapeData myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopOpeBRepDS_ShapeData
#define TheItem_hxx <TopOpeBRepDS_ShapeData.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData
#define TCollection_IndexedDataMapNode_hxx <TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData
#define TCollection_IndexedDataMapNode_Type_() TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData_Type_()
#define TCollection_IndexedDataMap TopOpeBRepDS_MapOfShapeData
#define TCollection_IndexedDataMap_hxx <TopOpeBRepDS_MapOfShapeData.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

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




#endif // _TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData_HeaderFile
