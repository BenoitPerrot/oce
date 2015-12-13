// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeTranslation_HeaderFile
#define _GCE2d_MakeTranslation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Geom2d_Transformation.hxx>
class Geom2d_Transformation;
class gp_Vec2d;
class gp_Pnt2d;


//! This class implements elementary construction algorithms for a
//! translation in 2D space. The result is a
//! Geom2d_Transformation transformation.
//! A MakeTranslation object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class GCE2d_MakeTranslation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a translation along the vector Vect.
  Standard_EXPORT GCE2d_MakeTranslation(const gp_Vec2d& Vect);
  
  //! Constructs a translation along the vector
  //! (Point1,Point2) defined from the point Point1 to the point Point2.
  Standard_EXPORT GCE2d_MakeTranslation(const gp_Pnt2d& Point1, const gp_Pnt2d& Point2);
  
  //! Returns the constructed transformation.
  Standard_EXPORT  const  Handle(Geom2d_Transformation)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom2d_Transformation)& Operator()  const;
Standard_EXPORT operator Handle_Geom2d_Transformation() const;




protected:





private:



  Handle(Geom2d_Transformation) TheTranslation;


};







#endif // _GCE2d_MakeTranslation_HeaderFile
