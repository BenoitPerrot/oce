// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_IndexedMapNodeOfIndexedMapOfShape_HeaderFile
#define _TopTools_IndexedMapNodeOfIndexedMapOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingData/TopTools/Handle_TopTools_IndexedMapNodeOfIndexedMapOfShape.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_IndexedMapOfShape;



class TopTools_IndexedMapNodeOfIndexedMapOfShape : public TCollection_MapNode
{

public:

  
    TopTools_IndexedMapNodeOfIndexedMapOfShape(const TopoDS_Shape& K1, const Standard_Integer K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(TopTools_IndexedMapNodeOfIndexedMapOfShape)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedMapNode TopTools_IndexedMapNodeOfIndexedMapOfShape
#define TCollection_IndexedMapNode_hxx <ModelingData/TopTools/TopTools_IndexedMapNodeOfIndexedMapOfShape.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TopTools_IndexedMapNodeOfIndexedMapOfShape
#define TCollection_IndexedMapNode_Type_() TopTools_IndexedMapNodeOfIndexedMapOfShape_Type_()
#define TCollection_IndexedMap TopTools_IndexedMapOfShape
#define TCollection_IndexedMap_hxx <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>

#include <Foundation/TCollection/TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx




#endif // _TopTools_IndexedMapNodeOfIndexedMapOfShape_HeaderFile
