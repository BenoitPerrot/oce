// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapNodeOfTypeARDriverMap_HeaderFile
#define _MDF_DataMapNodeOfTypeARDriverMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDF_DataMapNodeOfTypeARDriverMap.hxx>

#include <Handle_Standard_Type.hxx>
#include <Handle_MDF_ARDriver.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Standard_Type;
class MDF_ARDriver;
class TColStd_MapTransientHasher;
class MDF_TypeARDriverMap;
class MDF_DataMapIteratorOfTypeARDriverMap;



class MDF_DataMapNodeOfTypeARDriverMap : public TCollection_MapNode
{

public:

  
    MDF_DataMapNodeOfTypeARDriverMap(const Handle(Standard_Type)& K, const Handle(MDF_ARDriver)& I, const TCollection_MapNodePtr& n);
  
      Handle(Standard_Type)& Key()  const;
  
      Handle(MDF_ARDriver)& Value()  const;




  DEFINE_STANDARD_RTTI(MDF_DataMapNodeOfTypeARDriverMap)

protected:




private: 


  Handle(Standard_Type) myKey;
  Handle(MDF_ARDriver) myValue;


};

#define TheKey Handle(Standard_Type)
#define TheKey_hxx <Foundation/Standard/Standard_Type.hxx>
#define TheItem Handle(MDF_ARDriver)
#define TheItem_hxx <MDF_ARDriver.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode MDF_DataMapNodeOfTypeARDriverMap
#define TCollection_DataMapNode_hxx <MDF_DataMapNodeOfTypeARDriverMap.hxx>
#define TCollection_DataMapIterator MDF_DataMapIteratorOfTypeARDriverMap
#define TCollection_DataMapIterator_hxx <MDF_DataMapIteratorOfTypeARDriverMap.hxx>
#define Handle_TCollection_DataMapNode Handle_MDF_DataMapNodeOfTypeARDriverMap
#define TCollection_DataMapNode_Type_() MDF_DataMapNodeOfTypeARDriverMap_Type_()
#define TCollection_DataMap MDF_TypeARDriverMap
#define TCollection_DataMap_hxx <MDF_TypeARDriverMap.hxx>

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




#endif // _MDF_DataMapNodeOfTypeARDriverMap_HeaderFile
