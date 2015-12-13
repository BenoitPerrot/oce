// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile
#define _IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class Standard_Transient;
class TColStd_MapTransientHasher;
class IntTools_IndexedDataMapOfTransientAddress;



class IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress : public TCollection_MapNode
{

public:

  
    IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress(const Handle(Standard_Transient)& K1, const Standard_Integer K2, const Standard_Address& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Standard_Transient)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      Standard_Address& Value()  const;




  DEFINE_STANDARD_RTTI(IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress)

protected:




private: 


  Handle(Standard_Transient) myKey1;
  Standard_Integer myKey2;
  Standard_Address myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Handle(Standard_Transient)
#define TheKey_hxx <Foundation/Standard/Standard_Transient.hxx>
#define TheItem Standard_Address
#define TheItem_hxx <Foundation/Standard/Standard_Address.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedDataMapNode IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress
#define TCollection_IndexedDataMapNode_hxx <IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress
#define TCollection_IndexedDataMapNode_Type_() IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_Type_()
#define TCollection_IndexedDataMap IntTools_IndexedDataMapOfTransientAddress
#define TCollection_IndexedDataMap_hxx <IntTools_IndexedDataMapOfTransientAddress.hxx>

#include <Foundation/TCollection/TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile
