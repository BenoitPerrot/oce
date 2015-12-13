// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_IndexedMapNodeOfIndexedMapOfTransient_HeaderFile
#define _TColStd_IndexedMapNodeOfIndexedMapOfTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColStd_IndexedMapNodeOfIndexedMapOfTransient.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class Standard_Transient;
class TColStd_MapTransientHasher;
class TColStd_IndexedMapOfTransient;



class TColStd_IndexedMapNodeOfIndexedMapOfTransient : public TCollection_MapNode
{

public:

  
    TColStd_IndexedMapNodeOfIndexedMapOfTransient(const Handle(Standard_Transient)& K1, const Standard_Integer K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Standard_Transient)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(TColStd_IndexedMapNodeOfIndexedMapOfTransient)

protected:




private: 


  Handle(Standard_Transient) myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Handle(Standard_Transient)
#define TheKey_hxx <Foundation/Standard/Standard_Transient.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedMapNode TColStd_IndexedMapNodeOfIndexedMapOfTransient
#define TCollection_IndexedMapNode_hxx <TColStd_IndexedMapNodeOfIndexedMapOfTransient.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TColStd_IndexedMapNodeOfIndexedMapOfTransient
#define TCollection_IndexedMapNode_Type_() TColStd_IndexedMapNodeOfIndexedMapOfTransient_Type_()
#define TCollection_IndexedMap TColStd_IndexedMapOfTransient
#define TCollection_IndexedMap_hxx <TColStd_IndexedMapOfTransient.hxx>

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




#endif // _TColStd_IndexedMapNodeOfIndexedMapOfTransient_HeaderFile
