// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_SequenceNodeOfSequenceOfPrinters_HeaderFile
#define _Message_SequenceNodeOfSequenceOfPrinters_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Message_SequenceNodeOfSequenceOfPrinters.hxx>

#include <Handle_Message_Printer.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Message_Printer;
class Message_SequenceOfPrinters;



class Message_SequenceNodeOfSequenceOfPrinters : public TCollection_SeqNode
{

public:

  
    Message_SequenceNodeOfSequenceOfPrinters(const Handle(Message_Printer)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Message_Printer)& Value()  const;




  DEFINE_STANDARD_RTTI(Message_SequenceNodeOfSequenceOfPrinters)

protected:




private: 


  Handle(Message_Printer) myValue;


};

#define SeqItem Handle(Message_Printer)
#define SeqItem_hxx <Foundation/Message/Message_Printer.hxx>
#define TCollection_SequenceNode Message_SequenceNodeOfSequenceOfPrinters
#define TCollection_SequenceNode_hxx <Foundation/Message/Message_SequenceNodeOfSequenceOfPrinters.hxx>
#define Handle_TCollection_SequenceNode Handle_Message_SequenceNodeOfSequenceOfPrinters
#define TCollection_SequenceNode_Type_() Message_SequenceNodeOfSequenceOfPrinters_Type_()
#define TCollection_Sequence Message_SequenceOfPrinters
#define TCollection_Sequence_hxx <Foundation/Message/Message_SequenceOfPrinters.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Message_SequenceNodeOfSequenceOfPrinters_HeaderFile
