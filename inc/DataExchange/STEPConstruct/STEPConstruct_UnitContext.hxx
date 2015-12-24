// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_UnitContext_HeaderFile
#define _STEPConstruct_UnitContext_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_GlobalUnitAssignedContext.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_NamedUnit.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_SiUnit.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <DataExchange/StepBasic/StepBasic_SiPrefix.hxx>
class StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx;
class StepRepr_GlobalUnitAssignedContext;
class StepBasic_NamedUnit;
class StepRepr_GlobalUncertaintyAssignedContext;
class StepBasic_SiUnit;


//! Tool for creation (encoding) and decoding (for writing and reading
//! accordingly) context defining units and tolerances (uncerntanties)
class STEPConstruct_UnitContext 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates empty tool
  Standard_EXPORT STEPConstruct_UnitContext();
  
  //! Creates new context (units are MM and radians,
  //! uncertainty equal to Tol3d)
  Standard_EXPORT   void Init (const Standard_Real Tol3d) ;
  
  //! Returns True if Init was called successfully
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns context (or Null if not done)
  Standard_EXPORT   Handle(StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx) Value()  const;
  
  //! Computes the length, plane angle and solid angle conversion
  //! factor  .  Returns a status, 0 if OK
  Standard_EXPORT   Standard_Integer ComputeFactors (const Handle(StepRepr_GlobalUnitAssignedContext)& aContext) ;
  
  Standard_EXPORT   Standard_Integer ComputeFactors (const Handle(StepBasic_NamedUnit)& aUnit) ;
  
  //! Computes the uncertainty value (for length)
  Standard_EXPORT   Standard_Integer ComputeTolerance (const Handle(StepRepr_GlobalUncertaintyAssignedContext)& aContext) ;
  
  //! Returns the lengthFactor
  Standard_EXPORT   Standard_Real LengthFactor()  const;
  
  //! Returns the planeAngleFactor
  Standard_EXPORT   Standard_Real PlaneAngleFactor()  const;
  
  //! Returns the solidAngleFactor
  Standard_EXPORT   Standard_Real SolidAngleFactor()  const;
  
  //! Returns the Uncertainty value (for length)
  //! It has been converted  with LengthFactor
  Standard_EXPORT   Standard_Real Uncertainty()  const;
  
  //! Returns the areaFactor
  Standard_EXPORT   Standard_Real AreaFactor()  const;
  
  //! Returns the volumeFactor
  Standard_EXPORT   Standard_Real VolumeFactor()  const;
  
  //! Tells if a Uncertainty (for length) is recorded
  Standard_EXPORT   Standard_Boolean HasUncertainty()  const;
  
  //! Returns true if ComputeFactors has calculated
  //! a LengthFactor
  Standard_EXPORT   Standard_Boolean LengthDone()  const;
  
  //! Returns true if ComputeFactors has calculated
  //! a PlaneAngleFactor
  Standard_EXPORT   Standard_Boolean PlaneAngleDone()  const;
  
  //! Returns true if ComputeFactors has calculated
  //! a SolidAngleFactor
  Standard_EXPORT   Standard_Boolean SolidAngleDone()  const;
  
  //! Returns true if areaFactor is computed
  Standard_EXPORT   Standard_Boolean AreaDone()  const;
  
  //! Returns true if volumeFactor is computed
  Standard_EXPORT   Standard_Boolean VolumeDone()  const;
  
  //! Returns a message for a given status (0 - empty)
  //! This message can then be added as warning for transfer
  Standard_EXPORT   Standard_CString StatusMessage (const Standard_Integer status)  const;
  
  //! Convert SI prefix defined by enumertaion to corresponding
  //! real factor (e.g. 1e6 for mega)
  Standard_EXPORT static   Standard_Real ConvertSiPrefix (const StepBasic_SiPrefix aPrefix) ;




protected:





private:

  
  //! Fills numerical equivalent of SiUnitName (in SI value)
  //! Returns False if name SiUnit Name not recognized
  Standard_EXPORT   Standard_Boolean SiUnitNameFactor (const Handle(StepBasic_SiUnit)& aSiUnit, Standard_Real& val)  const;


  Standard_Boolean done;
  Handle(StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx) GRC;
  Standard_Real lengthFactor;
  Standard_Real planeAngleFactor;
  Standard_Real solidAngleFactor;
  Standard_Real theUncertainty;
  Standard_Real areaFactor;
  Standard_Real volumeFactor;
  Standard_Boolean areaDone;
  Standard_Boolean volumeDone;
  Standard_Boolean lengthDone;
  Standard_Boolean planeAngleDone;
  Standard_Boolean solidAngleDone;
  Standard_Boolean hasUncertainty;


};







#endif // _STEPConstruct_UnitContext_HeaderFile
