// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTopAdaptor_DataMapNodeOfMapOfShapeTool_HeaderFile
#define _BRepTopAdaptor_DataMapNodeOfMapOfShapeTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepTopAdaptor_DataMapNodeOfMapOfShapeTool.hxx>

#include <TopoDS_Shape.hxx>
#include <BRepTopAdaptor_Tool.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class BRepTopAdaptor_Tool;
class TopTools_ShapeMapHasher;
class BRepTopAdaptor_MapOfShapeTool;
class BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool;



class BRepTopAdaptor_DataMapNodeOfMapOfShapeTool : public TCollection_MapNode
{

public:

  
    BRepTopAdaptor_DataMapNodeOfMapOfShapeTool(const TopoDS_Shape& K, const BRepTopAdaptor_Tool& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      BRepTopAdaptor_Tool& Value()  const;




  DEFINE_STANDARD_RTTI(BRepTopAdaptor_DataMapNodeOfMapOfShapeTool)

protected:




private: 


  TopoDS_Shape myKey;
  BRepTopAdaptor_Tool myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem BRepTopAdaptor_Tool
#define TheItem_hxx <BRepTopAdaptor_Tool.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepTopAdaptor_DataMapNodeOfMapOfShapeTool
#define TCollection_DataMapNode_hxx <BRepTopAdaptor_DataMapNodeOfMapOfShapeTool.hxx>
#define TCollection_DataMapIterator BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool
#define TCollection_DataMapIterator_hxx <BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepTopAdaptor_DataMapNodeOfMapOfShapeTool
#define TCollection_DataMapNode_Type_() BRepTopAdaptor_DataMapNodeOfMapOfShapeTool_Type_()
#define TCollection_DataMap BRepTopAdaptor_MapOfShapeTool
#define TCollection_DataMap_hxx <BRepTopAdaptor_MapOfShapeTool.hxx>

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




#endif // _BRepTopAdaptor_DataMapNodeOfMapOfShapeTool_HeaderFile
