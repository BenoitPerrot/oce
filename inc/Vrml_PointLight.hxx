// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_PointLight_HeaderFile
#define _Vrml_PointLight_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Foundation/Quantity/Quantity_Color.hxx>
#include <gp_Vec.hxx>
#include <Standard_OStream.hxx>
class Quantity_Color;
class gp_Vec;


//! defines a point  light node of VRML specifying
//! properties of lights.
//! This  node  defines  a  point  light  source   at  a  fixed  3D  location
//! A  point  source  illuminates equally  in  all  directions;
//! that  is  omni-directional.
//! Color is  written  as  an  RGB  triple.
//! Light intensity must be in the range 0.0 to 1.0, inclusive.
class Vrml_PointLight 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_PointLight();
  
  Standard_EXPORT Vrml_PointLight(const Standard_Boolean aOnOff, const Standard_Real aIntensity, const Quantity_Color& aColor, const gp_Vec& aLocation);
  
  Standard_EXPORT   void SetOnOff (const Standard_Boolean aOnOff) ;
  
  Standard_EXPORT   Standard_Boolean OnOff()  const;
  
  Standard_EXPORT   void SetIntensity (const Standard_Real aIntensity) ;
  
  Standard_EXPORT   Standard_Real Intensity()  const;
  
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor) ;
  
  Standard_EXPORT   Quantity_Color Color()  const;
  
  Standard_EXPORT   void SetLocation (const gp_Vec& aLocation) ;
  
  Standard_EXPORT   gp_Vec Location()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  Standard_Boolean myOnOff;
  Standard_Real myIntensity;
  Quantity_Color myColor;
  gp_Vec myLocation;


};







#endif // _Vrml_PointLight_HeaderFile
