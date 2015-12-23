// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/TColStd/TColStd_ListOfReal.hxx>
#include <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#include <ShapeAnalysis_DataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx>

 


IMPLEMENT_STANDARD_TYPE(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal)


IMPLEMENT_DOWNCAST(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TColStd_ListOfReal
#define TheItem_hxx <Foundation/TColStd/TColStd_ListOfReal.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal
#define TCollection_DataMapNode_hxx <ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal.hxx>
#define TCollection_DataMapIterator ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal
#define TCollection_DataMapIterator_hxx <ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx>
#define Handle_TCollection_DataMapNode Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal
#define TCollection_DataMapNode_Type_() ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_Type_()
#define TCollection_DataMap ShapeAnalysis_DataMapOfShapeListOfReal
#define TCollection_DataMap_hxx <ShapeAnalysis_DataMapOfShapeListOfReal.hxx>
#include <Foundation/TCollection/TCollection_DataMapNode.gxx>

