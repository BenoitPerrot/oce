// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_DataMapNodeOfDataMapOfShapeResult_HeaderFile
#define _BRepCheck_DataMapNodeOfDataMapOfShapeResult_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepCheck_DataMapNodeOfDataMapOfShapeResult.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Handle_BRepCheck_Result.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class BRepCheck_Result;
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class BRepCheck_DataMapOfShapeResult;
class BRepCheck_DataMapIteratorOfDataMapOfShapeResult;



class BRepCheck_DataMapNodeOfDataMapOfShapeResult : public TCollection_MapNode
{

public:

  
    BRepCheck_DataMapNodeOfDataMapOfShapeResult(const TopoDS_Shape& K, const Handle(BRepCheck_Result)& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      Handle(BRepCheck_Result)& Value()  const;




  DEFINE_STANDARD_RTTI(BRepCheck_DataMapNodeOfDataMapOfShapeResult)

protected:




private: 


  TopoDS_Shape myKey;
  Handle(BRepCheck_Result) myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem Handle(BRepCheck_Result)
#define TheItem_hxx <BRepCheck_Result.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepCheck_DataMapNodeOfDataMapOfShapeResult
#define TCollection_DataMapNode_hxx <BRepCheck_DataMapNodeOfDataMapOfShapeResult.hxx>
#define TCollection_DataMapIterator BRepCheck_DataMapIteratorOfDataMapOfShapeResult
#define TCollection_DataMapIterator_hxx <BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepCheck_DataMapNodeOfDataMapOfShapeResult
#define TCollection_DataMapNode_Type_() BRepCheck_DataMapNodeOfDataMapOfShapeResult_Type_()
#define TCollection_DataMap BRepCheck_DataMapOfShapeResult
#define TCollection_DataMap_hxx <BRepCheck_DataMapOfShapeResult.hxx>

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




#endif // _BRepCheck_DataMapNodeOfDataMapOfShapeResult_HeaderFile
