// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapNodeOfDataMapOfIntegerBisec_HeaderFile
#define _MAT2d_DataMapNodeOfDataMapOfIntegerBisec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/Bisector/Bisector_Bisec.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Bisector_Bisec;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerBisec;
class MAT2d_DataMapIteratorOfDataMapOfIntegerBisec;



class MAT2d_DataMapNodeOfDataMapOfIntegerBisec : public TCollection_MapNode
{

public:

  
    MAT2d_DataMapNodeOfDataMapOfIntegerBisec(const Standard_Integer& K, const Bisector_Bisec& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Bisector_Bisec& Value()  const;




  DEFINE_STANDARD_RTTI(MAT2d_DataMapNodeOfDataMapOfIntegerBisec)

protected:




private: 


  Standard_Integer myKey;
  Bisector_Bisec myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Bisector_Bisec
#define TheItem_hxx <ModelingAlgorithms/Bisector/Bisector_Bisec.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT2d_DataMapNodeOfDataMapOfIntegerBisec
#define TCollection_DataMapNode_hxx <MAT2d_DataMapNodeOfDataMapOfIntegerBisec.hxx>
#define TCollection_DataMapIterator MAT2d_DataMapIteratorOfDataMapOfIntegerBisec
#define TCollection_DataMapIterator_hxx <MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec
#define TCollection_DataMapNode_Type_() MAT2d_DataMapNodeOfDataMapOfIntegerBisec_Type_()
#define TCollection_DataMap MAT2d_DataMapOfIntegerBisec
#define TCollection_DataMap_hxx <MAT2d_DataMapOfIntegerBisec.hxx>

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




#endif // _MAT2d_DataMapNodeOfDataMapOfIntegerBisec_HeaderFile
