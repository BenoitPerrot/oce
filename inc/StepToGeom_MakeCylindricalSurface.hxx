// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeCylindricalSurface_HeaderFile
#define _StepToGeom_MakeCylindricalSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepGeom_CylindricalSurface.hxx>
#include <Handle_Geom_CylindricalSurface.hxx>
class StepGeom_CylindricalSurface;
class Geom_CylindricalSurface;


//! This class implements the mapping between class
//! CylindricalSurface from StepGeom which describes a
//! cylindrical_surface from Prostep and CylindricalSurface
//! from Geom
class StepToGeom_MakeCylindricalSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_CylindricalSurface)& SS, Handle(Geom_CylindricalSurface)& CS) ;




protected:





private:





};







#endif // _StepToGeom_MakeCylindricalSurface_HeaderFile
