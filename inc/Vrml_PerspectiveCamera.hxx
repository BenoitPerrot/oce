// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_PerspectiveCamera_HeaderFile
#define _Vrml_PerspectiveCamera_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Vrml_SFRotation.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class gp_Vec;
class Vrml_SFRotation;


//! specifies a PerspectiveCamera node of VRML specifying properties of cameras.
//! A perspective camera defines a perspective projection from a viewpoint. The viewing
//! volume for a perspective camera is a truncated right pyramid.
class Vrml_PerspectiveCamera 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_PerspectiveCamera();
  
  Standard_EXPORT Vrml_PerspectiveCamera(const gp_Vec& aPosition, const Vrml_SFRotation& aOrientation, const Standard_Real aFocalDistance, const Standard_Real aHeightAngle);
  
  Standard_EXPORT   void SetPosition (const gp_Vec& aPosition) ;
  
  Standard_EXPORT   gp_Vec Position()  const;
  
  Standard_EXPORT   void SetOrientation (const Vrml_SFRotation& aOrientation) ;
  
  Standard_EXPORT   Vrml_SFRotation Orientation()  const;
  
  Standard_EXPORT   void SetFocalDistance (const Standard_Real aFocalDistance) ;
  
  Standard_EXPORT   Standard_Real FocalDistance()  const;
  
  Standard_EXPORT   void SetAngle (const Standard_Real aHeightAngle) ;
  
  Standard_EXPORT   Standard_Real Angle()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  gp_Vec myPosition;
  Vrml_SFRotation myOrientation;
  Standard_Real myFocalDistance;
  Standard_Real myHeightAngle;


};







#endif // _Vrml_PerspectiveCamera_HeaderFile
