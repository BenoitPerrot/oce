// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Info_HeaderFile
#define _Vrml_Info_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_AsciiString.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TCollection_AsciiString;


//! defines a Info node of VRML specifying properties of geometry
//! and its appearance.
//! It  is  used  to  store  information  in  the  scene  graph,
//! Typically  for  application-specific  purposes,  copyright  messages,
//! or  other  strings.
class Vrml_Info 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_Info(const TCollection_AsciiString& aString = "<Undefined info>");
  
  Standard_EXPORT   void SetString (const TCollection_AsciiString& aString) ;
  
  Standard_EXPORT   TCollection_AsciiString String()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  TCollection_AsciiString myString;


};







#endif // _Vrml_Info_HeaderFile
