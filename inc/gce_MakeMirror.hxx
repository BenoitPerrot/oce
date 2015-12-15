// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeMirror_HeaderFile
#define _gce_MakeMirror_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Trsf.hxx>
class gp_Pnt;
class gp_Ax1;
class gp_Lin;
class gp_Dir;
class gp_Pln;
class gp_Ax2;
class gp_Trsf;


//! This class mplements elementary construction algorithms for a
//! symmetrical transformation in 3D space about a point,
//! axis or plane. The result is a gp_Trsf transformation.
//! A MakeMirror object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class gce_MakeMirror 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT gce_MakeMirror(const gp_Pnt& Point);
  
  Standard_EXPORT gce_MakeMirror(const gp_Ax1& Axis);
  
  Standard_EXPORT gce_MakeMirror(const gp_Lin& Line);
  
  //! Makes a symmetry transformation af axis defined by
  //! <Point> and <Direc>.
  Standard_EXPORT gce_MakeMirror(const gp_Pnt& Point, const gp_Dir& Direc);
  
  //! Makes a symmetry transformation of plane <Plane>.
  Standard_EXPORT gce_MakeMirror(const gp_Pln& Plane);
  
  //! Makes a symmetry transformation of plane <Plane>.
  Standard_EXPORT gce_MakeMirror(const gp_Ax2& Plane);
  
  //! Returns the constructed transformation.
  Standard_EXPORT  const  gp_Trsf& Value()  const;
  
  Standard_EXPORT  const  gp_Trsf& Operator()  const;
Standard_EXPORT operator gp_Trsf() const;




protected:





private:



  gp_Trsf TheMirror;


};







#endif // _gce_MakeMirror_HeaderFile
