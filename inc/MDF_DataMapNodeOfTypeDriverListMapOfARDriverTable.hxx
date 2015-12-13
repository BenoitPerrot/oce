// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable_HeaderFile
#define _MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.hxx>

#include <Handle_Standard_Type.hxx>
#include <MDF_DriverListOfARDriverTable.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Standard_Type;
class MDF_DriverListOfARDriverTable;
class TColStd_MapTransientHasher;
class MDF_TypeDriverListMapOfARDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable;



class MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable : public TCollection_MapNode
{

public:

  
    MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable(const Handle(Standard_Type)& K, const MDF_DriverListOfARDriverTable& I, const TCollection_MapNodePtr& n);
  
      Handle(Standard_Type)& Key()  const;
  
      MDF_DriverListOfARDriverTable& Value()  const;




  DEFINE_STANDARD_RTTI(MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable)

protected:




private: 


  Handle(Standard_Type) myKey;
  MDF_DriverListOfARDriverTable myValue;


};

#define TheKey Handle(Standard_Type)
#define TheKey_hxx <Foundation/Standard/Standard_Type.hxx>
#define TheItem MDF_DriverListOfARDriverTable
#define TheItem_hxx <MDF_DriverListOfARDriverTable.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable
#define TCollection_DataMapNode_hxx <MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.hxx>
#define TCollection_DataMapIterator MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable
#define TCollection_DataMapIterator_hxx <MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable.hxx>
#define Handle_TCollection_DataMapNode Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable
#define TCollection_DataMapNode_Type_() MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable_Type_()
#define TCollection_DataMap MDF_TypeDriverListMapOfARDriverTable
#define TCollection_DataMap_hxx <MDF_TypeDriverListMapOfARDriverTable.hxx>

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




#endif // _MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable_HeaderFile
