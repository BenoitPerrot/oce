// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeHalfSpace_HeaderFile
#define _BRepPrimAPI_MakeHalfSpace_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
class StdFail_NotDone;
class TopoDS_Face;
class gp_Pnt;
class TopoDS_Shell;
class TopoDS_Solid;


//! Describes functions to build half-spaces.
//! A half-space is an infinite solid, limited by a surface. It
//! is built from a face or a shell, which bounds it, and with
//! a reference point, which specifies the side of the
//! surface where the matter of the half-space is located.
//! A half-space is a tool commonly used in topological
//! operations to cut another shape.
//! A MakeHalfSpace object provides a framework for:
//! -   defining and implementing the construction of a half-space, and
//! -   consulting the result.
class BRepPrimAPI_MakeHalfSpace  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make a HalfSpace defined with a Face and a Point.
  Standard_EXPORT BRepPrimAPI_MakeHalfSpace(const TopoDS_Face& Face, const gp_Pnt& RefPnt);
  
  //! Make a HalfSpace defined with a Shell and a Point.
  Standard_EXPORT BRepPrimAPI_MakeHalfSpace(const TopoDS_Shell& Shell, const gp_Pnt& RefPnt);
  
  //! Returns the constructed half-space as a solid.
  Standard_EXPORT  const  TopoDS_Solid& Solid()  const;
Standard_EXPORT operator TopoDS_Solid() const;




protected:





private:



  TopoDS_Solid mySolid;


};







#endif // _BRepPrimAPI_MakeHalfSpace_HeaderFile
