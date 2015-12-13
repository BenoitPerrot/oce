// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_HeaderFile
#define _Message_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Message_Messenger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Message_Messenger;
class TCollection_AsciiString;
class Message_Msg;
class Message_MsgFile;
class Message_Messenger;
class Message_Algorithm;
class Message_Printer;
class Message_PrinterOStream;
class Message_ListOfMsg;
class Message_SequenceOfPrinters;
class Message_ProgressIndicator;
class Message_ProgressScale;
class Message_ProgressSentry;
class Message_SequenceOfProgressScale;
class Message_ListNodeOfListOfMsg;
class Message_ListIteratorOfListOfMsg;
class Message_SequenceNodeOfSequenceOfPrinters;
class Message_SequenceNodeOfSequenceOfProgressScale;


//! Defines
//! - tools to work with messages
//! - basic tools intended for progress indication
class Message 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines default messenger for OCCT applications.
  //! This is global static instance of the messenger.
  //! By default, it contains single printer directed to cout.
  //! It can be customized according to the application needs.
  Standard_EXPORT static  const  Handle(Message_Messenger)& DefaultMessenger() ;
  
  //! Returns the string filled with values of hours, minutes and seconds.
  //! Example:
  //! 1. (5, 12, 26.3345) returns "05h:12m:26.33s",
  //! 2. (0,  6, 34.496 ) returns "06m:34.50s",
  //! 3. (0,  0,  4.5   ) returns "4.50s"
  Standard_EXPORT static   TCollection_AsciiString FillTime (const Standard_Integer Hour, const Standard_Integer Minute, const Standard_Real Second) ;




protected:





private:




friend class Message_Msg;
friend class Message_MsgFile;
friend class Message_Messenger;
friend class Message_Algorithm;
friend class Message_Printer;
friend class Message_PrinterOStream;
friend class Message_ListOfMsg;
friend class Message_SequenceOfPrinters;
friend class Message_ProgressIndicator;
friend class Message_ProgressScale;
friend class Message_ProgressSentry;
friend class Message_SequenceOfProgressScale;
friend class Message_ListNodeOfListOfMsg;
friend class Message_ListIteratorOfListOfMsg;
friend class Message_SequenceNodeOfSequenceOfPrinters;
friend class Message_SequenceNodeOfSequenceOfProgressScale;

};







#endif // _Message_HeaderFile
