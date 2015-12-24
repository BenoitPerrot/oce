// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_SequenceNodeOfSequenceOfDocument_HeaderFile
#define _TDocStd_SequenceNodeOfSequenceOfDocument_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDocStd/Handle_TDocStd_SequenceNodeOfSequenceOfDocument.hxx>

#include <OCAF/TDocStd/Handle_TDocStd_Document.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class TDocStd_Document;
class TDocStd_SequenceOfDocument;



class TDocStd_SequenceNodeOfSequenceOfDocument : public TCollection_SeqNode
{

public:

  
    TDocStd_SequenceNodeOfSequenceOfDocument(const Handle(TDocStd_Document)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(TDocStd_Document)& Value()  const;




  DEFINE_STANDARD_RTTI(TDocStd_SequenceNodeOfSequenceOfDocument)

protected:




private: 


  Handle(TDocStd_Document) myValue;


};

#define SeqItem Handle(TDocStd_Document)
#define SeqItem_hxx <OCAF/TDocStd/TDocStd_Document.hxx>
#define TCollection_SequenceNode TDocStd_SequenceNodeOfSequenceOfDocument
#define TCollection_SequenceNode_hxx <OCAF/TDocStd/TDocStd_SequenceNodeOfSequenceOfDocument.hxx>
#define Handle_TCollection_SequenceNode Handle_TDocStd_SequenceNodeOfSequenceOfDocument
#define TCollection_SequenceNode_Type_() TDocStd_SequenceNodeOfSequenceOfDocument_Type_()
#define TCollection_Sequence TDocStd_SequenceOfDocument
#define TCollection_Sequence_hxx <OCAF/TDocStd/TDocStd_SequenceOfDocument.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TDocStd_SequenceNodeOfSequenceOfDocument_HeaderFile
