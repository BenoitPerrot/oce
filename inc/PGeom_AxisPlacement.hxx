// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_AxisPlacement_HeaderFile
#define _PGeom_AxisPlacement_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_AxisPlacement.hxx>

#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <PGeom_Geometry.hxx>
class gp_Ax1;


class PGeom_AxisPlacement : public PGeom_Geometry
{

public:

  
  //! Set the field axis with <aAxis>.
  Standard_EXPORT   void Axis (const gp_Ax1& aAxis) ;
  
  //! Returns the value of the field axis.
  Standard_EXPORT   gp_Ax1 Axis()  const;

PGeom_AxisPlacement(const Storage_stCONSTclCOM& a) : PGeom_Geometry(a)
{
  
}
    const gp_Ax1& _CSFDB_GetPGeom_AxisPlacementaxis() const { return axis; }



  DEFINE_STANDARD_RTTI(PGeom_AxisPlacement)

protected:

  
  //! Initializes the field(s) with default value(s).
  Standard_EXPORT PGeom_AxisPlacement();
  
  //! Initializes the field axis with <aAxis>.
  Standard_EXPORT PGeom_AxisPlacement(const gp_Ax1& aAxis);

  gp_Ax1 axis;


private: 




};







#endif // _PGeom_AxisPlacement_HeaderFile
