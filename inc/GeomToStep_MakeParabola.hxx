// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeParabola_HeaderFile
#define _GeomToStep_MakeParabola_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepGeom_Parabola.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom2d_Parabola.hxx>
#include <Handle_Geom_Parabola.hxx>
class StepGeom_Parabola;
class StdFail_NotDone;
class Geom2d_Parabola;
class Geom_Parabola;


//! This class implements the mapping between the class
//! Parabola from Geom and the class Parabola from
//! StepGeom which describes a Parabola from ProSTEP
class GeomToStep_MakeParabola  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeParabola(const Handle(Geom2d_Parabola)& C);
  
  Standard_EXPORT GeomToStep_MakeParabola(const Handle(Geom_Parabola)& C);
  
  Standard_EXPORT  const  Handle(StepGeom_Parabola)& Value()  const;




protected:





private:



  Handle(StepGeom_Parabola) theParabola;


};







#endif // _GeomToStep_MakeParabola_HeaderFile
