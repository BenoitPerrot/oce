// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient_HeaderFile
#define _Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Transfer_Binder.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class Standard_Transient;
class Transfer_Binder;
class TColStd_MapTransientHasher;
class Transfer_TransferMapOfProcessForTransient;



class Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient : public TCollection_MapNode
{

public:

  
    Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient(const Handle(Standard_Transient)& K1, const Standard_Integer K2, const Handle(Transfer_Binder)& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Standard_Transient)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      Handle(Transfer_Binder)& Value()  const;




  DEFINE_STANDARD_RTTI(Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient)

protected:




private: 


  Handle(Standard_Transient) myKey1;
  Standard_Integer myKey2;
  Handle(Transfer_Binder) myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Handle(Standard_Transient)
#define TheKey_hxx <Foundation/Standard/Standard_Transient.hxx>
#define TheItem Handle(Transfer_Binder)
#define TheItem_hxx <Transfer_Binder.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedDataMapNode Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient
#define TCollection_IndexedDataMapNode_hxx <Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient
#define TCollection_IndexedDataMapNode_Type_() Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient_Type_()
#define TCollection_IndexedDataMap Transfer_TransferMapOfProcessForTransient
#define TCollection_IndexedDataMap_hxx <Transfer_TransferMapOfProcessForTransient.hxx>

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




#endif // _Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient_HeaderFile
