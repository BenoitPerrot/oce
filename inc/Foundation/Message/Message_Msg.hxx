// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_Msg_HeaderFile
#define _Message_Msg_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/TCollection/Handle_TCollection_HExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TCollection_ExtendedString;
class TCollection_AsciiString;
class TCollection_HAsciiString;
class TCollection_HExtendedString;


//! This class provides a tool for constructing the parametrized message
//! basing on resources loaded by Message_MsgFile tool.
//!
//! A Message is created from a keyword: this keyword identifies the
//! message in a message file that should be previously loaded by call
//! to Message_MsgFile::LoadFile().
//!
//! The text of the message can contain placeholders for the parameters
//! which are to be filled by the proper values when the message
//! is prepared. Most of the format specifiers used in C can be used,
//! for instance, %s for string, %d for integer etc. In addition,
//! specifier %f is supported for double numbers (for compatibility
//! with previous versions).
//!
//! User fills the parameter fields in the text of the message by
//! calling corresponding methods Arg() or operators "<<".
//!
//! The resulting message, filled with all parameters, can be obtained
//! by method Get(). If some parameters were not filled, the text
//! UNKNOWN is placed instead.
class Message_Msg 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT Message_Msg();
  
  //! Copy constructor
  Standard_EXPORT Message_Msg(const Message_Msg& theMsg);
  
  //! Create a message using a corresponding entry in Message_MsgFile
  Standard_EXPORT Message_Msg(const Standard_CString theKey);
  
  //! Create a message using a corresponding entry in Message_MsgFile
  Standard_EXPORT Message_Msg(const TCollection_ExtendedString& theKey);
  
  //! Set a message body text -- can be used as alternative to
  //! using messages from resource file
  Standard_EXPORT   void Set (const Standard_CString theMsg) ;
  
  //! Set a message body text -- can be used as alternative to
  //! using messages from resource file
  Standard_EXPORT   void Set (const TCollection_ExtendedString& theMsg) ;
  
  //! Set a value for %..s conversion
  Standard_EXPORT   Message_Msg& Arg (const Standard_CString theString) ;
  Message_Msg& operator << (const Standard_CString theString) 
{
  return Arg(theString);
}
  
  //! Set a value for %..s conversion
      Message_Msg& Arg (const TCollection_AsciiString& theString) ;
    Message_Msg& operator << (const TCollection_AsciiString& theString) 
{
  return Arg(theString);
}
  
  //! Set a value for %..s conversion
      Message_Msg& Arg (const Handle(TCollection_HAsciiString)& theString) ;
    Message_Msg& operator << (const Handle(TCollection_HAsciiString)& theString) 
{
  return Arg(theString);
}
  
  //! Set a value for %..s conversion
  Standard_EXPORT   Message_Msg& Arg (const TCollection_ExtendedString& theString) ;
  Message_Msg& operator << (const TCollection_ExtendedString& theString) 
{
  return Arg(theString);
}
  
  //! Set a value for %..s conversion
      Message_Msg& Arg (const Handle(TCollection_HExtendedString)& theString) ;
    Message_Msg& operator << (const Handle(TCollection_HExtendedString)& theString) 
{
  return Arg(theString);
}
  
  //! Set a value for %..d, %..i, %..o, %..u, %..x or %..X conversion
  Standard_EXPORT   Message_Msg& Arg (const Standard_Integer theInt) ;
  Message_Msg& operator << (const Standard_Integer theInt) 
{
  return Arg(theInt);
}
  
  //! Set a value for %..f, %..e, %..E, %..g or %..G conversion
  Standard_EXPORT   Message_Msg& Arg (const Standard_Real theReal) ;
  Message_Msg& operator << (const Standard_Real theReal) 
{
  return Arg(theReal);
}
  
  //! Returns the original message text
     const  TCollection_ExtendedString& Original()  const;
  
  //! Returns current state of the message text with
  //! parameters to the moment
     const  TCollection_ExtendedString& Value()  const;
  
  //! Tells if Value differs from Original
      Standard_Boolean IsEdited()  const;
  
  //! Return the resulting message string with all parameters
  //! filled. If some parameters were not yet filled by calls
  //! to methods Arg (or <<), these parameters are filled by
  //! the word UNKNOWN
  Standard_EXPORT  const  TCollection_ExtendedString& Get() ;
operator const TCollection_ExtendedString& () { return Get(); }




protected:





private:

  
  Standard_EXPORT   Standard_Integer getFormat (const Standard_Integer theType, TCollection_AsciiString& theFormat) ;
  
  Standard_EXPORT   void replaceText (const Standard_Integer theFirst, const Standard_Integer theNb, const TCollection_ExtendedString& theStr) ;


  TCollection_ExtendedString myOriginal;
  TCollection_ExtendedString myMessageBody;
  TColStd_SequenceOfInteger mySeqOfFormats;


};


#include <Foundation/Message/Message_Msg.lxx>





#endif // _Message_Msg_HeaderFile
