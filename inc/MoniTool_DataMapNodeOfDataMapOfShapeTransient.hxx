// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_DataMapNodeOfDataMapOfShapeTransient_HeaderFile
#define _MoniTool_DataMapNodeOfDataMapOfShapeTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MoniTool_DataMapNodeOfDataMapOfShapeTransient.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Standard_Transient;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class MoniTool_DataMapOfShapeTransient;
class MoniTool_DataMapIteratorOfDataMapOfShapeTransient;



class MoniTool_DataMapNodeOfDataMapOfShapeTransient : public TCollection_MapNode
{

public:

  
    MoniTool_DataMapNodeOfDataMapOfShapeTransient(const TopoDS_Shape& K, const Handle(Standard_Transient)& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      Handle(Standard_Transient)& Value()  const;




  DEFINE_STANDARD_RTTI(MoniTool_DataMapNodeOfDataMapOfShapeTransient)

protected:




private: 


  TopoDS_Shape myKey;
  Handle(Standard_Transient) myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem Handle(Standard_Transient)
#define TheItem_hxx <Foundation/Standard/Standard_Transient.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode MoniTool_DataMapNodeOfDataMapOfShapeTransient
#define TCollection_DataMapNode_hxx <MoniTool_DataMapNodeOfDataMapOfShapeTransient.hxx>
#define TCollection_DataMapIterator MoniTool_DataMapIteratorOfDataMapOfShapeTransient
#define TCollection_DataMapIterator_hxx <MoniTool_DataMapIteratorOfDataMapOfShapeTransient.hxx>
#define Handle_TCollection_DataMapNode Handle_MoniTool_DataMapNodeOfDataMapOfShapeTransient
#define TCollection_DataMapNode_Type_() MoniTool_DataMapNodeOfDataMapOfShapeTransient_Type_()
#define TCollection_DataMap MoniTool_DataMapOfShapeTransient
#define TCollection_DataMap_hxx <MoniTool_DataMapOfShapeTransient.hxx>

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




#endif // _MoniTool_DataMapNodeOfDataMapOfShapeTransient_HeaderFile
