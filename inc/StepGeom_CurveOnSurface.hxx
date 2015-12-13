// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_CurveOnSurface_HeaderFile
#define _StepGeom_CurveOnSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepGeom_Pcurve.hxx>
#include <Handle_StepGeom_SurfaceCurve.hxx>
#include <Handle_StepGeom_CompositeCurveOnSurface.hxx>
class Standard_Transient;
class StepGeom_Pcurve;
class StepGeom_SurfaceCurve;
class StepGeom_CompositeCurveOnSurface;



class StepGeom_CurveOnSurface  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a CurveOnSurface SelectType
  Standard_EXPORT StepGeom_CurveOnSurface();
  
  //! Recognizes a CurveOnSurface Kind Entity that is :
  //! 1 -> Pcurve
  //! 2 -> SurfaceCurve
  //! 3 -> CompositeCurveOnSurface
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a Pcurve (Null if another type)
  Standard_EXPORT   Handle(StepGeom_Pcurve) Pcurve()  const;
  
  //! returns Value as a SurfaceCurve (Null if another type)
  Standard_EXPORT   Handle(StepGeom_SurfaceCurve) SurfaceCurve()  const;
  
  //! returns Value as a CompositeCurveOnSurface (Null if another type)
  Standard_EXPORT   Handle(StepGeom_CompositeCurveOnSurface) CompositeCurveOnSurface()  const;




protected:





private:





};







#endif // _StepGeom_CurveOnSurface_HeaderFile
