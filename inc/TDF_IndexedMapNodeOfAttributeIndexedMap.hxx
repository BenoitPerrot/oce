// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_IndexedMapNodeOfAttributeIndexedMap_HeaderFile
#define _TDF_IndexedMapNodeOfAttributeIndexedMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDF_IndexedMapNodeOfAttributeIndexedMap.hxx>

#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_AttributeIndexedMap;



class TDF_IndexedMapNodeOfAttributeIndexedMap : public TCollection_MapNode
{

public:

  
    TDF_IndexedMapNodeOfAttributeIndexedMap(const Handle(TDF_Attribute)& K1, const Standard_Integer K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(TDF_Attribute)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(TDF_IndexedMapNodeOfAttributeIndexedMap)

protected:




private: 


  Handle(TDF_Attribute) myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Handle(TDF_Attribute)
#define TheKey_hxx <TDF_Attribute.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedMapNode TDF_IndexedMapNodeOfAttributeIndexedMap
#define TCollection_IndexedMapNode_hxx <TDF_IndexedMapNodeOfAttributeIndexedMap.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TDF_IndexedMapNodeOfAttributeIndexedMap
#define TCollection_IndexedMapNode_Type_() TDF_IndexedMapNodeOfAttributeIndexedMap_Type_()
#define TCollection_IndexedMap TDF_AttributeIndexedMap
#define TCollection_IndexedMap_hxx <TDF_AttributeIndexedMap.hxx>

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




#endif // _TDF_IndexedMapNodeOfAttributeIndexedMap_HeaderFile
