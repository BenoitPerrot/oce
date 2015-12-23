// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt_HeaderFile
#define _BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TColgp_SequenceOfPnt;
class TopTools_ShapeMapHasher;
class BRepFill_DataMapOfShapeSequenceOfPnt;
class BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt;



class BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt : public TCollection_MapNode
{

public:

  
    BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt(const TopoDS_Shape& K, const TColgp_SequenceOfPnt& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TColgp_SequenceOfPnt& Value()  const;




  DEFINE_STANDARD_RTTI(BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt)

protected:




private: 


  TopoDS_Shape myKey;
  TColgp_SequenceOfPnt myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TColgp_SequenceOfPnt
#define TheItem_hxx <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt
#define TCollection_DataMapNode_hxx <BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt.hxx>
#define TCollection_DataMapIterator BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt
#define TCollection_DataMapIterator_hxx <BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt
#define TCollection_DataMapNode_Type_() BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt_Type_()
#define TCollection_DataMap BRepFill_DataMapOfShapeSequenceOfPnt
#define TCollection_DataMap_hxx <BRepFill_DataMapOfShapeSequenceOfPnt.hxx>

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




#endif // _BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt_HeaderFile
