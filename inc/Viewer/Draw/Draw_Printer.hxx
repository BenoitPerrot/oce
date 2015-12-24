// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Printer_HeaderFile
#define _Draw_Printer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Viewer/Draw/Handle_Draw_Printer.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Message/Message_Printer.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
#include <Foundation/Message/Message_Gravity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class TCollection_ExtendedString;
class TCollection_AsciiString;


//! Implementation of Printer class with output
//! (Message_Messenge) directed to Draw_Interpretor
class Draw_Printer : public Message_Printer
{

public:

  
  //! Creates a printer connected to the interpretor.
  Standard_EXPORT Draw_Printer(const Draw_Interpretor& theTcl);
  
  //! Send a string message with specified trace level.
  //! The parameter putEndl specified whether end-of-line
  //! should be added to the end of the message.
  //! This method must be redefined in descentant.
  Standard_EXPORT virtual   void Send (const TCollection_ExtendedString& theString, const Message_Gravity theGravity, const Standard_Boolean putEndl)  const;
  
  //! Send a string message with specified trace level.
  //! The parameter putEndl specified whether end-of-line
  //! should be added to the end of the message.
  //! Default implementation calls first method Send().
  Standard_EXPORT virtual   void Send (const Standard_CString theString, const Message_Gravity theGravity, const Standard_Boolean putEndl)  const;
  
  //! Send a string message with specified trace level.
  //! The parameter putEndl specified whether end-of-line
  //! should be added to the end of the message.
  //! Default implementation calls first method Send().
  Standard_EXPORT virtual   void Send (const TCollection_AsciiString& theString, const Message_Gravity theGravity, const Standard_Boolean putEndl)  const;




  DEFINE_STANDARD_RTTI(Draw_Printer)

protected:




private: 


  Standard_Address myTcl;


};







#endif // _Draw_Printer_HeaderFile
