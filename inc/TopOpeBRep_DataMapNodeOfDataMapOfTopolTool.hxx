// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_DataMapNodeOfDataMapOfTopolTool_HeaderFile
#define _TopOpeBRep_DataMapNodeOfDataMapOfTopolTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRep_DataMapNodeOfDataMapOfTopolTool.hxx>

#include <TopoDS_Shape.hxx>
#include <Handle_BRepTopAdaptor_TopolTool.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class BRepTopAdaptor_TopolTool;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopOpeBRep_DataMapOfTopolTool;
class TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool;



class TopOpeBRep_DataMapNodeOfDataMapOfTopolTool : public TCollection_MapNode
{

public:

  
    TopOpeBRep_DataMapNodeOfDataMapOfTopolTool(const TopoDS_Shape& K, const Handle(BRepTopAdaptor_TopolTool)& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      Handle(BRepTopAdaptor_TopolTool)& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRep_DataMapNodeOfDataMapOfTopolTool)

protected:




private: 


  TopoDS_Shape myKey;
  Handle(BRepTopAdaptor_TopolTool) myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Handle(BRepTopAdaptor_TopolTool)
#define TheItem_hxx <BRepTopAdaptor_TopolTool.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopOpeBRep_DataMapNodeOfDataMapOfTopolTool
#define TCollection_DataMapNode_hxx <TopOpeBRep_DataMapNodeOfDataMapOfTopolTool.hxx>
#define TCollection_DataMapIterator TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool
#define TCollection_DataMapIterator_hxx <TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRep_DataMapNodeOfDataMapOfTopolTool
#define TCollection_DataMapNode_Type_() TopOpeBRep_DataMapNodeOfDataMapOfTopolTool_Type_()
#define TCollection_DataMap TopOpeBRep_DataMapOfTopolTool
#define TCollection_DataMap_hxx <TopOpeBRep_DataMapOfTopolTool.hxx>

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




#endif // _TopOpeBRep_DataMapNodeOfDataMapOfTopolTool_HeaderFile
