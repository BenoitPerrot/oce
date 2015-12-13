// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapNodeOfDataMapOfIntegerArc_HeaderFile
#define _MAT_DataMapNodeOfDataMapOfIntegerArc_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerArc.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MAT_Arc.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class MAT_Arc;
class TColStd_MapIntegerHasher;
class MAT_DataMapOfIntegerArc;
class MAT_DataMapIteratorOfDataMapOfIntegerArc;



class MAT_DataMapNodeOfDataMapOfIntegerArc : public TCollection_MapNode
{

public:

  
    MAT_DataMapNodeOfDataMapOfIntegerArc(const Standard_Integer& K, const Handle(MAT_Arc)& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Handle(MAT_Arc)& Value()  const;




  DEFINE_STANDARD_RTTI(MAT_DataMapNodeOfDataMapOfIntegerArc)

protected:




private: 


  Standard_Integer myKey;
  Handle(MAT_Arc) myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Handle(MAT_Arc)
#define TheItem_hxx <MAT_Arc.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT_DataMapNodeOfDataMapOfIntegerArc
#define TCollection_DataMapNode_hxx <MAT_DataMapNodeOfDataMapOfIntegerArc.hxx>
#define TCollection_DataMapIterator MAT_DataMapIteratorOfDataMapOfIntegerArc
#define TCollection_DataMapIterator_hxx <MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT_DataMapNodeOfDataMapOfIntegerArc
#define TCollection_DataMapNode_Type_() MAT_DataMapNodeOfDataMapOfIntegerArc_Type_()
#define TCollection_DataMap MAT_DataMapOfIntegerArc
#define TCollection_DataMap_hxx <MAT_DataMapOfIntegerArc.hxx>

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




#endif // _MAT_DataMapNodeOfDataMapOfIntegerArc_HeaderFile
