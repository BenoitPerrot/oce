// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_SequenceOfPrinters_HeaderFile
#define _Message_SequenceOfPrinters_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Foundation/Message/Handle_Message_Printer.hxx>
#include <Foundation/Message/Handle_Message_SequenceNodeOfSequenceOfPrinters.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Message_Printer;
class Message_SequenceNodeOfSequenceOfPrinters;



class Message_SequenceOfPrinters  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Message_SequenceOfPrinters();
  
  Standard_EXPORT Message_SequenceOfPrinters(const Message_SequenceOfPrinters& Other);
  
  Standard_EXPORT   void Clear() ;
~Message_SequenceOfPrinters()
{
  Clear();
}
  
  Standard_EXPORT  const  Message_SequenceOfPrinters& Assign (const Message_SequenceOfPrinters& Other) ;
 const  Message_SequenceOfPrinters& operator = (const Message_SequenceOfPrinters& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Message_Printer)& T) ;
  
      void Append (Message_SequenceOfPrinters& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Message_Printer)& T) ;
  
      void Prepend (Message_SequenceOfPrinters& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Message_Printer)& T) ;
  
      void InsertBefore (const Standard_Integer Index, Message_SequenceOfPrinters& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Message_Printer)& T) ;
  
      void InsertAfter (const Standard_Integer Index, Message_SequenceOfPrinters& S) ;
  
  Standard_EXPORT  const  Handle(Message_Printer)& First()  const;
  
  Standard_EXPORT  const  Handle(Message_Printer)& Last()  const;
  
      void Split (const Standard_Integer Index, Message_SequenceOfPrinters& Sub) ;
  
  Standard_EXPORT  const  Handle(Message_Printer)& Value (const Standard_Integer Index)  const;
 const  Handle(Message_Printer)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Message_Printer)& I) ;
  
  Standard_EXPORT   Handle(Message_Printer)& ChangeValue (const Standard_Integer Index) ;
  Handle(Message_Printer)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Message_Printer)
#define SeqItem_hxx <Foundation/Message/Message_Printer.hxx>
#define TCollection_SequenceNode Message_SequenceNodeOfSequenceOfPrinters
#define TCollection_SequenceNode_hxx <Foundation/Message/Message_SequenceNodeOfSequenceOfPrinters.hxx>
#define Handle_TCollection_SequenceNode Handle_Message_SequenceNodeOfSequenceOfPrinters
#define TCollection_SequenceNode_Type_() Message_SequenceNodeOfSequenceOfPrinters_Type_()
#define TCollection_Sequence Message_SequenceOfPrinters
#define TCollection_Sequence_hxx <Foundation/Message/Message_SequenceOfPrinters.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Message_SequenceOfPrinters_HeaderFile
