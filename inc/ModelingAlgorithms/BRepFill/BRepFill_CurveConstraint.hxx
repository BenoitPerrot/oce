// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_CurveConstraint_HeaderFile
#define _BRepFill_CurveConstraint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepFill/Handle_BRepFill_CurveConstraint.hxx>

#include <ModelingAlgorithms/GeomPlate/GeomPlate_CurveConstraint.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurveOnSurface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
class Standard_ConstructionError;
class Adaptor3d_HCurveOnSurface;
class Adaptor3d_HCurve;


//! same as CurveConstraint from GeomPlate
//! with BRepAdaptor_Surface instead of
//! GeomAdaptor_Surface
class BRepFill_CurveConstraint : public GeomPlate_CurveConstraint
{

public:

  
  //! Create a constraint
  //! Order is the order of the constraint. The possible values for order are -1,0,1,2.
  //! Order i means constraints Gi
  //! Npt is the number of points associated with the constraint.
  //! TolDist is the maximum error to satisfy for G0 constraints
  //! TolAng is the maximum error to satisfy for G1 constraints
  //! TolCurv is the maximum error to satisfy for G2 constraints
  //! These errors can be replaced by laws of criterion.
  Standard_EXPORT BRepFill_CurveConstraint(const Handle(Adaptor3d_HCurveOnSurface)& Boundary, const Standard_Integer Order, const Standard_Integer NPt = 10, const Standard_Real TolDist = 0.0001, const Standard_Real TolAng = 0.01, const Standard_Real TolCurv = 0.1);
  
  Standard_EXPORT BRepFill_CurveConstraint(const Handle(Adaptor3d_HCurve)& Boundary, const Standard_Integer Tang, const Standard_Integer NPt = 10, const Standard_Real TolDist = 0.0001);




  DEFINE_STANDARD_RTTI(BRepFill_CurveConstraint)

protected:




private: 




};







#endif // _BRepFill_CurveConstraint_HeaderFile
