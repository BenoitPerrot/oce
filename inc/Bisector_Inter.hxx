// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bisector_Inter_HeaderFile
#define _Bisector_Inter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <IntRes2d_Intersection.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Bisector_BisecCC.hxx>
#include <Handle_Geom2d_Line.hxx>
class Standard_ConstructionError;
class Bisector_Bisec;
class IntRes2d_Domain;
class Geom2d_Curve;
class Bisector_BisecCC;
class Geom2d_Line;


//! Intersection between two <Bisec> from Bisector.
class Bisector_Inter  : public IntRes2d_Intersection
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Bisector_Inter();
  
  //! Intersection between 2 curves.
  //! C1 separates the element A and B.
  //! C2 separates the elements C et D.
  //! If B an C have the same geometry. <ComunElement>
  //! Has to be True.
  //! It Permits an optimiztion of the computation.
  Standard_EXPORT Bisector_Inter(const Bisector_Bisec& C1, const IntRes2d_Domain& D1, const Bisector_Bisec& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean ComunElement);
  
  //! Intersection between 2 curves.
  //! C1 separates the element A and B.
  //! C2 separates the elements C et D.
  //! If B an C have the same geometry. <ComunElement>
  //! Has to be True.
  //! It Permits an optimiztion of the computation.
  Standard_EXPORT   void Perform (const Bisector_Bisec& C1, const IntRes2d_Domain& D1, const Bisector_Bisec& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean ComunElement) ;




protected:





private:

  
  //! Intersection between 2 curves.
  Standard_EXPORT   void SinglePerform (const Handle(Geom2d_Curve)& C1, const IntRes2d_Domain& D1, const Handle(Geom2d_Curve)& C2, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean ComunElement) ;
  
  Standard_EXPORT   void NeighbourPerform (const Handle(Bisector_BisecCC)& C1, const IntRes2d_Domain& D1, const Handle(Bisector_BisecCC)& C2, const IntRes2d_Domain& D2, const Standard_Real Tol) ;
  
  Standard_EXPORT   void TestBound (const Handle(Geom2d_Line)& C1, const IntRes2d_Domain& D1, const Handle(Geom2d_Curve)& C2, const IntRes2d_Domain& D2, const Standard_Real Tol, const Standard_Boolean Reverse) ;




};







#endif // _Bisector_Inter_HeaderFile
