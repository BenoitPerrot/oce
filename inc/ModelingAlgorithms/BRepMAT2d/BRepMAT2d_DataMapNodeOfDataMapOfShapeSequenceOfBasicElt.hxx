// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt_HeaderFile
#define _BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepMAT2d/Handle_BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/MAT/MAT_SequenceOfBasicElt.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class MAT_SequenceOfBasicElt;
class TopTools_ShapeMapHasher;
class BRepMAT2d_DataMapOfShapeSequenceOfBasicElt;
class BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt;



class BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt : public TCollection_MapNode
{

public:

  
    BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt(const TopoDS_Shape& K, const MAT_SequenceOfBasicElt& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      MAT_SequenceOfBasicElt& Value()  const;




  DEFINE_STANDARD_RTTI(BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt)

protected:




private: 


  TopoDS_Shape myKey;
  MAT_SequenceOfBasicElt myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem MAT_SequenceOfBasicElt
#define TheItem_hxx <ModelingAlgorithms/MAT/MAT_SequenceOfBasicElt.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/BRepMAT2d/BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt.hxx>
#define TCollection_DataMapIterator BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/BRepMAT2d/BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt
#define TCollection_DataMapNode_Type_() BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt_Type_()
#define TCollection_DataMap BRepMAT2d_DataMapOfShapeSequenceOfBasicElt
#define TCollection_DataMap_hxx <ModelingAlgorithms/BRepMAT2d/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx>

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




#endif // _BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt_HeaderFile
