// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _UnitsMethods_HeaderFile
#define _UnitsMethods_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Geom2d_Curve;
class Geom_Surface;



class UnitsMethods 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Initializes the 3 factors for the conversion of
  //! units
  Standard_EXPORT static   void InitializeFactors (const Standard_Real LengthFactor, const Standard_Real PlaneAngleFactor, const Standard_Real SolidAngleFactor) ;
  
  Standard_EXPORT static   Standard_Real LengthFactor() ;
  
  Standard_EXPORT static   Standard_Real PlaneAngleFactor() ;
  
  Standard_EXPORT static   Standard_Real SolidAngleFactor() ;
  
  Standard_EXPORT static   void Set3dConversion (const Standard_Boolean B) ;
  
  Standard_EXPORT static   Standard_Boolean Convert3d() ;
  
  Standard_EXPORT static   Handle(Geom2d_Curve) RadianToDegree (const Handle(Geom2d_Curve)& C, const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT static   Handle(Geom2d_Curve) DegreeToRadian (const Handle(Geom2d_Curve)& C, const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT static   Handle(Geom2d_Curve) MirrorPCurve (const Handle(Geom2d_Curve)& C) ;
  
  //! Returns value of unit encoded by parameter param
  //! (integer value denoting unit, as described in IGES
  //! standard) in millimeters
  Standard_EXPORT static   Standard_Real GetLengthFactorValue (const Standard_Integer param) ;
  
  //! Returns value of current internal unit for CASCADE
  //! in millemeters
  Standard_EXPORT static   Standard_Real GetCasCadeLengthUnit() ;
  
  //! Sets value of current internal unit for CASCADE
  //! by parameter param (integer value denoting unit,
  //! as described in IGES standard)
  //! GetCasCadeLengthUnit() will then return value
  //! equal to GetLengthFactorValue(param)
  Standard_EXPORT static   void SetCasCadeLengthUnit (const Standard_Integer param) ;




protected:





private:





};







#endif // _UnitsMethods_HeaderFile
