// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapNodeOfDataMapOfIntegerReal_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfIntegerReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerReal.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TColStd_MapIntegerHasher;
class TColStd_DataMapOfIntegerReal;
class TColStd_DataMapIteratorOfDataMapOfIntegerReal;



class TColStd_DataMapNodeOfDataMapOfIntegerReal : public TCollection_MapNode
{

public:

  
    TColStd_DataMapNodeOfDataMapOfIntegerReal(const Standard_Integer& K, const Standard_Real& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Standard_Real& Value()  const;




  DEFINE_STANDARD_RTTI(TColStd_DataMapNodeOfDataMapOfIntegerReal)

protected:




private: 


  Standard_Integer myKey;
  Standard_Real myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Standard_Real
#define TheItem_hxx <Foundation/Standard/Standard_Real.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TColStd_DataMapNodeOfDataMapOfIntegerReal
#define TCollection_DataMapNode_hxx <TColStd_DataMapNodeOfDataMapOfIntegerReal.hxx>
#define TCollection_DataMapIterator TColStd_DataMapIteratorOfDataMapOfIntegerReal
#define TCollection_DataMapIterator_hxx <TColStd_DataMapIteratorOfDataMapOfIntegerReal.hxx>
#define Handle_TCollection_DataMapNode Handle_TColStd_DataMapNodeOfDataMapOfIntegerReal
#define TCollection_DataMapNode_Type_() TColStd_DataMapNodeOfDataMapOfIntegerReal_Type_()
#define TCollection_DataMap TColStd_DataMapOfIntegerReal
#define TCollection_DataMap_hxx <TColStd_DataMapOfIntegerReal.hxx>

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




#endif // _TColStd_DataMapNodeOfDataMapOfIntegerReal_HeaderFile
