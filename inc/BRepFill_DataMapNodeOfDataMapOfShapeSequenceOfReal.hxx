// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal_HeaderFile
#define _BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal.hxx>

#include <TopoDS_Shape.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TColStd_SequenceOfReal;
class TopTools_ShapeMapHasher;
class BRepFill_DataMapOfShapeSequenceOfReal;
class BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal;



class BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal : public TCollection_MapNode
{

public:

  
    BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal(const TopoDS_Shape& K, const TColStd_SequenceOfReal& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TColStd_SequenceOfReal& Value()  const;




  DEFINE_STANDARD_RTTI(BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal)

protected:




private: 


  TopoDS_Shape myKey;
  TColStd_SequenceOfReal myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TColStd_SequenceOfReal
#define TheItem_hxx <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal
#define TCollection_DataMapNode_hxx <BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal.hxx>
#define TCollection_DataMapIterator BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal
#define TCollection_DataMapIterator_hxx <BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal
#define TCollection_DataMapNode_Type_() BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal_Type_()
#define TCollection_DataMap BRepFill_DataMapOfShapeSequenceOfReal
#define TCollection_DataMap_hxx <BRepFill_DataMapOfShapeSequenceOfReal.hxx>

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




#endif // _BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal_HeaderFile
