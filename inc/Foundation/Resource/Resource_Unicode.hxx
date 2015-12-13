// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_Unicode_HeaderFile
#define _Resource_Unicode_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_PCharacter.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Resource/Resource_FormatType.hxx>
class TCollection_ExtendedString;


//! This class provides functions used to convert a non-ASCII C string
//! given in ANSI, EUC, GB or SJIS format, to a
//! Unicode string of extended characters, and vice versa.
class Resource_Unicode 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Converts non-ASCII CString <fromstr> in SJIS format
  //! to Unicode ExtendedString <tostr>.
  Standard_EXPORT static   void ConvertSJISToUnicode (const Standard_CString fromstr, TCollection_ExtendedString& tostr) ;
  
  //! Converts non-ASCII CString <fromstr> in EUC format
  //! to Unicode ExtendedString <tostr>.
  Standard_EXPORT static   void ConvertEUCToUnicode (const Standard_CString fromstr, TCollection_ExtendedString& tostr) ;
  
  //! Converts non-ASCII CString <fromstr> in GB format
  //! to Unicode ExtendedString <tostr>.
  Standard_EXPORT static   void ConvertGBToUnicode (const Standard_CString fromstr, TCollection_ExtendedString& tostr) ;
  
  //! Converts non-ASCII CString <fromstr> in ANSI format
  //! to Unicode ExtendedString <tostr>.
  Standard_EXPORT static   void ConvertANSIToUnicode (const Standard_CString fromstr, TCollection_ExtendedString& tostr) ;
  
  //! Converts Unicode ExtendedString <fromstr> to non-ASCII
  //! CString <tostr> in SJIS format, limited to <maxsize>
  //! characters. To translate the whole <fromstr>, use more
  //! than twice the length of <fromstr>. Returns true if
  //! <maxsize> has not been reached before end of conversion.
  Standard_EXPORT static   Standard_Boolean ConvertUnicodeToSJIS (const TCollection_ExtendedString& fromstr, Standard_PCharacter& tostr, const Standard_Integer maxsize) ;
  
  //! Converts Unicode ExtendedString <fromstr> to non-ASCII
  //! CString <tostr> in EUC format, limited to <maxsize>
  //! characters. To translate the whole <fromstr>, use more
  //! than twice the length of <fromstr>. Returns true if
  //! <maxsize> has not been reached before end of conversion.
  Standard_EXPORT static   Standard_Boolean ConvertUnicodeToEUC (const TCollection_ExtendedString& fromstr, Standard_PCharacter& tostr, const Standard_Integer maxsize) ;
  
  //! Converts Unicode ExtendedString <fromstr> to non-ASCII
  //! CString <tostr> in GB format, limited to <maxsize>
  //! characters. To translate the whole <fromstr>, use more
  //! than twice the length of <fromstr>. Returns true if
  //! <maxsize> has not been reached before end of conversion.
  Standard_EXPORT static   Standard_Boolean ConvertUnicodeToGB (const TCollection_ExtendedString& fromstr, Standard_PCharacter& tostr, const Standard_Integer maxsize) ;
  
  //! Converts Unicode ExtendedString <fromstr> to non-ASCII
  //! CString <tostr> in ANSI format, limited to <maxsize>
  //! characters. To translate the whole <fromstr>, use more
  //! than twice the length of <fromstr>.  Returns true if
  //! <maxsize> has not been reached before end of conversion.
  Standard_EXPORT static   Standard_Boolean ConvertUnicodeToANSI (const TCollection_ExtendedString& fromstr, Standard_PCharacter& tostr, const Standard_Integer maxsize) ;
  
  //! Defines the current conversion format as typecode.
  //! This conversion format will then be used by the
  //! functions ConvertFormatToUnicode and
  //! ConvertUnicodeToFormat to convert the strings.
  Standard_EXPORT static   void SetFormat (const Resource_FormatType typecode) ;
  
  //! Returns the current conversion format (either
  //! ANSI, EUC, GB or SJIS).
  //! The current converting format must be defined in
  //! advance with the SetFormat function.
  Standard_EXPORT static   Resource_FormatType GetFormat() ;
  
  //! Reads converting format from resource "FormatType"
  //! in Resource Manager "CharSet"
  Standard_EXPORT static   void ReadFormat() ;
  
  //! Converts the non-ASCII C string fromstr to the
  //! Unicode string of extended characters tostr.
  //! fromstr is translated according to the format
  //! (either ANSI, EUC, GB or SJIS) returned by the function GetFormat.
  Standard_EXPORT static   void ConvertFormatToUnicode (const Standard_CString fromstr, TCollection_ExtendedString& tostr) ;
  
  //! Converts the Unicode string of extended
  //! characters fromstr to the non-ASCII C string
  //! tostr according to the format (either ANSI, EUC,
  //! GB or SJIS) returned by the function GetFormat.
  //! maxsize limits the size of the string tostr to a
  //! maximum number of characters. You need more
  //! than twice the length of the string fromstr to
  //! complete the conversion.
  //! The function returns true if conversion is
  //! complete, i.e. the maximum number of characters
  //! maxsize is not reached by tostr before the end
  //! of conversion of fromstr.
  Standard_EXPORT static   Standard_Boolean ConvertUnicodeToFormat (const TCollection_ExtendedString& fromstr, Standard_PCharacter& tostr, const Standard_Integer maxsize) ;




protected:





private:





};







#endif // _Resource_Unicode_HeaderFile
