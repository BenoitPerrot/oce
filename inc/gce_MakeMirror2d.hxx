// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeMirror2d_HeaderFile
#define _gce_MakeMirror2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_Trsf2d.hxx>
class gp_Pnt2d;
class gp_Ax2d;
class gp_Lin2d;
class gp_Dir2d;
class gp_Trsf2d;


//! This class implements elementary construction algorithms for a
//! symmetrical transformation in 2D space about a point
//! or axis. The result is a gp_Trsf2d transformation.
//! A MakeMirror2d object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and consulting the result.
class gce_MakeMirror2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT gce_MakeMirror2d(const gp_Pnt2d& Point);
  
  Standard_EXPORT gce_MakeMirror2d(const gp_Ax2d& Axis);
  
  Standard_EXPORT gce_MakeMirror2d(const gp_Lin2d& Line);
  
  //! Makes a symmetry transformation af axis defined by
  //! <Point> and <Direc>.
  Standard_EXPORT gce_MakeMirror2d(const gp_Pnt2d& Point, const gp_Dir2d& Direc);
  
  //! Returns the constructed transformation.
  Standard_EXPORT  const  gp_Trsf2d& Value()  const;
  
  Standard_EXPORT  const  gp_Trsf2d& Operator()  const;
Standard_EXPORT operator gp_Trsf2d() const;




protected:





private:



  gp_Trsf2d TheMirror2d;


};







#endif // _gce_MakeMirror2d_HeaderFile
