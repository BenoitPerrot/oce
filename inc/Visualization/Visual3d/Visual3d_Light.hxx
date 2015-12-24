// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_Light_HeaderFile
#define _Visual3d_Light_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/Visual3d/Handle_Visual3d_Light.hxx>

#include <Visualization/Graphic3d/Graphic3d_CLight.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/Graphic3d/Graphic3d_Vertex.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Visualization/Visual3d/Visual3d_TypeOfLightSource.hxx>
class Visual3d_LightDefinitionError;
class Visual3d_View;
class Quantity_Color;
class Graphic3d_Vector;


//! This class defines and updates light sources.
//! There is no limit to the number of light sources defined.
//! Only the number of active sources is limited.
//!
//! TypeOfLightSource = TOLS_AMBIENT
//! TOLS_DIRECTIONAL
//! TOLS_POSITIONAL
//! TOLS_SPOT
//!
//! Angle is a radian value.
//! Concentration, Attenuation are in the [0,1] interval.
class Visual3d_Light : public MMgt_TShared
{

public:

  
  //! Creates a light from default values.
  //! Light sources are created in a visualiser
  //! and are activated in one of its views.
  //!
  //! Type	= TOLS_AMBIENT
  //! Color	= WHITE
  Standard_EXPORT Visual3d_Light();
  
  //! Creates an AMBIENT light source.
  //! Light sources are created in a visualiser
  //! and are activated in one of its views.
  Standard_EXPORT Visual3d_Light(const Quantity_Color& Color);
  
  //! Creates a DIRECTIONAL light source.
  //! Light sources are created in a visualiser
  //! and are activated in one of its views.
  //! Warning: Raises LightDefinitionError if <Direction> is null.
  Standard_EXPORT Visual3d_Light(const Quantity_Color& Color, const Graphic3d_Vector& Direction, const Standard_Boolean Headlight = Standard_False);
  
  //! Creates a POSITIONAL light source.
  //! Light sources are created in a visualiser
  //! and are activated in one of its views.
  //! Warning: Raises LightDefinitionError
  //! if <Fact1> and <Fact2> are null.
  //! if <Fact1> is a negative value or greater than 1.0.
  //! if <Fact2> is a negative value or greater than 1.0.
  Standard_EXPORT Visual3d_Light(const Quantity_Color& Color, const Graphic3d_Vertex& Position, const Standard_Real Fact1, const Standard_Real Fact2);
  
  //! Creates a SPOT light source.
  //! Light sources are created in a visualiser
  //! and are activated in one of its views.
  //! <Concentration> specifies the intensity distribution of
  //! the light.
  //! <AngleCone> specifies the angle (radians) of the cone
  //! created by the spot.
  //! the global attenuation is equal :
  //! 1 / (Fact1 + Fact2 * (norm(ObjectPosition - LightPosition)))
  //! Warning: Raises LightDefinitionError
  //! if <Direction> is null.
  //! if <Concentration> is a negative value or greater than 1.0.
  //! if <Fact1> and <Fact2> are null.
  //! if <Fact1> is a negative value or greater than 1.0.
  //! if <Fact2> is a negative value or greater than 1.0.
  //! if <AngleCone> is a negative value or greater than PI/2.
  Standard_EXPORT Visual3d_Light(const Quantity_Color& Color, const Graphic3d_Vertex& Position, const Graphic3d_Vector& Direction, const Standard_Real Concentration, const Standard_Real Fact1, const Standard_Real Fact2, const Standard_Real AngleCone);
  
  //! Modifies the angle (radians) of the cone created by the spot.
  //! Works only on TOLS_SPOT lights.
  //! Category: Methods to modify the class definition
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_SPOT.
  //! if <AngleCone> is a negative value or greater than PI/2.
  Standard_EXPORT   void SetAngle (const Standard_Real AngleCone) ;
  
  //! Modifies the attenuation factor of the light.
  //! Works only on the TOLS_POSITIONAL and TOLS_SPOT lights.
  //! Category: Methods to modify the class definition
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_SPOT or TOLS_POSITIONAL.
  //! if <Fact1> is a negative value or greater than 1.0.
  Standard_EXPORT   void SetAttenuation1 (const Standard_Real Fact1) ;
  
