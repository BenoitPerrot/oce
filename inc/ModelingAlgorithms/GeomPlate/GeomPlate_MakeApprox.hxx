// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_MakeApprox_HeaderFile
#define _GeomPlate_MakeApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/GeomPlate/Handle_GeomPlate_Surface.hxx>
#include <Geometry/Geom/Handle_Geom_BSplineSurface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
class GeomPlate_Surface;
class Geom_BSplineSurface;
class AdvApp2Var_Criterion;



//! Allows you to convert a GeomPlate surface into a BSpline.
class GeomPlate_MakeApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Converts SurfPlate into a Geom_BSplineSurface with
  //! n Bezier pieces (n<=Nbmax) of degree <= dgmax
  //! and an approximation error < Tol3d if possible
  //! the criterion CritPlate is satisfied if possible
  Standard_EXPORT GeomPlate_MakeApprox(const Handle(GeomPlate_Surface)& SurfPlate, const AdvApp2Var_Criterion& PlateCrit, const Standard_Real Tol3d, const Standard_Integer Nbmax, const Standard_Integer dgmax, const GeomAbs_Shape Continuity = GeomAbs_C1, const Standard_Real EnlargeCoeff = 1.1);
  
  //! Converts SurfPlate into a Geom_BSplineSurface with
  //! n Bezier pieces (n<=Nbmax) of degree <= dgmax
  //! and an approximation error < Tol3d if possible
  //! if CritOrder = -1 , no criterion is used
  //! if CritOrder = 0 , a PlateG0Criterion is used with max value > 10*dmax
  //! if CritOrder = 1 , a PlateG1Criterion is used with max value > 10*dmax
  //! WARNING : for CritOrder = 0 or 1, only the constraints points of SurfPlate
  //! are used to evaluate the value of the criterion
  Standard_EXPORT GeomPlate_MakeApprox(const Handle(GeomPlate_Surface)& SurfPlate, const Standard_Real Tol3d, const Standard_Integer Nbmax, const Standard_Integer dgmax, const Standard_Real dmax, const Standard_Integer CritOrder = 0, const GeomAbs_Shape Continuity = GeomAbs_C1, const Standard_Real EnlargeCoeff = 1.1);
  
  //! Returns the BSpline surface extracted from the
  //! GeomPlate_MakeApprox object.
  Standard_EXPORT   Handle(Geom_BSplineSurface) Surface()  const;
  
  //! Returns the error in computation of the approximation
  //! surface. This is the distance between the entire target
  //! BSpline surface and the entire original surface
  //! generated by BuildPlateSurface and converted by GeomPlate_Surface.
  Standard_EXPORT   Standard_Real ApproxError()  const;
  
  //! Returns the criterion error in computation of the
  //! approximation surface. This is estimated relative to the
  //! curve and point constraints only.
  Standard_EXPORT   Standard_Real CriterionError()  const;




protected:





private:



  Handle(GeomPlate_Surface) myPlate;
  Handle(Geom_BSplineSurface) mySurface;
  Standard_Real myAppError;
  Standard_Real myCritError;


};







#endif // _GeomPlate_MakeApprox_HeaderFile
