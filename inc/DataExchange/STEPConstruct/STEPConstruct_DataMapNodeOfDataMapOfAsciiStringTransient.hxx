// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient_HeaderFile
#define _STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/STEPConstruct/Handle_STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Standard_Transient;
class TCollection_AsciiString;
class STEPConstruct_DataMapOfAsciiStringTransient;
class STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient;



class STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient : public TCollection_MapNode
{

public:

  
    STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient(const TCollection_AsciiString& K, const Handle(Standard_Transient)& I, const TCollection_MapNodePtr& n);
  
      TCollection_AsciiString& Key()  const;
  
      Handle(Standard_Transient)& Value()  const;




  DEFINE_STANDARD_RTTI(STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient)

protected:




private: 


  TCollection_AsciiString myKey;
  Handle(Standard_Transient) myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TheItem Handle(Standard_Transient)
#define TheItem_hxx <Foundation/Standard/Standard_Transient.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TCollection_DataMapNode STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient
#define TCollection_DataMapNode_hxx <DataExchange/STEPConstruct/STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient.hxx>
#define TCollection_DataMapIterator STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient
#define TCollection_DataMapIterator_hxx <DataExchange/STEPConstruct/STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx>
#define Handle_TCollection_DataMapNode Handle_STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient
#define TCollection_DataMapNode_Type_() STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient_Type_()
#define TCollection_DataMap STEPConstruct_DataMapOfAsciiStringTransient
#define TCollection_DataMap_hxx <DataExchange/STEPConstruct/STEPConstruct_DataMapOfAsciiStringTransient.hxx>

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




#endif // _STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient_HeaderFile
