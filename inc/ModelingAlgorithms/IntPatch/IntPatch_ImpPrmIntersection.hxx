// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_ImpPrmIntersection_HeaderFile
#define _IntPatch_ImpPrmIntersection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_SequenceOfPoint.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_SequenceOfLine.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_TheSOnBounds.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_TheSearchInside.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_TopolTool.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/IntPatch/Handle_IntPatch_Line.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_DomainError;
class Standard_ConstructionError;
class Adaptor3d_HSurface;
class Adaptor3d_TopolTool;
class IntPatch_Point;
class IntPatch_Line;


//! Implementation of the intersection between a natural
//! quadric patch : Plane, Cone, Cylinder or Sphere and
//! a bi-parametrised surface.
class IntPatch_ImpPrmIntersection 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntPatch_ImpPrmIntersection();
  
  Standard_EXPORT IntPatch_ImpPrmIntersection(const Handle(Adaptor3d_HSurface)& Surf1, const Handle(Adaptor3d_TopolTool)& D1, const Handle(Adaptor3d_HSurface)& Surf2, const Handle(Adaptor3d_TopolTool)& D2, const Standard_Real TolArc, const Standard_Real TolTang, const Standard_Real Fleche, const Standard_Real Pas);
  
  //! to search for solution from the given point
  Standard_EXPORT   void SetStartPoint (const Standard_Real U, const Standard_Real V) ;
  
  Standard_EXPORT   void Perform (const Handle(Adaptor3d_HSurface)& Surf1, const Handle(Adaptor3d_TopolTool)& D1, const Handle(Adaptor3d_HSurface)& Surf2, const Handle(Adaptor3d_TopolTool)& D2, const Standard_Real TolArc, const Standard_Real TolTang, const Standard_Real Fleche, const Standard_Real Pas) ;
  
  //! Returns true if the calculus was succesfull.
      Standard_Boolean IsDone()  const;
  
  //! Returns true if the is no intersection.
      Standard_Boolean IsEmpty()  const;
  
  //! Returns the number of "single" points.
      Standard_Integer NbPnts()  const;
  
  //! Returns the point of range Index.
  //! An exception is raised if Index<=0 or Index>NbPnt.
     const  IntPatch_Point& Point (const Standard_Integer Index)  const;
  
  //! Returns the number of intersection lines.
      Standard_Integer NbLines()  const;
  
  //! Returns the line of range Index.
  //! An exception is raised if Index<=0 or Index>NbLine.
     const  Handle(IntPatch_Line)& Line (const Standard_Integer Index)  const;




protected:





private:



  Standard_Boolean done;
  Standard_Boolean empt;
  IntPatch_SequenceOfPoint spnt;
  IntPatch_SequenceOfLine slin;
  IntPatch_TheSOnBounds solrst;
  IntPatch_TheSearchInside solins;
  Standard_Boolean myIsStartPnt;
  Standard_Real myUStart;
  Standard_Real myVStart;


};


#include <ModelingAlgorithms/IntPatch/IntPatch_ImpPrmIntersection.lxx>





#endif // _IntPatch_ImpPrmIntersection_HeaderFile
