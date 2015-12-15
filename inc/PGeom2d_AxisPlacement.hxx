// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_AxisPlacement_HeaderFile
#define _PGeom2d_AxisPlacement_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom2d_AxisPlacement.hxx>

#include <Mathematics/Primitives/gp_Ax2d.hxx>
#include <PGeom2d_Geometry.hxx>
class gp_Ax2d;


class PGeom2d_AxisPlacement : public PGeom2d_Geometry
{

public:

  
  //! Initializes the field(s) with default value(s).
  Standard_EXPORT PGeom2d_AxisPlacement();
  
  //! Initializes the field axis with <aAxis>.
  Standard_EXPORT PGeom2d_AxisPlacement(const gp_Ax2d& aAxis);
  
  //! Set the field axis with <aAxis>.
  Standard_EXPORT   void Axis (const gp_Ax2d& aAxis) ;
  
  //! Returns the value of the field axis.
  Standard_EXPORT   gp_Ax2d Axis()  const;

PGeom2d_AxisPlacement(const Storage_stCONSTclCOM& a) : PGeom2d_Geometry(a)
{
  
}
    const gp_Ax2d& _CSFDB_GetPGeom2d_AxisPlacementaxis() const { return axis; }



  DEFINE_STANDARD_RTTI(PGeom2d_AxisPlacement)

protected:




private: 


  gp_Ax2d axis;


};







#endif // _PGeom2d_AxisPlacement_HeaderFile
