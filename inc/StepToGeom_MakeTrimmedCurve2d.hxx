// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeTrimmedCurve2d_HeaderFile
#define _StepToGeom_MakeTrimmedCurve2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepGeom_TrimmedCurve.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
class StepGeom_TrimmedCurve;
class Geom2d_BSplineCurve;


//! This class implements the mapping between classes
//! class TrimmedCurve from StepGeom which
//! describes a Trimmed Curve from prostep and TrimmedCurve from
//! Geom.
class StepToGeom_MakeTrimmedCurve2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_TrimmedCurve)& SC, Handle(Geom2d_BSplineCurve)& CC) ;




protected:





private:





};







#endif // _StepToGeom_MakeTrimmedCurve2d_HeaderFile
