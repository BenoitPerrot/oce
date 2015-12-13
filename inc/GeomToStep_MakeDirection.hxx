// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeDirection_HeaderFile
#define _GeomToStep_MakeDirection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepGeom_Direction.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_Direction.hxx>
#include <Handle_Geom2d_Direction.hxx>
class StepGeom_Direction;
class StdFail_NotDone;
class gp_Dir;
class gp_Dir2d;
class Geom_Direction;
class Geom2d_Direction;


//! This class implements the mapping between classes
//! Direction from Geom, Geom2d and Dir, Dir2d from gp, and the
//! class Direction from StepGeom which describes a direction
//! from Prostep.
class GeomToStep_MakeDirection  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeDirection(const gp_Dir& D);
  
  Standard_EXPORT GeomToStep_MakeDirection(const gp_Dir2d& D);
  
  Standard_EXPORT GeomToStep_MakeDirection(const Handle(Geom_Direction)& D);
  
  Standard_EXPORT GeomToStep_MakeDirection(const Handle(Geom2d_Direction)& D);
  
  Standard_EXPORT  const  Handle(StepGeom_Direction)& Value()  const;




protected:





private:



  Handle(StepGeom_Direction) theDirection;


};







#endif // _GeomToStep_MakeDirection_HeaderFile
