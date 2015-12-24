// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Texture2_HeaderFile
#define _Vrml_Texture2_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/Vrml/Handle_Vrml_SFImage.hxx>
#include <DataExchange/Vrml/Vrml_Texture2Wrap.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Vrml_SFImage;
class TCollection_AsciiString;


//! defines a Texture2 node of VRML specifying properties of geometry
//! and its appearance.
//! This  property  node  defines  a  texture  map  and  parameters  for  that  map
//! The  texture  can  be  read  from  the  URL  specified  by  the  filename  field.
//! To  turn  off  texturing,  set  the  filename  field  to  an  empty  string  ("").
//! Textures  can  alsobe  specified  inline  by  setting  the  image  field
//! to  contain  the  texture  data.
//! By  default  :
//! myFilename ("")
//! myImage (0 0 0)
//! myWrapS (Vrml_REPEAT)
//! myWrapT (Vrml_REPEAT)
class Vrml_Texture2 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_Texture2();
  
  Standard_EXPORT Vrml_Texture2(const TCollection_AsciiString& aFilename, const Handle(Vrml_SFImage)& aImage, const Vrml_Texture2Wrap aWrapS, const Vrml_Texture2Wrap aWrapT);
  
  Standard_EXPORT   void SetFilename (const TCollection_AsciiString& aFilename) ;
  
  Standard_EXPORT   TCollection_AsciiString Filename()  const;
  
  Standard_EXPORT   void SetImage (const Handle(Vrml_SFImage)& aImage) ;
  
  Standard_EXPORT   Handle(Vrml_SFImage) Image()  const;
  
  Standard_EXPORT   void SetWrapS (const Vrml_Texture2Wrap aWrapS) ;
  
  Standard_EXPORT   Vrml_Texture2Wrap WrapS()  const;
  
  Standard_EXPORT   void SetWrapT (const Vrml_Texture2Wrap aWrapT) ;
  
  Standard_EXPORT   Vrml_Texture2Wrap WrapT()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  TCollection_AsciiString myFilename;
  Handle(Vrml_SFImage) myImage;
  Vrml_Texture2Wrap myWrapS;
  Vrml_Texture2Wrap myWrapT;


};







#endif // _Vrml_Texture2_HeaderFile
