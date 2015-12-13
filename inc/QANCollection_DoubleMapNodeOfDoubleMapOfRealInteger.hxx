// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger_HeaderFile
#define _QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TColStd_MapRealHasher;
class TColStd_MapIntegerHasher;
class QANCollection_DoubleMapOfRealInteger;
class QANCollection_DoubleMapIteratorOfDoubleMapOfRealInteger;



class QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger : public TCollection_MapNode
{

public:

  
    QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger(const Standard_Real& K1, const Standard_Integer& K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Standard_Real& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger)

protected:




private: 


  Standard_Real myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey1 Standard_Real
#define TheKey1_hxx <Foundation/Standard/Standard_Real.hxx>
#define TheKey2 Standard_Integer
#define TheKey2_hxx <Foundation/Standard/Standard_Integer.hxx>
#define Hasher1 TColStd_MapRealHasher
#define Hasher1_hxx <Foundation/TColStd/TColStd_MapRealHasher.hxx>
#define Hasher2 TColStd_MapIntegerHasher
#define Hasher2_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DoubleMapNode QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger
#define TCollection_DoubleMapNode_hxx <QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger.hxx>
#define TCollection_DoubleMapIterator QANCollection_DoubleMapIteratorOfDoubleMapOfRealInteger
#define TCollection_DoubleMapIterator_hxx <QANCollection_DoubleMapIteratorOfDoubleMapOfRealInteger.hxx>
#define Handle_TCollection_DoubleMapNode Handle_QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger
#define TCollection_DoubleMapNode_Type_() QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger_Type_()
#define TCollection_DoubleMap QANCollection_DoubleMapOfRealInteger
#define TCollection_DoubleMap_hxx <QANCollection_DoubleMapOfRealInteger.hxx>

#include <Foundation/TCollection/TCollection_DoubleMapNode.lxx>

#undef TheKey1
#undef TheKey1_hxx
#undef TheKey2
#undef TheKey2_hxx
#undef Hasher1
#undef Hasher1_hxx
#undef Hasher2
#undef Hasher2_hxx
#undef TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_hxx
#undef TCollection_DoubleMapIterator
#undef TCollection_DoubleMapIterator_hxx
#undef Handle_TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_Type_
#undef TCollection_DoubleMap
#undef TCollection_DoubleMap_hxx




#endif // _QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger_HeaderFile
