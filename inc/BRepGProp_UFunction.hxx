// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_UFunction_HeaderFile
#define _BRepGProp_UFunction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepGProp_Face.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/GProp/GProp_ValueType.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Optimization/math_Function.hxx>
class BRepGProp_Face;
class gp_Pnt;
class gp_XYZ;


//! This class represents the integrand function for
//! computation of an inner integral. The returned value
//! depends on the value type and the flag IsByPoint.
//!
//! The type of returned value is the one of the following
//! values:
//! -  GProp_Mass - volume computation.
//! -  GProp_CenterMassX, GProp_CenterMassY,
//! GProp_CenterMassZ - X, Y and Z coordinates of center
//! of mass computation.
//! -  GProp_InertiaXX, GProp_InertiaYY, GProp_InertiaZZ,
//! GProp_InertiaXY, GProp_InertiaXZ, GProp_InertiaYZ
//! - moments of inertia computation.
//!
//! If the flag IsByPoint is set to Standard_True, the value is
//! returned for the region of space that is delimited by a
//! surface and a point. Otherwise all computations are
//! performed for the region of space delimited by a surface
//! and a plane.
class BRepGProp_UFunction  : public math_Function
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructor. Initializes the function with the face, the
  //! location point, the flag IsByPoint and the coefficients
  //! theCoeff that have different meaning depending on the value
  //! of IsByPoint.
  //! If IsByPoint is equal to Standard_True, the number of the
  //! coefficients is equal to 3 and they represent X, Y and Z
  //! coordinates (theCoeff[0], theCoeff[1] and theCoeff[2]
  //! correspondingly) of the shift, if the inertia is computed
  //! with respect to the point different then the location.
  //! If IsByPoint is equal to Standard_False, the number of the
  //! coefficients is 4 and they represent the combination of
  //! plane parameters and shift values.
  Standard_EXPORT BRepGProp_UFunction(const BRepGProp_Face& theSurface, const gp_Pnt& theVertex, const Standard_Boolean IsByPoint, const Standard_Address theCoeffs);
  
  //! Setting the type of the value to be returned.
      void SetValueType (const GProp_ValueType theType) ;
  
  //! Setting the V parameter that is constant during the
  //! integral computation.
      void SetVParam (const Standard_Real theVParam) ;
  
  //! Returns a value of the function.
  Standard_EXPORT virtual   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;




protected:





private:

  
  //! Private method. Returns the value for volume computation.
  //! Other returned values are:
  //! -  thePMP0 - PSurf(X,Y) minus Location.
  //! -  theS and theD1 coeffitients that are computed and used
  //! for computation of center of mass and inertia values
  //! by plane.
  Standard_EXPORT   Standard_Real VolumeValue (const Standard_Real X, gp_XYZ& thePMP0, Standard_Real& theS, Standard_Real& theD1) ;
  
  //! Private method. Returns a value for the center of mass
  //! computation. If the value type other then GProp_CenterMassX,
  //! GProp_CenterMassY or GProp_CenterMassZ this method returns
  //! Standard_False. Returns Standard_True in case of successful
  //! computation of a value.
  Standard_EXPORT   Standard_Boolean CenterMassValue (const Standard_Real X, Standard_Real& F) ;
  
  //! Private method. Computes the value of intertia. The type of
  //! a value returned is defined by the value type. If it is
  //! other then GProp_InertiaXX, GProp_InertiaYY,
  //! GProp_InertiaZZ, GProp_InertiaXY, GProp_InertiaXZ or
  //! GProp_InertiaYZ, the method returns Standard_False. Returns
  //! Standard_True in case of successful computation of a value
  Standard_EXPORT   Standard_Boolean InertiaValue (const Standard_Real X, Standard_Real& F) ;


  BRepGProp_Face mySurface;
  gp_Pnt myVertex;
  Standard_Address myCoeffs;
  Standard_Real myVParam;
  GProp_ValueType myValueType;
  Standard_Boolean myIsByPoint;


};


#include <BRepGProp_UFunction.lxx>





#endif // _BRepGProp_UFunction_HeaderFile
