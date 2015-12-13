// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel_HeaderFile
#define _TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <TDF_Label.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TDF_Label;
class TColStd_MapIntegerHasher;
class TDF_LabelMapHasher;
class TFunction_DoubleMapOfIntegerLabel;
class TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel;



class TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel : public TCollection_MapNode
{

public:

  
    TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel(const Standard_Integer& K1, const TDF_Label& K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Standard_Integer& Key1()  const;
  
      TDF_Label& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel)

protected:




private: 


  Standard_Integer myKey1;
  TDF_Label myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey1 Standard_Integer
#define TheKey1_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheKey2 TDF_Label
#define TheKey2_hxx <TDF_Label.hxx>
#define Hasher1 TColStd_MapIntegerHasher
#define Hasher1_hxx <TColStd_MapIntegerHasher.hxx>
#define Hasher2 TDF_LabelMapHasher
#define Hasher2_hxx <TDF_LabelMapHasher.hxx>
#define TCollection_DoubleMapNode TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel
#define TCollection_DoubleMapNode_hxx <TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel.hxx>
#define TCollection_DoubleMapIterator TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel
#define TCollection_DoubleMapIterator_hxx <TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel.hxx>
#define Handle_TCollection_DoubleMapNode Handle_TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel
#define TCollection_DoubleMapNode_Type_() TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel_Type_()
#define TCollection_DoubleMap TFunction_DoubleMapOfIntegerLabel
#define TCollection_DoubleMap_hxx <TFunction_DoubleMapOfIntegerLabel.hxx>

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




#endif // _TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel_HeaderFile
