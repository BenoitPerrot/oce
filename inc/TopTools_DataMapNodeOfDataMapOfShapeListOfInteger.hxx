// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapNodeOfDataMapOfShapeListOfInteger_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeListOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfInteger.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/TColStd/TColStd_ListOfInteger.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TColStd_ListOfInteger;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeListOfInteger;
class TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger;



class TopTools_DataMapNodeOfDataMapOfShapeListOfInteger : public TCollection_MapNode
{

public:

  
    TopTools_DataMapNodeOfDataMapOfShapeListOfInteger(const TopoDS_Shape& K, const TColStd_ListOfInteger& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TColStd_ListOfInteger& Value()  const;




  DEFINE_STANDARD_RTTI(TopTools_DataMapNodeOfDataMapOfShapeListOfInteger)

protected:




private: 


  TopoDS_Shape myKey;
  TColStd_ListOfInteger myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TColStd_ListOfInteger
#define TheItem_hxx <Foundation/TColStd/TColStd_ListOfInteger.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopTools_DataMapNodeOfDataMapOfShapeListOfInteger
#define TCollection_DataMapNode_hxx <TopTools_DataMapNodeOfDataMapOfShapeListOfInteger.hxx>
#define TCollection_DataMapIterator TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger
#define TCollection_DataMapIterator_hxx <TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfInteger
#define TCollection_DataMapNode_Type_() TopTools_DataMapNodeOfDataMapOfShapeListOfInteger_Type_()
#define TCollection_DataMap TopTools_DataMapOfShapeListOfInteger
#define TCollection_DataMap_hxx <TopTools_DataMapOfShapeListOfInteger.hxx>

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




#endif // _TopTools_DataMapNodeOfDataMapOfShapeListOfInteger_HeaderFile
