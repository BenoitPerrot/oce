// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_HeaderFile
#define _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal.hxx>

#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TColStd_HArray1OfReal;
class TCollection_ExtendedString;
class TDataStd_DataMapOfStringHArray1OfReal;
class TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal;



class TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal : public TCollection_MapNode
{

public:

  
    TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal(const TCollection_ExtendedString& K, const Handle(TColStd_HArray1OfReal)& I, const TCollection_MapNodePtr& n);
  
      TCollection_ExtendedString& Key()  const;
  
      Handle(TColStd_HArray1OfReal)& Value()  const;




  DEFINE_STANDARD_RTTI(TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal)

protected:




private: 


  TCollection_ExtendedString myKey;
  Handle(TColStd_HArray1OfReal) myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <Foundation/TCollection/TCollection_ExtendedString.hxx>
#define TheItem Handle(TColStd_HArray1OfReal)
#define TheItem_hxx <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <Foundation/TCollection/TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal
#define TCollection_DataMapNode_hxx <OCAF/TDataStd/TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal.hxx>
#define TCollection_DataMapIterator TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal
#define TCollection_DataMapIterator_hxx <OCAF/TDataStd/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.hxx>
#define Handle_TCollection_DataMapNode Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal
#define TCollection_DataMapNode_Type_() TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_Type_()
#define TCollection_DataMap TDataStd_DataMapOfStringHArray1OfReal
#define TCollection_DataMap_hxx <OCAF/TDataStd/TDataStd_DataMapOfStringHArray1OfReal.hxx>

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




#endif // _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_HeaderFile
