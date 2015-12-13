// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopClass_Intersection3d_HeaderFile
#define _TopClass_Intersection3d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopAbs_State.hxx>
class gp_Lin;
class TopoDS_Face;
class IntCurveSurface_IntersectionPoint;


//! Template class for the intersection algorithm required
//! by the 3D classifications.
//!
//! (a intersection point near the origin of the line, ie.
//! at a distance less or equal than <tolerance>, will be
//! returned even if it has a negative parameter.)
class TopClass_Intersection3d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Perform the intersection between the
  //! segment L(0) ... L(Prm) and the Face <Face>.
  //!
  //! Only the point with the smallest parameter on the
  //! line is returned.
  //!
  //! The Tolerance <Tol> is used to determine if the
  //! first point of the segment is near the face. In
  //! that case, the parameter of the intersection point
  //! on the line can be a negative value (greater than -Tol).
  Standard_EXPORT virtual   void Perform (const gp_Lin& L, const Standard_Real Prm, const Standard_Real Tol, const TopoDS_Face& Face)  = 0;
  
  //! True is returned when the intersection have been computed.
  Standard_EXPORT virtual   Standard_Boolean IsDone()  const = 0;
  
  //! True is returned if a point has been found.
  Standard_EXPORT virtual   Standard_Boolean HasAPoint()  const = 0;
  
  //! Returns the Intersection Point.
  Standard_EXPORT virtual  const  IntCurveSurface_IntersectionPoint& Point()  const = 0;
  
  //! Returns the state of the point on the face.
  //! The values can be either TopAbs_IN
  //! ( the point is in the face)
  //! or TopAbs_ON
  //! ( the point is on a boudary of the face).
  Standard_EXPORT virtual   TopAbs_State State()  const = 0;




protected:

  
  //! Empty constructor.
  Standard_EXPORT TopClass_Intersection3d();




private:





};







#endif // _TopClass_Intersection3d_HeaderFile
