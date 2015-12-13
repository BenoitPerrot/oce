// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_LexicalCompare_HeaderFile
#define _Resource_LexicalCompare_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
class TCollection_AsciiString;



class Resource_LexicalCompare 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Resource_LexicalCompare();
  
  //! Returns True if <Left> is lower than <Right>.
  Standard_EXPORT   Standard_Boolean IsLower (const TCollection_AsciiString& Left, const TCollection_AsciiString& Right)  const;




protected:





private:





};







#endif // _Resource_LexicalCompare_HeaderFile
