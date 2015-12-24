// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData_HeaderFile
#define _TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/Handle_TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ShapeData.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopOpeBRepDS_ShapeData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfIntegerShapeData;
class TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData;



class TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData : public TCollection_MapNode
{

public:

  
    TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData(const Standard_Integer& K, const TopOpeBRepDS_ShapeData& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      TopOpeBRepDS_ShapeData& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData)

protected:




private: 


  Standard_Integer myKey;
  TopOpeBRepDS_ShapeData myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem TopOpeBRepDS_ShapeData
#define TheItem_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ShapeData.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData.hxx>
#define TCollection_DataMapIterator TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData
#define TCollection_DataMapNode_Type_() TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData_Type_()
#define TCollection_DataMap TopOpeBRepDS_MapOfIntegerShapeData
#define TCollection_DataMap_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_MapOfIntegerShapeData.hxx>

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




#endif // _TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData_HeaderFile
