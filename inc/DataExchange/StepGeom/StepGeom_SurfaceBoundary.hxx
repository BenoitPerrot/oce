// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_SurfaceBoundary_HeaderFile
#define _StepGeom_SurfaceBoundary_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_BoundaryCurve.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_DegeneratePcurve.hxx>
class Standard_Transient;
class StepGeom_BoundaryCurve;
class StepGeom_DegeneratePcurve;


//! Representation of STEP SELECT type SurfaceBoundary
class StepGeom_SurfaceBoundary  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepGeom_SurfaceBoundary();
  
  //! Recognizes a kind of SurfaceBoundary select type
  //! 1 -> BoundaryCurve from StepGeom
  //! 2 -> DegeneratePcurve from StepGeom
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as BoundaryCurve (or Null if another type)
  Standard_EXPORT   Handle(StepGeom_BoundaryCurve) BoundaryCurve()  const;
  
  //! Returns Value as DegeneratePcurve (or Null if another type)
  Standard_EXPORT   Handle(StepGeom_DegeneratePcurve) DegeneratePcurve()  const;




protected:





private:





};







#endif // _StepGeom_SurfaceBoundary_HeaderFile
