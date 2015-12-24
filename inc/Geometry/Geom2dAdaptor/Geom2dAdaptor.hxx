// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dAdaptor_HeaderFile
#define _Geom2dAdaptor_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
class Geom2d_Curve;
class Adaptor2d_Curve2d;
class Geom2dAdaptor_Curve;
class Geom2dAdaptor_GHCurve;
class Geom2dAdaptor_HCurve;


//! this package  contains the geometric definition of
//! 2d  curves compatible  with  the  Adaptor  package
//! templates.
class Geom2dAdaptor 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Inherited  from    GHCurve.   Provides a  curve
  //! handled by reference.
  //! Creates  a 2d  curve  from  a  HCurve2d.  This
  //! cannot process the OtherCurves.
  Standard_EXPORT static   Handle(Geom2d_Curve) MakeCurve (const Adaptor2d_Curve2d& HC) ;




protected:





private:




friend class Geom2dAdaptor_Curve;
friend class Geom2dAdaptor_GHCurve;
friend class Geom2dAdaptor_HCurve;

};







#endif // _Geom2dAdaptor_HeaderFile
