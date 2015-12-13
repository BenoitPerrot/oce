// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Printer_HeaderFile
#define _OSD_Printer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_AsciiString.hxx>
#include <Foundation/OSD/OSD_Error.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_ConstructionError;
class Standard_NullObject;
class OSD_OSDError;
class TCollection_AsciiString;


//! Selects a printer (used by File).
class OSD_Printer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Initializes printer to use with its name.
  //! The string must contain only ASCII characters
  //! between ' ' and '~'; this means no control character
  //! and no extended ASCII code. If it is not the case the
  //! exception ConstructionError is raised.
  Standard_EXPORT OSD_Printer(const TCollection_AsciiString& Name);
  
  //! Changes name of printer to use.
  Standard_EXPORT   void SetName (const TCollection_AsciiString& Name) ;
  
  //! Returns name of current printer
  Standard_EXPORT   void Name (TCollection_AsciiString& Name)  const;
  
  //! Returns TRUE if an error occurs
  Standard_EXPORT   Standard_Boolean Failed()  const;
  
  //! Resets error counter to zero
  Standard_EXPORT   void Reset() ;
  
  //! Raises OSD_Error
  Standard_EXPORT   void Perror() ;
  
  //! Returns error number if 'Failed' is TRUE.
  Standard_EXPORT   Standard_Integer Error()  const;




protected:





private:



  TCollection_AsciiString myName;
  OSD_Error myError;


};







#endif // _OSD_Printer_HeaderFile
