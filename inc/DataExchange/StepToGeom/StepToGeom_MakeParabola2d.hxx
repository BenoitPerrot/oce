// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeParabola2d_HeaderFile
#define _StepToGeom_MakeParabola2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_Parabola.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Parabola.hxx>
class StepGeom_Parabola;
class Geom2d_Parabola;


//! This class implements the mapping between classes
//! Parabola from StepGeom which describes a Parabola from
//! Prostep and Parabola from Geom2d.
class StepToGeom_MakeParabola2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_Parabola)& SC, Handle(Geom2d_Parabola)& CC) ;




protected:





private:





};







#endif // _StepToGeom_MakeParabola2d_HeaderFile
