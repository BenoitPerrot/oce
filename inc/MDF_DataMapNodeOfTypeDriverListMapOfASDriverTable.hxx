// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_HeaderFile
#define _MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.hxx>

#include <Handle_Standard_Type.hxx>
#include <MDF_DriverListOfASDriverTable.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Standard_Type;
class MDF_DriverListOfASDriverTable;
class TColStd_MapTransientHasher;
class MDF_TypeDriverListMapOfASDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;



class MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable : public TCollection_MapNode
{

public:

  
    MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable(const Handle(Standard_Type)& K, const MDF_DriverListOfASDriverTable& I, const TCollection_MapNodePtr& n);
  
      Handle(Standard_Type)& Key()  const;
  
      MDF_DriverListOfASDriverTable& Value()  const;




  DEFINE_STANDARD_RTTI(MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable)

protected:




private: 


  Handle(Standard_Type) myKey;
  MDF_DriverListOfASDriverTable myValue;


};

#define TheKey Handle(Standard_Type)
#define TheKey_hxx <Foundation/Standard/Standard_Type.hxx>
#define TheItem MDF_DriverListOfASDriverTable
#define TheItem_hxx <MDF_DriverListOfASDriverTable.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable
#define TCollection_DataMapNode_hxx <MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.hxx>
#define TCollection_DataMapIterator MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable
#define TCollection_DataMapIterator_hxx <MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable.hxx>
#define Handle_TCollection_DataMapNode Handle_MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable
#define TCollection_DataMapNode_Type_() MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_Type_()
#define TCollection_DataMap MDF_TypeDriverListMapOfASDriverTable
#define TCollection_DataMap_hxx <MDF_TypeDriverListMapOfASDriverTable.hxx>

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




#endif // _MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_HeaderFile
