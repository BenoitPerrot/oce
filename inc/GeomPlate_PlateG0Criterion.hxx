// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_PlateG0Criterion_HeaderFile
#define _GeomPlate_PlateG0Criterion_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Collections/TColgp_SequenceOfXY.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfXYZ.hxx>
#include <Geometry/AdvApp2Var/AdvApp2Var_Criterion.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/AdvApp2Var/AdvApp2Var_CriterionType.hxx>
#include <Geometry/AdvApp2Var/AdvApp2Var_CriterionRepartition.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColgp_SequenceOfXY;
class TColgp_SequenceOfXYZ;
class AdvApp2Var_Patch;
class AdvApp2Var_Context;



//! this class contains a specific G0 criterion for GeomPlate_MakeApprox
class GeomPlate_PlateG0Criterion  : public AdvApp2Var_Criterion
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomPlate_PlateG0Criterion(const TColgp_SequenceOfXY& Data, const TColgp_SequenceOfXYZ& G0Data, const Standard_Real Maximum, const AdvApp2Var_CriterionType Type = AdvApp2Var_Absolute, const AdvApp2Var_CriterionRepartition Repart = AdvApp2Var_Regular);
  
  Standard_EXPORT virtual   void Value (AdvApp2Var_Patch& P, const AdvApp2Var_Context& C)  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsSatisfied (const AdvApp2Var_Patch& P)  const;




protected:





private:



  TColgp_SequenceOfXY myData;
  TColgp_SequenceOfXYZ myXYZ;


};







#endif // _GeomPlate_PlateG0Criterion_HeaderFile
