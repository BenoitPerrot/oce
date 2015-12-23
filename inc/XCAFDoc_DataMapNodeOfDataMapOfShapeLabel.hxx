// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_DataMapNodeOfDataMapOfShapeLabel_HeaderFile
#define _XCAFDoc_DataMapNodeOfDataMapOfShapeLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_XCAFDoc_DataMapNodeOfDataMapOfShapeLabel.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TDF_Label.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TDF_Label;
class TopTools_ShapeMapHasher;
class XCAFDoc_DataMapOfShapeLabel;
class XCAFDoc_DataMapIteratorOfDataMapOfShapeLabel;



class XCAFDoc_DataMapNodeOfDataMapOfShapeLabel : public TCollection_MapNode
{

public:

  
    XCAFDoc_DataMapNodeOfDataMapOfShapeLabel(const TopoDS_Shape& K, const TDF_Label& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      TDF_Label& Value()  const;




  DEFINE_STANDARD_RTTI(XCAFDoc_DataMapNodeOfDataMapOfShapeLabel)

protected:




private: 


  TopoDS_Shape myKey;
  TDF_Label myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem TDF_Label
#define TheItem_hxx <TDF_Label.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode XCAFDoc_DataMapNodeOfDataMapOfShapeLabel
#define TCollection_DataMapNode_hxx <XCAFDoc_DataMapNodeOfDataMapOfShapeLabel.hxx>
#define TCollection_DataMapIterator XCAFDoc_DataMapIteratorOfDataMapOfShapeLabel
#define TCollection_DataMapIterator_hxx <XCAFDoc_DataMapIteratorOfDataMapOfShapeLabel.hxx>
#define Handle_TCollection_DataMapNode Handle_XCAFDoc_DataMapNodeOfDataMapOfShapeLabel
#define TCollection_DataMapNode_Type_() XCAFDoc_DataMapNodeOfDataMapOfShapeLabel_Type_()
#define TCollection_DataMap XCAFDoc_DataMapOfShapeLabel
#define TCollection_DataMap_hxx <XCAFDoc_DataMapOfShapeLabel.hxx>

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




#endif // _XCAFDoc_DataMapNodeOfDataMapOfShapeLabel_HeaderFile
