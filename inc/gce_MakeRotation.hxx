// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeRotation_HeaderFile
#define _gce_MakeRotation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_Trsf.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class gp_Lin;
class gp_Ax1;
class gp_Pnt;
class gp_Dir;
class gp_Trsf;


//! This class implements elementary construction algorithms for a
//! rotation in 3D space. The result is a gp_Trsf transformation.
//! A MakeRotation object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class gce_MakeRotation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a rotation through angle Angle about the axis defined by the line Line.
  Standard_EXPORT gce_MakeRotation(const gp_Lin& Line, const Standard_Real Angle);
  
  //! Constructs a rotation through angle Angle about the axis defined by the axis Axis.
  Standard_EXPORT gce_MakeRotation(const gp_Ax1& Axis, const Standard_Real Angle);
  

  //! Constructs a rotation through angle Angle about the axis defined by:
  //! the point Point and the unit vector Direc.
  Standard_EXPORT gce_MakeRotation(const gp_Pnt& Point, const gp_Dir& Direc, const Standard_Real Angle);
  
  //! Returns the constructed transformation.
  Standard_EXPORT  const  gp_Trsf& Value()  const;
  
  Standard_EXPORT  const  gp_Trsf& Operator()  const;
Standard_EXPORT operator gp_Trsf() const;




protected:





private:



  gp_Trsf TheRotation;


};







#endif // _gce_MakeRotation_HeaderFile
