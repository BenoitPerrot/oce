// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDF_DoubleMapNodeOfTypeIdMap_HeaderFile
#define _BinMDF_DoubleMapNodeOfTypeIdMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BinMDF_DoubleMapNodeOfTypeIdMap.hxx>

#include <Handle_Standard_Type.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class Standard_Type;
class TColStd_MapTransientHasher;
class TColStd_MapIntegerHasher;
class BinMDF_TypeIdMap;
class BinMDF_DoubleMapIteratorOfTypeIdMap;



class BinMDF_DoubleMapNodeOfTypeIdMap : public TCollection_MapNode
{

public:

  
    BinMDF_DoubleMapNodeOfTypeIdMap(const Handle(Standard_Type)& K1, const Standard_Integer& K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Standard_Type)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(BinMDF_DoubleMapNodeOfTypeIdMap)

protected:




private: 


  Handle(Standard_Type) myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey1 Handle(Standard_Type)
#define TheKey1_hxx <Foundation/Standard/Standard_Type.hxx>
#define TheKey2 Standard_Integer
#define TheKey2_hxx <Foundation/Standard/Standard_Integer.hxx>
#define Hasher1 TColStd_MapTransientHasher
#define Hasher1_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define Hasher2 TColStd_MapIntegerHasher
#define Hasher2_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DoubleMapNode BinMDF_DoubleMapNodeOfTypeIdMap
#define TCollection_DoubleMapNode_hxx <BinMDF_DoubleMapNodeOfTypeIdMap.hxx>
#define TCollection_DoubleMapIterator BinMDF_DoubleMapIteratorOfTypeIdMap
#define TCollection_DoubleMapIterator_hxx <BinMDF_DoubleMapIteratorOfTypeIdMap.hxx>
#define Handle_TCollection_DoubleMapNode Handle_BinMDF_DoubleMapNodeOfTypeIdMap
#define TCollection_DoubleMapNode_Type_() BinMDF_DoubleMapNodeOfTypeIdMap_Type_()
#define TCollection_DoubleMap BinMDF_TypeIdMap
#define TCollection_DoubleMap_hxx <BinMDF_TypeIdMap.hxx>

#include <Foundation/TCollection/TCollection_DoubleMapNode.lxx>

#undef TheKey1
#undef TheKey1_hxx
#undef TheKey2
#undef TheKey2_hxx
#undef Hasher1
#undef Hasher1_hxx
#undef Hasher2
#undef Hasher2_hxx
#undef TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_hxx
#undef TCollection_DoubleMapIterator
#undef TCollection_DoubleMapIterator_hxx
#undef Handle_TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_Type_
#undef TCollection_DoubleMap
#undef TCollection_DoubleMap_hxx




#endif // _BinMDF_DoubleMapNodeOfTypeIdMap_HeaderFile
