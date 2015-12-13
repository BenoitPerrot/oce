// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_DataMapNodeOfDataMapOfStyleShape_HeaderFile
#define _XCAFPrs_DataMapNodeOfDataMapOfStyleShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_XCAFPrs_DataMapNodeOfDataMapOfStyleShape.hxx>

#include <XCAFPrs_Style.hxx>
#include <TopoDS_Shape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class XCAFPrs_Style;
class TopoDS_Shape;
class XCAFPrs_DataMapOfStyleShape;
class XCAFPrs_DataMapIteratorOfDataMapOfStyleShape;



class XCAFPrs_DataMapNodeOfDataMapOfStyleShape : public TCollection_MapNode
{

public:

  
    XCAFPrs_DataMapNodeOfDataMapOfStyleShape(const XCAFPrs_Style& K, const TopoDS_Shape& I, const TCollection_MapNodePtr& n);
  
      XCAFPrs_Style& Key()  const;
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(XCAFPrs_DataMapNodeOfDataMapOfStyleShape)

protected:




private: 


  XCAFPrs_Style myKey;
  TopoDS_Shape myValue;


};

#define TheKey XCAFPrs_Style
#define TheKey_hxx <XCAFPrs_Style.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <TopoDS_Shape.hxx>
#define Hasher XCAFPrs_Style
#define Hasher_hxx <XCAFPrs_Style.hxx>
#define TCollection_DataMapNode XCAFPrs_DataMapNodeOfDataMapOfStyleShape
#define TCollection_DataMapNode_hxx <XCAFPrs_DataMapNodeOfDataMapOfStyleShape.hxx>
#define TCollection_DataMapIterator XCAFPrs_DataMapIteratorOfDataMapOfStyleShape
#define TCollection_DataMapIterator_hxx <XCAFPrs_DataMapIteratorOfDataMapOfStyleShape.hxx>
#define Handle_TCollection_DataMapNode Handle_XCAFPrs_DataMapNodeOfDataMapOfStyleShape
#define TCollection_DataMapNode_Type_() XCAFPrs_DataMapNodeOfDataMapOfStyleShape_Type_()
#define TCollection_DataMap XCAFPrs_DataMapOfStyleShape
#define TCollection_DataMap_hxx <XCAFPrs_DataMapOfStyleShape.hxx>

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




#endif // _XCAFPrs_DataMapNodeOfDataMapOfStyleShape_HeaderFile
