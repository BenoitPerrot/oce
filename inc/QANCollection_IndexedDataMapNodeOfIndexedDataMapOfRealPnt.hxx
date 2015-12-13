// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt_HeaderFile
#define _QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <gp_Pnt.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class gp_Pnt;
class TColStd_MapRealHasher;
class QANCollection_IndexedDataMapOfRealPnt;



class QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt : public TCollection_MapNode
{

public:

  
    QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt(const Standard_Real& K1, const Standard_Integer K2, const gp_Pnt& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Standard_Real& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      gp_Pnt& Value()  const;




  DEFINE_STANDARD_RTTI(QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt)

protected:




private: 


  Standard_Real myKey1;
  Standard_Integer myKey2;
  gp_Pnt myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Standard_Real
#define TheKey_hxx <Foundation/Standard/Standard_Real.hxx>
#define TheItem gp_Pnt
#define TheItem_hxx <gp_Pnt.hxx>
#define Hasher TColStd_MapRealHasher
#define Hasher_hxx <TColStd_MapRealHasher.hxx>
#define TCollection_IndexedDataMapNode QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt
#define TCollection_IndexedDataMapNode_hxx <QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt
#define TCollection_IndexedDataMapNode_Type_() QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt_Type_()
#define TCollection_IndexedDataMap QANCollection_IndexedDataMapOfRealPnt
#define TCollection_IndexedDataMap_hxx <QANCollection_IndexedDataMapOfRealPnt.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt_HeaderFile
