// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeHyperbola_HeaderFile
#define _GeomToStep_MakeHyperbola_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepGeom_Hyperbola.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom2d_Hyperbola.hxx>
#include <Handle_Geom_Hyperbola.hxx>
class StepGeom_Hyperbola;
class StdFail_NotDone;
class Geom2d_Hyperbola;
class Geom_Hyperbola;


//! This class implements the mapping between the class
//! Hyperbola from Geom and the class Hyperbola from
//! StepGeom which describes a Hyperbola from ProSTEP
class GeomToStep_MakeHyperbola  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeHyperbola(const Handle(Geom2d_Hyperbola)& C);
  
  Standard_EXPORT GeomToStep_MakeHyperbola(const Handle(Geom_Hyperbola)& C);
  
  Standard_EXPORT  const  Handle(StepGeom_Hyperbola)& Value()  const;




protected:





private:



  Handle(StepGeom_Hyperbola) theHyperbola;


};







#endif // _GeomToStep_MakeHyperbola_HeaderFile
