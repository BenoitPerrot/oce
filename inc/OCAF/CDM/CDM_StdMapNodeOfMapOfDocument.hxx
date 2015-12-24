// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_StdMapNodeOfMapOfDocument_HeaderFile
#define _CDM_StdMapNodeOfMapOfDocument_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/CDM/Handle_CDM_StdMapNodeOfMapOfDocument.hxx>

#include <OCAF/CDM/Handle_CDM_Document.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class CDM_Document;
class CDM_DocumentHasher;
class CDM_MapOfDocument;
class CDM_MapIteratorOfMapOfDocument;



class CDM_StdMapNodeOfMapOfDocument : public TCollection_MapNode
{

public:

  
    CDM_StdMapNodeOfMapOfDocument(const Handle(CDM_Document)& K, const TCollection_MapNodePtr& n);
  
      Handle(CDM_Document)& Key()  const;




  DEFINE_STANDARD_RTTI(CDM_StdMapNodeOfMapOfDocument)

protected:




private: 


  Handle(CDM_Document) myKey;


};

#define TheKey Handle(CDM_Document)
#define TheKey_hxx <OCAF/CDM/CDM_Document.hxx>
#define Hasher CDM_DocumentHasher
#define Hasher_hxx <OCAF/CDM/CDM_DocumentHasher.hxx>
#define TCollection_StdMapNode CDM_StdMapNodeOfMapOfDocument
#define TCollection_StdMapNode_hxx <OCAF/CDM/CDM_StdMapNodeOfMapOfDocument.hxx>
#define TCollection_MapIterator CDM_MapIteratorOfMapOfDocument
#define TCollection_MapIterator_hxx <OCAF/CDM/CDM_MapIteratorOfMapOfDocument.hxx>
#define Handle_TCollection_StdMapNode Handle_CDM_StdMapNodeOfMapOfDocument
#define TCollection_StdMapNode_Type_() CDM_StdMapNodeOfMapOfDocument_Type_()
#define TCollection_Map CDM_MapOfDocument
#define TCollection_Map_hxx <OCAF/CDM/CDM_MapOfDocument.hxx>

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




#endif // _CDM_StdMapNodeOfMapOfDocument_HeaderFile
