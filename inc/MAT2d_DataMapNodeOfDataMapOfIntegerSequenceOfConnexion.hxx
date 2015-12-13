// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion_HeaderFile
#define _MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <MAT2d_SequenceOfConnexion.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class MAT2d_SequenceOfConnexion;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerSequenceOfConnexion;
class MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion;



class MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion : public TCollection_MapNode
{

public:

  
    MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion(const Standard_Integer& K, const MAT2d_SequenceOfConnexion& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      MAT2d_SequenceOfConnexion& Value()  const;




  DEFINE_STANDARD_RTTI(MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion)

protected:




private: 


  Standard_Integer myKey;
  MAT2d_SequenceOfConnexion myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem MAT2d_SequenceOfConnexion
#define TheItem_hxx <MAT2d_SequenceOfConnexion.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion
#define TCollection_DataMapNode_hxx <MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion.hxx>
#define TCollection_DataMapIterator MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion
#define TCollection_DataMapIterator_hxx <MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion
#define TCollection_DataMapNode_Type_() MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion_Type_()
#define TCollection_DataMap MAT2d_DataMapOfIntegerSequenceOfConnexion
#define TCollection_DataMap_hxx <MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx>

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




#endif // _MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion_HeaderFile
