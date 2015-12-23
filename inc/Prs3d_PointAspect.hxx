// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_PointAspect_HeaderFile
#define _Prs3d_PointAspect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Prs3d_PointAspect.hxx>

#include <Handle_Graphic3d_AspectMarker3d.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <Visualization/Aspect/Aspect_TypeOfMarker.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfByte.hxx>
#include <Visualization/Graphic3d/Graphic3d_MarkerImage_Handle.hxx>
class Graphic3d_AspectMarker3d;
class Quantity_Color;
class TColStd_HArray1OfByte;


//! This  class  defines  attributes for the points
//! The points are drawn using markers, whose size does not depend on
//! the zoom value of the views.
class Prs3d_PointAspect : public Prs3d_BasicAspect
{

public:

  
  Standard_EXPORT Prs3d_PointAspect(const Aspect_TypeOfMarker aType, const Quantity_Color& aColor, const Standard_Real aScale);
  
  Standard_EXPORT Prs3d_PointAspect(const Aspect_TypeOfMarker aType, const Quantity_NameOfColor aColor, const Standard_Real aScale);
  
  //! defines only the urer defined marker point.
  Standard_EXPORT Prs3d_PointAspect(const Quantity_Color& AColor, const Standard_Integer AWidth, const Standard_Integer AHeight, const Handle(TColStd_HArray1OfByte)& ATexture);
  
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor) ;
  
  //! defines the color to be used when drawing a point.
  //! Default value: Quantity_NOC_YELLOW
  Standard_EXPORT   void SetColor (const Quantity_NameOfColor aColor) ;
  
  //! defines the type of representation to be used when drawing a point.
  //! Default value: Aspect_TOM_PLUS
  Standard_EXPORT   void SetTypeOfMarker (const Aspect_TypeOfMarker aType) ;
  
  //! defines the size of the marker used when drawing a point.
  //! Default value: 1.
  Standard_EXPORT   void SetScale (const Standard_Real aScale) ;
  
  Standard_EXPORT   Handle(Graphic3d_AspectMarker3d) Aspect()  const;
  
  //! Returns marker's texture size.
  Standard_EXPORT   void GetTextureSize (Standard_Integer& AWidth, Standard_Integer& AHeight) ;
  
  //! Returns marker's texture.
  Standard_EXPORT  const  Graphic3d_MarkerImage_Handle& GetTexture() ;




  DEFINE_STANDARD_RTTI(Prs3d_PointAspect)

protected:




private: 


  Handle(Graphic3d_AspectMarker3d) myAspect;


};







#endif // _Prs3d_PointAspect_HeaderFile
