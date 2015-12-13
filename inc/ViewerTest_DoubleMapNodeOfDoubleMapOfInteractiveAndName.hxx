// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName_HeaderFile
#define _ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName.hxx>

#include <Handle_Standard_Transient.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class Standard_Transient;
class TCollection_AsciiString;
class TColStd_MapTransientHasher;
class ViewerTest_DoubleMapOfInteractiveAndName;
class ViewerTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName;



class ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName : public TCollection_MapNode
{

public:

  
    ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName(const Handle(Standard_Transient)& K1, const TCollection_AsciiString& K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Standard_Transient)& Key1()  const;
  
      TCollection_AsciiString& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName)

protected:




private: 


  Handle(Standard_Transient) myKey1;
  TCollection_AsciiString myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey1 Handle(Standard_Transient)
#define TheKey1_hxx <Foundation/Standard/Standard_Transient.hxx>
#define TheKey2 TCollection_AsciiString
#define TheKey2_hxx <TCollection_AsciiString.hxx>
#define Hasher1 TColStd_MapTransientHasher
#define Hasher1_hxx <TColStd_MapTransientHasher.hxx>
#define Hasher2 TCollection_AsciiString
#define Hasher2_hxx <TCollection_AsciiString.hxx>
#define TCollection_DoubleMapNode ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName
#define TCollection_DoubleMapNode_hxx <ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName.hxx>
#define TCollection_DoubleMapIterator ViewerTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName
#define TCollection_DoubleMapIterator_hxx <ViewerTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName.hxx>
#define Handle_TCollection_DoubleMapNode Handle_ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName
#define TCollection_DoubleMapNode_Type_() ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName_Type_()
#define TCollection_DoubleMap ViewerTest_DoubleMapOfInteractiveAndName
#define TCollection_DoubleMap_hxx <ViewerTest_DoubleMapOfInteractiveAndName.hxx>

#include <TCollection_DoubleMapNode.lxx>

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




#endif // _ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName_HeaderFile
