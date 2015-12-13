// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF_HeaderFile
#define _TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF.hxx>

#include <TopoDS_Shape.hxx>
#include <TopOpeBRepTool_ListOfC2DF.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopOpeBRepTool_ListOfC2DF;
class TopTools_ShapeMapHasher;
class TopOpeBRepTool_DataMapOfShapeListOfC2DF;
class TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF;



class TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF : public TCollection_MapNode
{

public:

  
    TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF(const TopoDS_Shape& K, const TopOpeBRepTool_ListOfC2DF& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TopOpeBRepTool_ListOfC2DF& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF)

protected:




private: 


  TopoDS_Shape myKey;
  TopOpeBRepTool_ListOfC2DF myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopOpeBRepTool_ListOfC2DF
#define TheItem_hxx <TopOpeBRepTool_ListOfC2DF.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF
#define TCollection_DataMapNode_hxx <TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF.hxx>
#define TCollection_DataMapIterator TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF
#define TCollection_DataMapIterator_hxx <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF
#define TCollection_DataMapNode_Type_() TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF_Type_()
#define TCollection_DataMap TopOpeBRepTool_DataMapOfShapeListOfC2DF
#define TCollection_DataMap_hxx <TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx>

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




#endif // _TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF_HeaderFile
