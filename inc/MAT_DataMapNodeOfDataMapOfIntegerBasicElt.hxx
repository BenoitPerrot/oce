// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapNodeOfDataMapOfIntegerBasicElt_HeaderFile
#define _MAT_DataMapNodeOfDataMapOfIntegerBasicElt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerBasicElt.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MAT_BasicElt.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class MAT_BasicElt;
class TColStd_MapIntegerHasher;
class MAT_DataMapOfIntegerBasicElt;
class MAT_DataMapIteratorOfDataMapOfIntegerBasicElt;



class MAT_DataMapNodeOfDataMapOfIntegerBasicElt : public TCollection_MapNode
{

public:

  
    MAT_DataMapNodeOfDataMapOfIntegerBasicElt(const Standard_Integer& K, const Handle(MAT_BasicElt)& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Handle(MAT_BasicElt)& Value()  const;




  DEFINE_STANDARD_RTTI(MAT_DataMapNodeOfDataMapOfIntegerBasicElt)

protected:




private: 


  Standard_Integer myKey;
  Handle(MAT_BasicElt) myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Handle(MAT_BasicElt)
#define TheItem_hxx <MAT_BasicElt.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT_DataMapNodeOfDataMapOfIntegerBasicElt
#define TCollection_DataMapNode_hxx <MAT_DataMapNodeOfDataMapOfIntegerBasicElt.hxx>
#define TCollection_DataMapIterator MAT_DataMapIteratorOfDataMapOfIntegerBasicElt
#define TCollection_DataMapIterator_hxx <MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT_DataMapNodeOfDataMapOfIntegerBasicElt
#define TCollection_DataMapNode_Type_() MAT_DataMapNodeOfDataMapOfIntegerBasicElt_Type_()
#define TCollection_DataMap MAT_DataMapOfIntegerBasicElt
#define TCollection_DataMap_hxx <MAT_DataMapOfIntegerBasicElt.hxx>

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




#endif // _MAT_DataMapNodeOfDataMapOfIntegerBasicElt_HeaderFile
