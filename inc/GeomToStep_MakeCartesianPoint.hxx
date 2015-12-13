// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeCartesianPoint_HeaderFile
#define _GeomToStep_MakeCartesianPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepGeom_CartesianPoint.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_CartesianPoint.hxx>
#include <Handle_Geom2d_CartesianPoint.hxx>
class StepGeom_CartesianPoint;
class StdFail_NotDone;
class gp_Pnt;
class gp_Pnt2d;
class Geom_CartesianPoint;
class Geom2d_CartesianPoint;


//! This class implements the mapping between classes
//! CartesianPoint from Geom and Pnt from gp, and the class
//! CartesianPoint from StepGeom which describes a point from
//! Prostep.
class GeomToStep_MakeCartesianPoint  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeCartesianPoint(const gp_Pnt& P);
  
  Standard_EXPORT GeomToStep_MakeCartesianPoint(const gp_Pnt2d& P);
  
  Standard_EXPORT GeomToStep_MakeCartesianPoint(const Handle(Geom_CartesianPoint)& P);
  
  Standard_EXPORT GeomToStep_MakeCartesianPoint(const Handle(Geom2d_CartesianPoint)& P);
  
  Standard_EXPORT  const  Handle(StepGeom_CartesianPoint)& Value()  const;




protected:





private:



  Handle(StepGeom_CartesianPoint) theCartesianPoint;


};







#endif // _GeomToStep_MakeCartesianPoint_HeaderFile
