// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeElementarySurface_HeaderFile
#define _GeomToStep_MakeElementarySurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepGeom/Handle_StepGeom_ElementarySurface.hxx>
#include <DataExchange/GeomToStep/GeomToStep_Root.hxx>
#include <Geometry/Geom/Handle_Geom_ElementarySurface.hxx>
class StepGeom_ElementarySurface;
class StdFail_NotDone;
class Geom_ElementarySurface;


//! This class implements the mapping between classes
//! ElementarySurface from Geom and the class ElementarySurface
//! from StepGeom which describes a ElementarySurface from
//! prostep. As ElementarySurface is an abstract Surface this
//! class is an access to the sub-class required.
class GeomToStep_MakeElementarySurface  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeElementarySurface(const Handle(Geom_ElementarySurface)& S);
  
  Standard_EXPORT  const  Handle(StepGeom_ElementarySurface)& Value()  const;




protected:





private:



  Handle(StepGeom_ElementarySurface) theElementarySurface;


};







#endif // _GeomToStep_MakeElementarySurface_HeaderFile
