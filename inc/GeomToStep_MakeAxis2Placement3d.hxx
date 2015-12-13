// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeAxis2Placement3d_HeaderFile
#define _GeomToStep_MakeAxis2Placement3d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_StepGeom_Axis2Placement3d.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_Axis2Placement.hxx>
class StepGeom_Axis2Placement3d;
class StdFail_NotDone;
class gp_Ax2;
class gp_Ax3;
class gp_Trsf;
class Geom_Axis2Placement;


//! This class implements the mapping between classes
//! Axis2Placement from Geom and Ax2, Ax3 from gp, and the class
//! Axis2Placement3d from StepGeom which describes an
//! axis2_placement_3d from Prostep.
class GeomToStep_MakeAxis2Placement3d  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeAxis2Placement3d();
  
  Standard_EXPORT GeomToStep_MakeAxis2Placement3d(const gp_Ax2& A);
  
  Standard_EXPORT GeomToStep_MakeAxis2Placement3d(const gp_Ax3& A);
  
  Standard_EXPORT GeomToStep_MakeAxis2Placement3d(const gp_Trsf& T);
  
  Standard_EXPORT GeomToStep_MakeAxis2Placement3d(const Handle(Geom_Axis2Placement)& A);
  
  Standard_EXPORT  const  Handle(StepGeom_Axis2Placement3d)& Value()  const;




protected:





private:



  Handle(StepGeom_Axis2Placement3d) theAxis2Placement3d;


};







#endif // _GeomToStep_MakeAxis2Placement3d_HeaderFile
