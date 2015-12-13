// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_Drawer_HeaderFile
#define _MeshVS_Drawer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_Drawer.hxx>

#include <TColStd_DataMapOfIntegerInteger.hxx>
#include <MeshVS_DataMapOfIntegerBoolean.hxx>
#include <TColStd_DataMapOfIntegerReal.hxx>
#include <MeshVS_DataMapOfIntegerColor.hxx>
#include <MeshVS_DataMapOfIntegerMaterial.hxx>
#include <MeshVS_DataMapOfIntegerAsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Quantity_Color;
class Graphic3d_MaterialAspect;
class TCollection_AsciiString;


//! This class provided the common interface to share between classes
//! big set of constants affecting to object appearance. By default, this class
//! can store integers, doubles, OCC colors, OCC materials. Each of OCC enum members
//! can be stored as integers.
class MeshVS_Drawer : public MMgt_TShared
{

public:

  
  //! This method copies other drawer contents to this.
  Standard_EXPORT virtual   void Assign (const Handle(MeshVS_Drawer)& aDrawer) ;
  
  Standard_EXPORT   void SetInteger (const Standard_Integer Key, const Standard_Integer Value) ;
  
  Standard_EXPORT   void SetDouble (const Standard_Integer Key, const Standard_Real Value) ;
  
  Standard_EXPORT   void SetBoolean (const Standard_Integer Key, const Standard_Boolean Value) ;
  
  Standard_EXPORT   void SetColor (const Standard_Integer Key, const Quantity_Color& Value) ;
  
  Standard_EXPORT   void SetMaterial (const Standard_Integer Key, const Graphic3d_MaterialAspect& Value) ;
  
  Standard_EXPORT   void SetAsciiString (const Standard_Integer Key, const TCollection_AsciiString& Value) ;
  
  Standard_EXPORT   Standard_Boolean GetInteger (const Standard_Integer Key, Standard_Integer& Value)  const;
  
  Standard_EXPORT   Standard_Boolean GetDouble (const Standard_Integer Key, Standard_Real& Value)  const;
  
  Standard_EXPORT   Standard_Boolean GetBoolean (const Standard_Integer Key, Standard_Boolean& Value)  const;
  
  Standard_EXPORT   Standard_Boolean GetColor (const Standard_Integer Key, Quantity_Color& Value)  const;
  
  Standard_EXPORT   Standard_Boolean GetMaterial (const Standard_Integer Key, Graphic3d_MaterialAspect& Value)  const;
  
  Standard_EXPORT   Standard_Boolean GetAsciiString (const Standard_Integer Key, TCollection_AsciiString& Value)  const;
  
  Standard_EXPORT   Standard_Boolean RemoveInteger (const Standard_Integer Key) ;
  
  Standard_EXPORT   Standard_Boolean RemoveDouble (const Standard_Integer Key) ;
  
  Standard_EXPORT   Standard_Boolean RemoveBoolean (const Standard_Integer Key) ;
  
  Standard_EXPORT   Standard_Boolean RemoveColor (const Standard_Integer Key) ;
  
  Standard_EXPORT   Standard_Boolean RemoveMaterial (const Standard_Integer Key) ;
  
  Standard_EXPORT   Standard_Boolean RemoveAsciiString (const Standard_Integer Key) ;




  DEFINE_STANDARD_RTTI(MeshVS_Drawer)

protected:




private: 


  TColStd_DataMapOfIntegerInteger myIntegers;
  MeshVS_DataMapOfIntegerBoolean myBooleans;
  TColStd_DataMapOfIntegerReal myDoubles;
  MeshVS_DataMapOfIntegerColor myColors;
  MeshVS_DataMapOfIntegerMaterial myMaterials;
  MeshVS_DataMapOfIntegerAsciiString myAsciiString;


};







#endif // _MeshVS_Drawer_HeaderFile
