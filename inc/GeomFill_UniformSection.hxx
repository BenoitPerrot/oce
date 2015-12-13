// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_UniformSection_HeaderFile
#define _GeomFill_UniformSection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_GeomFill_UniformSection.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_BSplineSurface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
class Geom_Curve;
class Geom_BSplineCurve;
class Standard_OutOfRange;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;
class TColgp_Array1OfVec;
class Geom_BSplineSurface;
class TColStd_Array1OfInteger;
class gp_Pnt;


//! Define an Constant Section Law
class GeomFill_UniformSection : public GeomFill_SectionLaw
{

public:

  
  //! Make an constant Law with C.
  //! [First, Last] define law definition domain
  Standard_EXPORT GeomFill_UniformSection(const Handle(Geom_Curve)& C, const Standard_Real FirstParameter = 0.0, const Standard_Real LastParameter = 1.0);
  
  //! compute the section for v = param
  Standard_EXPORT virtual   Standard_Boolean D0 (const Standard_Real Param, TColgp_Array1OfPnt& Poles, TColStd_Array1OfReal& Weigths) ;
  
  //! compute the first  derivative in v direction  of the
  //! section for v =  param
  //! Warning : It used only for C1 or C2 aproximation
  Standard_EXPORT virtual   Standard_Boolean D1 (const Standard_Real Param, TColgp_Array1OfPnt& Poles, TColgp_Array1OfVec& DPoles, TColStd_Array1OfReal& Weigths, TColStd_Array1OfReal& DWeigths) ;
  
  //! compute the second derivative  in v direction of the
  //! section  for v = param
  //! Warning : It used only for C2 aproximation
  Standard_EXPORT virtual   Standard_Boolean D2 (const Standard_Real Param, TColgp_Array1OfPnt& Poles, TColgp_Array1OfVec& DPoles, TColgp_Array1OfVec& D2Poles, TColStd_Array1OfReal& Weigths, TColStd_Array1OfReal& DWeigths, TColStd_Array1OfReal& D2Weigths) ;
  
  //! give if possible an bspline Surface, like iso-v are the
  //! section.  If it is  not possible  this methode have  to
  //! get an Null Surface.  Is it the default implementation.
  Standard_EXPORT virtual   Handle(Geom_BSplineSurface) BSplineSurface()  const;
  
  //! get the format of an  section
  Standard_EXPORT virtual   void SectionShape (Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree)  const;
  
  //! get the Knots of the section
  Standard_EXPORT virtual   void Knots (TColStd_Array1OfReal& TKnots)  const;
  
  //! get the Multplicities of the section
  Standard_EXPORT virtual   void Mults (TColStd_Array1OfInteger& TMults)  const;
  
  //! Returns if the sections are rationnal or not
  Standard_EXPORT virtual   Standard_Boolean IsRational()  const;
  
  //! Returns if the sections are periodic or not
  Standard_EXPORT virtual   Standard_Boolean IsUPeriodic()  const;
  
  //! Returns if the law  isperiodic or not
  Standard_EXPORT virtual   Standard_Boolean IsVPeriodic()  const;
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>.
  //! May be one if Continuity(me) >= <S>
  Standard_EXPORT virtual   Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT virtual   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Sets the bounds of the parametric interval on
  //! the function
  //! This determines the derivatives in these values if the
  //! function is not Cn.
  Standard_EXPORT virtual   void SetInterval (const Standard_Real First, const Standard_Real Last) ;
  
  //! Gets the bounds of the parametric interval on
  //! the function
  Standard_EXPORT virtual   void GetInterval (Standard_Real& First, Standard_Real& Last)  const;
  
  //! Gets the bounds of the function parametric domain.
  //! Warning: This domain it is  not modified by the
  //! SetValue method
  Standard_EXPORT virtual   void GetDomain (Standard_Real& First, Standard_Real& Last)  const;
  
  //! Returns the tolerances associated at each poles to
  //! reach  in approximation, to satisfy: BoundTol error
  //! at the   Boundary  AngleTol tangent error  at  the
  //! Boundary  (in radian)  SurfTol   error inside the
  //! surface.
  Standard_EXPORT virtual   void GetTolerance (const Standard_Real BoundTol, const Standard_Real SurfTol, const Standard_Real AngleTol, TColStd_Array1OfReal& Tol3d)  const;
  
  //! Get the barycentre of Surface.
  //! An   very  poor estimation is sufficent.
  //! This information is usefull to perform well
  //! conditioned rational approximation.
  //! Warning: Used only if <me> IsRational
  Standard_EXPORT virtual   gp_Pnt BarycentreOfSurf()  const;
  
  //! Returns the   length of the greater section. This
  //! information is usefull to G1's control.
  //! Warning: With an little value, approximation can be slower.
  Standard_EXPORT virtual   Standard_Real MaximalSection()  const;
  
  //! Compute the minimal value of weight for each poles
  //! in all  sections.
  //! This information is  usefull to control error
  //! in rational approximation.
  //! Warning: Used only if <me> IsRational
  Standard_EXPORT virtual   void GetMinimalWeight (TColStd_Array1OfReal& Weigths)  const;
  
  //! return True
  Standard_EXPORT virtual   Standard_Boolean IsConstant (Standard_Real& Error)  const;
  
  //! Return the constant Section if <me>  IsConstant.
  Standard_EXPORT virtual   Handle(Geom_Curve) ConstantSection()  const;




  DEFINE_STANDARD_RTTI(GeomFill_UniformSection)

protected:




private: 


  Standard_Real First;
  Standard_Real Last;
  Handle(Geom_Curve) mySection;
  Handle(Geom_BSplineCurve) myCurve;


};







#endif // _GeomFill_UniformSection_HeaderFile
