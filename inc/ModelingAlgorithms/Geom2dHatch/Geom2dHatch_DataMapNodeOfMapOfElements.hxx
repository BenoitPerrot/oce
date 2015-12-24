// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_DataMapNodeOfMapOfElements_HeaderFile
#define _Geom2dHatch_DataMapNodeOfMapOfElements_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/Geom2dHatch/Handle_Geom2dHatch_DataMapNodeOfMapOfElements.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/Geom2dHatch/Geom2dHatch_Element.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Geom2dHatch_Element;
class TColStd_MapIntegerHasher;
class Geom2dHatch_MapOfElements;
class Geom2dHatch_DataMapIteratorOfMapOfElements;



class Geom2dHatch_DataMapNodeOfMapOfElements : public TCollection_MapNode
{

public:

  
    Geom2dHatch_DataMapNodeOfMapOfElements(const Standard_Integer& K, const Geom2dHatch_Element& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Geom2dHatch_Element& Value()  const;




  DEFINE_STANDARD_RTTI(Geom2dHatch_DataMapNodeOfMapOfElements)

protected:




private: 


  Standard_Integer myKey;
  Geom2dHatch_Element myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Geom2dHatch_Element
#define TheItem_hxx <ModelingAlgorithms/Geom2dHatch/Geom2dHatch_Element.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode Geom2dHatch_DataMapNodeOfMapOfElements
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/Geom2dHatch/Geom2dHatch_DataMapNodeOfMapOfElements.hxx>
#define TCollection_DataMapIterator Geom2dHatch_DataMapIteratorOfMapOfElements
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/Geom2dHatch/Geom2dHatch_DataMapIteratorOfMapOfElements.hxx>
#define Handle_TCollection_DataMapNode Handle_Geom2dHatch_DataMapNodeOfMapOfElements
#define TCollection_DataMapNode_Type_() Geom2dHatch_DataMapNodeOfMapOfElements_Type_()
#define TCollection_DataMap Geom2dHatch_MapOfElements
#define TCollection_DataMap_hxx <ModelingAlgorithms/Geom2dHatch/Geom2dHatch_MapOfElements.hxx>

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




#endif // _Geom2dHatch_DataMapNodeOfMapOfElements_HeaderFile
