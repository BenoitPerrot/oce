// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapNodeOfDataMapOfShapePD_HeaderFile
#define _STEPCAFControl_DataMapNodeOfDataMapOfShapePD_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapePD.hxx>

#include <TopoDS_Shape.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class StepBasic_ProductDefinition;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class STEPCAFControl_DataMapOfShapePD;
class STEPCAFControl_DataMapIteratorOfDataMapOfShapePD;



class STEPCAFControl_DataMapNodeOfDataMapOfShapePD : public TCollection_MapNode
{

public:

  
    STEPCAFControl_DataMapNodeOfDataMapOfShapePD(const TopoDS_Shape& K, const Handle(StepBasic_ProductDefinition)& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      Handle(StepBasic_ProductDefinition)& Value()  const;




  DEFINE_STANDARD_RTTI(STEPCAFControl_DataMapNodeOfDataMapOfShapePD)

protected:




private: 


  TopoDS_Shape myKey;
  Handle(StepBasic_ProductDefinition) myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Handle(StepBasic_ProductDefinition)
#define TheItem_hxx <StepBasic_ProductDefinition.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode STEPCAFControl_DataMapNodeOfDataMapOfShapePD
#define TCollection_DataMapNode_hxx <STEPCAFControl_DataMapNodeOfDataMapOfShapePD.hxx>
#define TCollection_DataMapIterator STEPCAFControl_DataMapIteratorOfDataMapOfShapePD
#define TCollection_DataMapIterator_hxx <STEPCAFControl_DataMapIteratorOfDataMapOfShapePD.hxx>
#define Handle_TCollection_DataMapNode Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapePD
#define TCollection_DataMapNode_Type_() STEPCAFControl_DataMapNodeOfDataMapOfShapePD_Type_()
#define TCollection_DataMap STEPCAFControl_DataMapOfShapePD
#define TCollection_DataMap_hxx <STEPCAFControl_DataMapOfShapePD.hxx>

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




#endif // _STEPCAFControl_DataMapNodeOfDataMapOfShapePD_HeaderFile
