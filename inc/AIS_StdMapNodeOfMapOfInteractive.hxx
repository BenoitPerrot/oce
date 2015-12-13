// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_StdMapNodeOfMapOfInteractive_HeaderFile
#define _AIS_StdMapNodeOfMapOfInteractive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_StdMapNodeOfMapOfInteractive.hxx>

#include <Handle_AIS_InteractiveObject.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class AIS_InteractiveObject;
class TColStd_MapTransientHasher;
class AIS_MapOfInteractive;
class AIS_MapIteratorOfMapOfInteractive;



class AIS_StdMapNodeOfMapOfInteractive : public TCollection_MapNode
{

public:

  
    AIS_StdMapNodeOfMapOfInteractive(const Handle(AIS_InteractiveObject)& K, const TCollection_MapNodePtr& n);
  
      Handle(AIS_InteractiveObject)& Key()  const;




  DEFINE_STANDARD_RTTI(AIS_StdMapNodeOfMapOfInteractive)

protected:




private: 


  Handle(AIS_InteractiveObject) myKey;


};

#define TheKey Handle(AIS_InteractiveObject)
#define TheKey_hxx <AIS_InteractiveObject.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define TCollection_StdMapNode AIS_StdMapNodeOfMapOfInteractive
#define TCollection_StdMapNode_hxx <AIS_StdMapNodeOfMapOfInteractive.hxx>
#define TCollection_MapIterator AIS_MapIteratorOfMapOfInteractive
#define TCollection_MapIterator_hxx <AIS_MapIteratorOfMapOfInteractive.hxx>
#define Handle_TCollection_StdMapNode Handle_AIS_StdMapNodeOfMapOfInteractive
#define TCollection_StdMapNode_Type_() AIS_StdMapNodeOfMapOfInteractive_Type_()
#define TCollection_Map AIS_MapOfInteractive
#define TCollection_Map_hxx <AIS_MapOfInteractive.hxx>

#include <Foundation/TCollection/TCollection_StdMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_StdMapNode
#undef TCollection_StdMapNode_hxx
#undef TCollection_MapIterator
#undef TCollection_MapIterator_hxx
#undef Handle_TCollection_StdMapNode
#undef TCollection_StdMapNode_Type_
#undef TCollection_Map
#undef TCollection_Map_hxx




#endif // _AIS_StdMapNodeOfMapOfInteractive_HeaderFile
