// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeRevolution_HeaderFile
#define _BRepPrimAPI_MakeRevolution_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/BRepPrim/BRepPrim_Revolution.hxx>
#include <BRepPrimAPI_MakeOneAxis.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Geom_Curve;
class gp_Ax2;
class BRepPrim_Revolution;


//! Describes functions to build revolved shapes.
//! A MakeRevolution object provides a framework for:
//! -   defining the construction of a revolved shape,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class BRepPrimAPI_MakeRevolution  : public BRepPrimAPI_MakeOneAxis
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const Handle(Geom_Curve)& Meridian);
  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const Handle(Geom_Curve)& Meridian, const Standard_Real angle);
  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const Handle(Geom_Curve)& Meridian, const Standard_Real VMin, const Standard_Real VMax);
  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const Handle(Geom_Curve)& Meridian, const Standard_Real VMin, const Standard_Real VMax, const Standard_Real angle);
  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const gp_Ax2& Axes, const Handle(Geom_Curve)& Meridian);
  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const gp_Ax2& Axes, const Handle(Geom_Curve)& Meridian, const Standard_Real angle);
  
  //! Make a revolution body by rotating a curve around Z.
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const gp_Ax2& Axes, const Handle(Geom_Curve)& Meridian, const Standard_Real VMin, const Standard_Real VMax);
  
  //! Make a revolution body by rotating a curve around Z.
  //! For all algorithms the resulting shape is composed of
  //! -   a lateral revolved face,
  //! -   two planar faces in planes parallel to the plane z =
  //! 0, and passing by the extremities of the revolved
  //! portion of Meridian, if these points are not on the Z
  //! axis (in case of a complete revolved shape, these faces are circles),
  //! -   and in the case of a portion of a revolved shape, two
  //! planar faces to close the shape (in the planes u = 0 and u = angle).
  Standard_EXPORT BRepPrimAPI_MakeRevolution(const gp_Ax2& Axes, const Handle(Geom_Curve)& Meridian, const Standard_Real VMin, const Standard_Real VMax, const Standard_Real angle);
  
  //! Returns the algorithm.
  Standard_EXPORT   Standard_Address OneAxis() ;
  
  //! Returns the algorithm.
  Standard_EXPORT   BRepPrim_Revolution& Revolution() ;




protected:





private:



  BRepPrim_Revolution myRevolution;


};







#endif // _BRepPrimAPI_MakeRevolution_HeaderFile
