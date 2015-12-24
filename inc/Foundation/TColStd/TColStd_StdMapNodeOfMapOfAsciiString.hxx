// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_StdMapNodeOfMapOfAsciiString_HeaderFile
#define _TColStd_StdMapNodeOfMapOfAsciiString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/TColStd/Handle_TColStd_StdMapNodeOfMapOfAsciiString.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TCollection_AsciiString;
class TColStd_MapOfAsciiString;
class TColStd_MapIteratorOfMapOfAsciiString;



class TColStd_StdMapNodeOfMapOfAsciiString : public TCollection_MapNode
{

public:

  
    TColStd_StdMapNodeOfMapOfAsciiString(const TCollection_AsciiString& K, const TCollection_MapNodePtr& n);
  
      TCollection_AsciiString& Key()  const;




  DEFINE_STANDARD_RTTI(TColStd_StdMapNodeOfMapOfAsciiString)

protected:




private: 


  TCollection_AsciiString myKey;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TCollection_StdMapNode TColStd_StdMapNodeOfMapOfAsciiString
#define TCollection_StdMapNode_hxx <Foundation/TColStd/TColStd_StdMapNodeOfMapOfAsciiString.hxx>
#define TCollection_MapIterator TColStd_MapIteratorOfMapOfAsciiString
#define TCollection_MapIterator_hxx <Foundation/TColStd/TColStd_MapIteratorOfMapOfAsciiString.hxx>
#define Handle_TCollection_StdMapNode Handle_TColStd_StdMapNodeOfMapOfAsciiString
#define TCollection_StdMapNode_Type_() TColStd_StdMapNodeOfMapOfAsciiString_Type_()
#define TCollection_Map TColStd_MapOfAsciiString
#define TCollection_Map_hxx <Foundation/TColStd/TColStd_MapOfAsciiString.hxx>

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




#endif // _TColStd_StdMapNodeOfMapOfAsciiString_HeaderFile
