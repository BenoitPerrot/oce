// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_FindPlane_HeaderFile
#define _BRepBuilderAPI_FindPlane_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom/Handle_Geom_Plane.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Geom_Plane;
class Standard_NoSuchObject;
class TopoDS_Shape;


//! Describes functions to find the plane in which the edges
//! of a given shape are located.
//! A FindPlane object provides a framework for:
//! -   extracting the edges of a given shape,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class BRepBuilderAPI_FindPlane 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Initializes an empty algorithm. The function Init is then used to define the shape.
  Standard_EXPORT BRepBuilderAPI_FindPlane();
  
  //! Constructs the plane containing the edges of the shape S.
  //! A plane is built only if all the edges are within a distance
  //! of less than or equal to tolerance from a planar surface.
  //! This tolerance value is equal to the larger of the following two values:
  //! -   Tol, where the default value is negative, or
  //! -   the largest of the tolerance values assigned to the individual edges of S.
  //! Use the function Found to verify that a plane is built.
  //! The resulting plane is then retrieved using the function Plane.
  Standard_EXPORT BRepBuilderAPI_FindPlane(const TopoDS_Shape& S, const Standard_Real Tol = -1);
  
  //! Constructs the plane containing the edges of the shape S.
  //! A plane is built only if all the edges are within a distance
  //! of less than or equal to tolerance from a planar surface.
  //! This tolerance value is equal to the larger of the following two values:
  //! -   Tol, where the default value is negative, or
  //! -   the largest of the tolerance values assigned to the individual edges of S.
  //! Use the function Found to verify that a plane is built.
  //! The resulting plane is then retrieved using the function Plane.
  Standard_EXPORT   void Init (const TopoDS_Shape& S, const Standard_Real Tol = -1) ;
  
  //! Returns true if a plane containing the edges of the
  //! shape is found and built. Use the function Plane to consult the result.
  Standard_EXPORT   Standard_Boolean Found()  const;
  
  //! Returns the plane containing the edges of the shape.
  //! Warning
  //! Use the function Found to verify that the plane is built. If
  //! a plane is not found, Plane returns a null handle.
  Standard_EXPORT   Handle(Geom_Plane) Plane()  const;




protected:





private:



  Handle(Geom_Plane) myPlane;


};







#endif // _BRepBuilderAPI_FindPlane_HeaderFile
