// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeBoundedSurface_HeaderFile
#define _StepToGeom_MakeBoundedSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepGeom_BoundedSurface.hxx>
#include <Handle_Geom_BoundedSurface.hxx>
class StepGeom_BoundedSurface;
class Geom_BoundedSurface;


//! This class implements the mapping between classes
//! BoundedSurface from
//! StepGeom which describes a BoundedSurface from
//! prostep and the class BoundedSurface from Geom.
//! As BoundedSurface is an abstract BoundedSurface this class
//! is an access to the sub-class required.
class StepToGeom_MakeBoundedSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_BoundedSurface)& SS, Handle(Geom_BoundedSurface)& CS) ;




protected:





private:





};







#endif // _StepToGeom_MakeBoundedSurface_HeaderFile
