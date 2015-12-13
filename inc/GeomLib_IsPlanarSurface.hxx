// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLib_IsPlanarSurface_HeaderFile
#define _GeomLib_IsPlanarSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_Pln.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class StdFail_NotDone;
class Geom_Surface;
class gp_Pln;


//! Find if a surface is a planar  surface.
class GeomLib_IsPlanarSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomLib_IsPlanarSurface(const Handle(Geom_Surface)& S, const Standard_Real Tol = 1.0e-7);
  
  //! Return if the Surface is a plan
  Standard_EXPORT   Standard_Boolean IsPlanar()  const;
  
  //! Return the plan definition
  Standard_EXPORT  const  gp_Pln& Plan()  const;




protected:





private:



  gp_Pln myPlan;
  Standard_Boolean IsPlan;


};







#endif // _GeomLib_IsPlanarSurface_HeaderFile
