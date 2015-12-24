// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeMirror_HeaderFile
#define _GC_MakeMirror_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom/Handle_Geom_Transformation.hxx>
class Geom_Transformation;
class gp_Pnt;
class gp_Ax1;
class gp_Lin;
class gp_Dir;
class gp_Pln;
class gp_Ax2;


//! This class implements elementary construction algorithms for a
//! symmetrical transformation in 3D space about a point,
//! axis or plane. The result is a Geom_Transformation transformation.
//! A MakeMirror object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class GC_MakeMirror 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GC_MakeMirror(const gp_Pnt& Point);
  
  Standard_EXPORT GC_MakeMirror(const gp_Ax1& Axis);
  
  Standard_EXPORT GC_MakeMirror(const gp_Lin& Line);
  
  //! Make a symetry transformation af axis defined by
  //! <Point> and <Direc>.
  Standard_EXPORT GC_MakeMirror(const gp_Pnt& Point, const gp_Dir& Direc);
  
  //! Make a symetry transformation of plane <Plane>.
  Standard_EXPORT GC_MakeMirror(const gp_Pln& Plane);
  
  //! Make a symetry transformation of plane <Plane>.
  Standard_EXPORT GC_MakeMirror(const gp_Ax2& Plane);
  
  //! Returns the constructed transformation.
  Standard_EXPORT  const  Handle(Geom_Transformation)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom_Transformation)& Operator()  const;
Standard_EXPORT operator Handle_Geom_Transformation() const;




protected:





private:



  Handle(Geom_Transformation) TheMirror;


};







#endif // _GC_MakeMirror_HeaderFile
