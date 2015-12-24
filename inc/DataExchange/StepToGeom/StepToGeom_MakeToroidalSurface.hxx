// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeToroidalSurface_HeaderFile
#define _StepToGeom_MakeToroidalSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_ToroidalSurface.hxx>
#include <Geometry/Geom/Handle_Geom_ToroidalSurface.hxx>
class StepGeom_ToroidalSurface;
class Geom_ToroidalSurface;


//! This class implements the mapping between class
//! ToroidalSurface from StepGeom which describes a
//! toroidal_surface from Prostep and ToroidalSurface from Geom
class StepToGeom_MakeToroidalSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_ToroidalSurface)& SS, Handle(Geom_ToroidalSurface)& CS) ;




protected:





private:





};







#endif // _StepToGeom_MakeToroidalSurface_HeaderFile
