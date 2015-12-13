// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Texture1D_HeaderFile
#define _Graphic3d_Texture1D_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_Texture1D.hxx>

#include <Graphic3d_NameOfTexture1D.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_TypeOfTexture.hxx>
#include <Image_PixMap_Handle.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_OutOfRange;
class TCollection_AsciiString;


//! This is an abstract class for managing 1D textures.
class Graphic3d_Texture1D : public Graphic3d_TextureMap
{

public:

  

  //! Returns the name of the predefined textures or NOT_1D_UNKNOWN
  //! when the name is given as a filename.
  Standard_EXPORT   Graphic3d_NameOfTexture1D Name()  const;
  

  //! Returns the number of predefined textures.
  Standard_EXPORT static   Standard_Integer NumberOfTextures() ;
  

  //! Returns the name of the predefined texture of rank <aRank>
  Standard_EXPORT static   TCollection_AsciiString TextureName (const Standard_Integer aRank) ;




  DEFINE_STANDARD_RTTI(Graphic3d_Texture1D)

protected:

  
  Standard_EXPORT Graphic3d_Texture1D(const TCollection_AsciiString& theFileName, const Graphic3d_TypeOfTexture theType);
  
  Standard_EXPORT Graphic3d_Texture1D(const Graphic3d_NameOfTexture1D theName, const Graphic3d_TypeOfTexture theType);
  
  Standard_EXPORT Graphic3d_Texture1D(const Image_PixMap_Handle& thePixMap, const Graphic3d_TypeOfTexture theType);



private: 


  Graphic3d_NameOfTexture1D myName;


};







#endif // _Graphic3d_Texture1D_HeaderFile
