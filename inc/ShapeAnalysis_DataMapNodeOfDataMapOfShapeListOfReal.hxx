// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_HeaderFile
#define _ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal.hxx>

#include <TopoDS_Shape.hxx>
#include <TColStd_ListOfReal.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TColStd_ListOfReal;
class TopTools_ShapeMapHasher;
class ShapeAnalysis_DataMapOfShapeListOfReal;
class ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal;



class ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal : public TCollection_MapNode
{

public:

  
    ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(const TopoDS_Shape& K, const TColStd_ListOfReal& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TColStd_ListOfReal& Value()  const;




  DEFINE_STANDARD_RTTI(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal)

protected:




private: 


  TopoDS_Shape myKey;
  TColStd_ListOfReal myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TColStd_ListOfReal
#define TheItem_hxx <TColStd_ListOfReal.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal
#define TCollection_DataMapNode_hxx <ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal.hxx>
#define TCollection_DataMapIterator ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal
#define TCollection_DataMapIterator_hxx <ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx>
#define Handle_TCollection_DataMapNode Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal
#define TCollection_DataMapNode_Type_() ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_Type_()
#define TCollection_DataMap ShapeAnalysis_DataMapOfShapeListOfReal
#define TCollection_DataMap_hxx <ShapeAnalysis_DataMapOfShapeListOfReal.hxx>

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




#endif // _ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_HeaderFile
