// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d_HeaderFile
#define _MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <gp_Pnt2d.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class gp_Pnt2d;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerPnt2d;
class MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d;



class MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d : public TCollection_MapNode
{

public:

  
    MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d(const Standard_Integer& K, const gp_Pnt2d& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      gp_Pnt2d& Value()  const;




  DEFINE_STANDARD_RTTI(MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d)

protected:




private: 


  Standard_Integer myKey;
  gp_Pnt2d myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem gp_Pnt2d
#define TheItem_hxx <gp_Pnt2d.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d
#define TCollection_DataMapNode_hxx <MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d.hxx>
#define TCollection_DataMapIterator MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d
#define TCollection_DataMapIterator_hxx <MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d
#define TCollection_DataMapNode_Type_() MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d_Type_()
#define TCollection_DataMap MAT2d_DataMapOfIntegerPnt2d
#define TCollection_DataMap_hxx <MAT2d_DataMapOfIntegerPnt2d.hxx>

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




#endif // _MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d_HeaderFile
