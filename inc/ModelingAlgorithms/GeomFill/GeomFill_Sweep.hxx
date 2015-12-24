// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Sweep_HeaderFile
#define _GeomFill_Sweep_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_LocationLaw.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_SectionLaw.hxx>
#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Geometry/TColGeom2d/Handle_TColGeom2d_HArray1OfCurve.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray2OfReal.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_ApproxStyle.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
class GeomFill_LocationLaw;
class GeomFill_SectionLaw;
class Geom_Surface;
class TColGeom2d_HArray1OfCurve;
class TColStd_HArray2OfReal;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_ConstructionError;
class Geom2d_Curve;


//! Geometrical Sweep Algorithm
class GeomFill_Sweep 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_Sweep(const Handle(GeomFill_LocationLaw)& Location, const Standard_Boolean WithKpart = Standard_True);
  
  //! Set parametric information
  //! [<First>, <Last>] Sets the parametric bound of the
  //! sweeping surface to build.
  //! <SectionFirst>, <SectionLast> gives coresponding
  //! bounds parameter on the section law of <First> and <Last>
  //!
  //! V-Iso on Sweeping Surface S(u,v) is defined by
  //! Location(v) and Section(w) where
  //! w = SectionFirst + (v - First) / (Last-First)
  //! * (SectionLast - SectionFirst)
  //!
  //! By default w = v, and First and Last are given by
  //! First and Last parameter stored in LocationLaw.
  Standard_EXPORT   void SetDomain (const Standard_Real First, const Standard_Real Last, const Standard_Real SectionFirst, const Standard_Real SectionLast) ;
  
  //! Set Approximation Tolerance
  //! Tol3d : Tolerance to surface approximation
  //! Tol2d : Tolerance used to perform curve approximation
  //! Normaly the 2d curve are approximated with a
  //! tolerance given by the resolution method define in
  //! <LocationLaw> but if this tolerance is too large Tol2d
  //! is used.
  //! TolAngular : Tolerance (in radian) to control the angle
  //! beetween tangents on the section law and
  //! tangent of iso-v on approximed surface
  Standard_EXPORT   void SetTolerance (const Standard_Real Tol3d, const Standard_Real BoundTol = 1.0, const Standard_Real Tol2d = 1.0e-5, const Standard_Real TolAngular = 1.0) ;
  
  //! Set the flag that indicates attempt to approximate
  //! a C1-continuous surface if a swept surface proved
  //! to be C0.
  Standard_EXPORT   void SetForceApproxC1 (const Standard_Boolean ForceApproxC1) ;
  
  //! returns true if sections are U-Iso
  //! This can be produce in some cases when <WithKpart> is True.
  Standard_EXPORT   Standard_Boolean ExchangeUV()  const;
  
  //! returns true if Parametrisation sens in U is inverse of
  //! parametrisation sens of section (or of path if ExchangeUV)
  Standard_EXPORT   Standard_Boolean UReversed()  const;
  
  //! returns true if Parametrisation sens in V is inverse of
  //! parametrisation sens of path (or of section if ExchangeUV)
  Standard_EXPORT   Standard_Boolean VReversed()  const;
  
  //! Build the Sweeep  Surface
  //! ApproxStyle defines Approximation Strategy
  //! - GeomFill_Section : The composed Function : Location X Section
  //! is directly approximed.
  //! - GeomFill_Location : The location law is approximed, and the
  //! SweepSurface is build algebric composition
  //! of approximed location law and section law
  //! This option is Ok, if Section.Surface() methode
  //! is effective.
  //! Continuity : The continuity in v waiting on the surface
  //! Degmax     : The maximum degree in v requiered on the surface
  //! Segmax     : The maximum number of span in v requiered on
  //! the surface
  //!
  //! raise If Domain are infinite or Profile not Setted.
  Standard_EXPORT   void Build (const Handle(GeomFill_SectionLaw)& Section, const GeomFill_ApproxStyle Methode = GeomFill_Location, const GeomAbs_Shape Continuity = GeomAbs_C2, const Standard_Integer Degmax = 10, const Standard_Integer Segmax = 30) ;
  
  //! Tells if the Surface is Buildt.
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Gets the Approximation  error.
  Standard_EXPORT   Standard_Real ErrorOnSurface()  const;
  
  //! Gets the Approximation  error.
  Standard_EXPORT   void ErrorOnRestriction (const Standard_Boolean IsFirst, Standard_Real& UError, Standard_Real& VError)  const;
  
  //! Gets the Approximation error.
  Standard_EXPORT   void ErrorOnTrace (const Standard_Integer IndexOfTrace, Standard_Real& UError, Standard_Real& VError)  const;
  
  Standard_EXPORT   Handle(Geom_Surface) Surface()  const;
  
  Standard_EXPORT   Handle(Geom2d_Curve) Restriction (const Standard_Boolean IsFirst)  const;
  
  Standard_EXPORT   Standard_Integer NumberOfTrace()  const;
  
  Standard_EXPORT   Handle(Geom2d_Curve) Trace (const Standard_Integer IndexOfTrace)  const;




protected:





private:

  
  Standard_EXPORT   Standard_Boolean Build2d (const GeomAbs_Shape Continuity, const Standard_Integer Degmax, const Standard_Integer Segmax) ;
  
  Standard_EXPORT   Standard_Boolean BuildAll (const GeomAbs_Shape Continuity, const Standard_Integer Degmax, const Standard_Integer Segmax) ;
  
  Standard_EXPORT   Standard_Boolean BuildProduct (const GeomAbs_Shape Continuity, const Standard_Integer Degmax, const Standard_Integer Segmax) ;
  
  Standard_EXPORT   Standard_Boolean BuildKPart() ;


  Standard_Real First;
  Standard_Real Last;
  Standard_Real SFirst;
  Standard_Real SLast;
  Standard_Real Tol3d;
  Standard_Real BoundTol;
  Standard_Real Tol2d;
  Standard_Real TolAngular;
  Standard_Real SError;
  Standard_Boolean myForceApproxC1;
  Handle(GeomFill_LocationLaw) myLoc;
  Handle(GeomFill_SectionLaw) mySec;
  Handle(Geom_Surface) mySurface;
  Handle(TColGeom2d_HArray1OfCurve) myCurve2d;
  Handle(TColStd_HArray2OfReal) CError;
  Standard_Boolean done;
  Standard_Boolean myExchUV;
  Standard_Boolean isUReversed;
  Standard_Boolean isVReversed;
  Standard_Boolean myKPart;


};







#endif // _GeomFill_Sweep_HeaderFile
