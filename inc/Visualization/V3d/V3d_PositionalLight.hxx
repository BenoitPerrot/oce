// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_PositionalLight_HeaderFile
#define _V3d_PositionalLight_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/V3d/Handle_V3d_PositionalLight.hxx>

#include <Visualization/V3d/V3d_PositionLight.hxx>
#include <Visualization/V3d/Handle_V3d_Viewer.hxx>
#include <Visualization/V3d/V3d_Coordinate.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Foundation/Quantity/Quantity_Coefficient.hxx>
#include <Visualization/V3d/Handle_V3d_View.hxx>
#include <Visualization/V3d/V3d_TypeOfRepresentation.hxx>
#include <Visualization/Graphic3d/Handle_Graphic3d_Group.hxx>
class V3d_BadValue;
class V3d_Viewer;
class V3d_View;
class Graphic3d_Group;


//! Creation and modification of an isolated
//! (positional) light source.
class V3d_PositionalLight : public V3d_PositionLight
{

public:

  
  //! Creates an isolated light source X,Y,Z in the viewer.
  //! It is also defined by the color Color and
  //! two attenuation factors Attenuation1, Attenuation2.
  //! The resulting attenuation factor determining the
  //! illumination of a surface depends on the following
  //! formula :
  //! F = 1/(A1 + A2*Length)
  //! A1,A2 being the two factors of attenuation
  //! Length is the distance of the isolated source
  //! from the surface.
  //! Warning!  raises BadValue from V3d
  //! if one of the attenuation coefficients is not between 0 et 1.
  Standard_EXPORT V3d_PositionalLight(const Handle(V3d_Viewer)& VM, const V3d_Coordinate X, const V3d_Coordinate Y, const V3d_Coordinate Z, const Quantity_NameOfColor Color = Quantity_NOC_WHITE, const Quantity_Coefficient Attenuation1 = 1.0, const Quantity_Coefficient Attenuation2 = 0.0);
  
  //! Creates a light source of the Positional type
  //! in the viewer.
  //! Xt,Yt,Zt : Coordinate of Target light source.
  //! Xp,Yp,Zp : Coordinate of Position light source.
  //! The light source is also defined by the color Color
  //! and two attenuation factors Attenuation1,
  //! Attenuation2 that determine the illumination of a
  //! surface using the following formula :
  //! F = 1/(A1 + A2*Length) where:
  //! -   A1,A2 are the two attenuation factors, and
  //! -   Length is the distance from the isolated source.
  //! Warning! raises BadValue from V3d
  //! if one of the attenuation coefficients is not between 0 et 1.
  Standard_EXPORT V3d_PositionalLight(const Handle(V3d_Viewer)& VM, const V3d_Coordinate Xt, const V3d_Coordinate Yt, const V3d_Coordinate Zt, const V3d_Coordinate Xp, const V3d_Coordinate Yp, const V3d_Coordinate Zp, const Quantity_NameOfColor Color = Quantity_NOC_WHITE, const Quantity_Coefficient Attenuation1 = 1.0, const Quantity_Coefficient Attenuation2 = 0.0);
  
  //! Defines the position of the light source.
  Standard_EXPORT virtual   void SetPosition (const V3d_Coordinate X, const V3d_Coordinate Y, const V3d_Coordinate Z) ;
  
  //! Defines the attenuation factors.
  //! Warning: raises BadValue from V3d
  //! if one of the attenuation coefficients is not between 0 et 1.
  Standard_EXPORT   void SetAttenuation (const Quantity_Coefficient A1, const Quantity_Coefficient A2) ;
  
  //! Display the graphic structure of light source
  //! in the choosen view. We have three type of representation
  //! - SIMPLE   : Only the light source is displayed.
  //! - PARTIAL  : The light source and the light space are
  //! displayed.
  //! - COMPLETE : The light source, the light space and the
  //! radius of light space are displayed.
  //! We can choose the "SAMELAST" as parameter of representation
  //! In this case the graphic structure representation will be
  //! the last displayed.
  Standard_EXPORT   void Display (const Handle(V3d_View)& aView, const V3d_TypeOfRepresentation Representation) ;
  
  //! Returns the position of the light source.
  Standard_EXPORT   void Position (V3d_Coordinate& X, V3d_Coordinate& Y, V3d_Coordinate& Z)  const;
  
  //! Returns the attenuation factors A1,A2 of the light
  //! source used at construction time.
  Standard_EXPORT   void Attenuation (Quantity_Coefficient& A1, Quantity_Coefficient& A2)  const;




  DEFINE_STANDARD_RTTI(V3d_PositionalLight)

protected:




private: 

  
  //! Defined the representation of the positional light source.
  Standard_EXPORT   void Symbol (const Handle(Graphic3d_Group)& gsymbol, const Handle(V3d_View)& aView)  const;



};







#endif // _V3d_PositionalLight_HeaderFile
