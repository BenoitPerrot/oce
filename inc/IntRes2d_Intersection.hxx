// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntRes2d_Intersection_HeaderFile
#define _IntRes2d_Intersection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <IntRes2d_SequenceOfIntersectionPoint.hxx>
#include <IntRes2d_SequenceOfIntersectionSegment.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class IntRes2d_IntersectionPoint;
class IntRes2d_IntersectionSegment;


//! Defines  the root   class  of  all  the  Intersections
//! between  two 2D-Curves, and  provides all  the methods
//! about the results of the Intersections Algorithms.
class IntRes2d_Intersection 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! returns TRUE when the computation was successful.
      Standard_Boolean IsDone()  const;
  
  //! Returns TRUE if there is no intersection between the
  //! given arguments.
  //! The exception NotDone is raised if IsDone returns FALSE.
      Standard_Boolean IsEmpty()  const;
  
  //! This function returns the number of intersection
  //! points between the 2 curves.
  //! The exception NotDone is raised if IsDone returns FALSE.
      Standard_Integer NbPoints()  const;
  
  //! This function returns the intersection point
  //! of range N;
  //! The exception NotDone is raised if IsDone returns FALSE.
  //! The exception OutOfRange is raised if (N <= 0)
  //! or (N > NbPoints).
     const  IntRes2d_IntersectionPoint& Point (const Standard_Integer N)  const;
  
  //! This function returns the number of intersection
  //! segments between the two curves.
  //! The exception NotDone is raised if IsDone returns FALSE.
      Standard_Integer NbSegments()  const;
  
  //! This function returns the intersection segment
  //! of range N;
  //! The exception NotDone is raised if IsDone returns FALSE.
  //! The exception OutOfRange is raised if (N <= 0)
  //! or (N > NbPoints).
     const  IntRes2d_IntersectionSegment& Segment (const Standard_Integer N)  const;
  
      void SetReversedParameters (const Standard_Boolean Reverseflag) ;




protected:

  
  //! Empty constructor.
    IntRes2d_Intersection();
  
    IntRes2d_Intersection(const IntRes2d_Intersection& Other);
  
  Standard_EXPORT   void SetValues (const IntRes2d_Intersection& Inter) ;
  
  Standard_EXPORT   void Append (const IntRes2d_Intersection& Inter, const Standard_Real FirstParam1, const Standard_Real LastParam1, const Standard_Real FirstParam2, const Standard_Real LastParam2) ;
  
      void Append (const IntRes2d_IntersectionSegment& Seg) ;
  
      void Append (const IntRes2d_IntersectionPoint& Pnt) ;
  
  Standard_EXPORT   void Insert (const IntRes2d_IntersectionPoint& Pnt) ;
  
      void ResetFields() ;
  
      Standard_Boolean ReversedParameters()  const;


  Standard_Boolean done;


private:



  Standard_Boolean reverse;
  IntRes2d_SequenceOfIntersectionPoint lpnt;
  IntRes2d_SequenceOfIntersectionSegment lseg;


};


#include <IntRes2d_Intersection.lxx>





#endif // _IntRes2d_Intersection_HeaderFile
