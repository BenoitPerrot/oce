// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_DirectionalLight_HeaderFile
#define _V3d_DirectionalLight_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_V3d_DirectionalLight.hxx>

#include <Visualization/Graphic3d/Graphic3d_Vertex.hxx>
#include <V3d_PositionLight.hxx>
#include <Handle_V3d_Viewer.hxx>
#include <V3d_TypeOfOrientation.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <V3d_Coordinate.hxx>
#include <Foundation/Quantity/Quantity_Parameter.hxx>
#include <Handle_V3d_View.hxx>
#include <V3d_TypeOfRepresentation.hxx>
#include <Handle_Graphic3d_Group.hxx>
class V3d_BadValue;
class V3d_Viewer;
class V3d_View;
class Graphic3d_Group;


//! Create and modify a directional light source
//! in a viewer.
class V3d_DirectionalLight : public V3d_PositionLight
{

public:

  
  //! Creates a directional light source in the viewer.
  Standard_EXPORT V3d_DirectionalLight(const Handle(V3d_Viewer)& VM, const V3d_TypeOfOrientation Direction = V3d_XposYposZpos, const Quantity_NameOfColor Color = Quantity_NOC_WHITE, const Standard_Boolean Headlight = Standard_False);
  
  //! Creates a directional light source in the viewer.
  //! Xt,Yt,Zt : Coordinate of light source Target.
  //! Xp,Yp,Zp : Coordinate of light source Position.
  //! The others parameters describe before.
  Standard_EXPORT V3d_DirectionalLight(const Handle(V3d_Viewer)& VM, const V3d_Coordinate Xt, const V3d_Coordinate Yt, const V3d_Coordinate Zt, const V3d_Coordinate Xp, const V3d_Coordinate Yp, const V3d_Coordinate Zp, const Quantity_NameOfColor Color = Quantity_NOC_WHITE, const Standard_Boolean Headlight = Standard_False);
  
  //! Defines the direction of the light source
  //! by a predefined orientation.
  Standard_EXPORT   void SetDirection (const V3d_TypeOfOrientation Direction) ;
  
  //! Defines the direction of the light source by the predefined
  //! vector Xm,Ym,Zm.
  //! Warning: raises  BadValue from V3d if the vector is null.
  Standard_EXPORT   void SetDirection (const Quantity_Parameter Xm, const Quantity_Parameter Ym, const Quantity_Parameter Zm) ;
  
  //! Defines the point of light source representation.
  Standard_EXPORT   void SetDisplayPosition (const V3d_Coordinate X, const V3d_Coordinate Y, const V3d_Coordinate Z) ;
  
  //! Calls SetDisplayPosition method.
  Standard_EXPORT virtual   void SetPosition (const V3d_Coordinate Xp, const V3d_Coordinate Yp, const V3d_Coordinate Zp) ;
  
  //! Display the graphic structure of light source
  //! in the choosen view. We have three type of representation
  //! - SIMPLE   : Only the light source is displayed.
  //! - PARTIAL  : The light source and the light space are
  //! displayed.
  //! - COMPLETE : The same representation as PARTIAL.
  //! We can choose the "SAMELAST" as parameter of representation
  //! In this case the graphic structure representation will be
  //! the last displayed.
  Standard_EXPORT   void Display (const Handle(V3d_View)& aView, const V3d_TypeOfRepresentation Representation) ;
  
  //! Calls DisplayPosition method.
  Standard_EXPORT virtual   void Position (V3d_Coordinate& X, V3d_Coordinate& Y, V3d_Coordinate& Z)  const;
  
  //! Returns the choosen position to represent the light
  //! source.
  Standard_EXPORT   void DisplayPosition (V3d_Coordinate& X, V3d_Coordinate& Y, V3d_Coordinate& Z)  const;
  
  //! Returns the Vx,Vy,Vz direction of the light source.
  Standard_EXPORT   void Direction (Quantity_Parameter& Vx, Quantity_Parameter& Vy, Quantity_Parameter& Vz)  const;




  DEFINE_STANDARD_RTTI(V3d_DirectionalLight)

protected:




private: 

  
  //! Defines the representation of the directional light source.
  Standard_EXPORT   void Symbol (const Handle(Graphic3d_Group)& gsymbol, const Handle(V3d_View)& aView)  const;

  Graphic3d_Vertex MyDisplayPosition;


};







#endif // _V3d_DirectionalLight_HeaderFile