  //! Modifies the attenuation factor of the light.
  //! Works only on the TOLS_POSITIONAL and TOLS_SPOT lights.
  //! Category: Methods to modify the class definition
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_POSITIONAL or TOLS_SPOT.
  //! if <Fact2> is a negative value or greater than 1.0..
  Standard_EXPORT   void SetAttenuation2 (const Standard_Real Fact2) ;
  
  //! Modifies the colour of the light.
  Standard_EXPORT   void SetColor (const Quantity_Color& Color) ;
  
  //! Modifies the intensity distribution of the light.
  //! Works only on the TOLS_SPOT lights.
  //! Category: Methods to modify the class definition
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_SPOT.
  //! if <Concentration> is a negative value or greater than 1.0.
  Standard_EXPORT   void SetConcentration (const Standard_Real Concentration) ;
  
  //! Modifies the light direction.
  //! Works only on the TOLS_DIRECTIONAL and TOLS_SPOT lights.
  //! Default z
  //! Category: Methods to modify the class definition
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_DIRECTIONAL
  //! or TOLS_SPOT.
  //! if <Direction> is null.
  Standard_EXPORT   void SetDirection (const Graphic3d_Vector& Direction) ;
  
  //! Modifies the position of the light.
  //! Works only on the TOLS_POSITIONAL and TOLS_SPOT lights.
  //! Category: Methods to modify the class definition
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_POSITIONAL or TOLS_SPOT.
  Standard_EXPORT   void SetPosition (const Graphic3d_Vertex& Position) ;
  
  //! Returns the headlight  state of the light <me>
  Standard_EXPORT   Standard_Boolean Headlight()  const;
  
  //! Setup headlight flag.
  Standard_EXPORT   void SetHeadlight (const Standard_Boolean theValue) ;
  
  //! Returns the colour of the light <me>.
  Standard_EXPORT   Quantity_Color Color()  const;
  
  //! Returns the light type of <me>.
  //!
  //! TypeOfLightSource = TOLS_AMBIENT
  //! TOLS_DIRECTIONAL
  //! TOLS_POSITIONAL
  //! TOLS_SPOT
  Standard_EXPORT   Visual3d_TypeOfLightSource LightType()  const;
  
  //! Returns the definition of <me> if <me> is
  //! a light source of the TOLS_AMBIENT type.
  //! Category: Inquire methods
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_AMBIENT.
  Standard_EXPORT   void Values (Quantity_Color& Color)  const;
  
  //! Returns the definition of <me> if <me> is
  //! a light source of the TOLS_DIRECTIONAL type.
  //! Category: Inquire methods
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_DIRECTIONAL.
  Standard_EXPORT   void Values (Quantity_Color& Color, Graphic3d_Vector& Direction)  const;
  
  //! Returns the definition of <me> if <me> is
  //! a light source of the TOLS_POSITIONAL type.
  //! Category: Inquire methods
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_POSITIONAL.
  Standard_EXPORT   void Values (Quantity_Color& Color, Graphic3d_Vertex& Position, Standard_Real& Fact1, Standard_Real& Fact2)  const;
  
  //! Returns the definition of <me> if <me> is
  //! a light source of the TOLS_SPOT type.
  //! Category: Inquire methods
  //! Warning: Raises LightDefinitionError
  //! if the type of the light is not TOLS_SPOT.
  Standard_EXPORT   void Values (Quantity_Color& Color, Graphic3d_Vertex& Position, Graphic3d_Vector& Direction, Standard_Real& Concentration, Standard_Real& Fact1, Standard_Real& Fact2, Standard_Real& AngleCone)  const;
  
  //! Returns the light defintion.
  Standard_EXPORT  const  Graphic3d_CLight& CLight()  const;


friend class Visual3d_View;


  DEFINE_STANDARD_RTTI(Visual3d_Light)

protected:




private: 

  
  //! Returns True if <AAngle> is a valid
  //! spot light spread angle.
  Standard_EXPORT static   Standard_Boolean IsValid (const Standard_Real AAngle) ;

  Graphic3d_CLight myCLight;


};







#endif // _Visual3d_Light_HeaderFile
