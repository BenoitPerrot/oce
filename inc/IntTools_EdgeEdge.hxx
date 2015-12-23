// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_EdgeEdge_HeaderFile
#define _IntTools_EdgeEdge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Edge.hxx>
#include <Handle_Geom_Curve.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <IntTools_Range.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <IntTools_SequenceOfCommonPrts.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
class Geom_Curve;
class TopoDS_Edge;
class IntTools_Range;
class IntTools_SequenceOfRanges;
class Bnd_Box;
class BRepAdaptor_Curve;
class IntTools_SequenceOfCommonPrts;



//! The class provides Edge/Edge intersection algorithm
//! based on the intersection between edges bounding boxes.
class IntTools_EdgeEdge 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Empty contructor
    IntTools_EdgeEdge();
~IntTools_EdgeEdge();
  

  //! Contructor
    IntTools_EdgeEdge(const TopoDS_Edge& theEdge1, const TopoDS_Edge& theEdge2);
  

  //! Contructor
    IntTools_EdgeEdge(const TopoDS_Edge& theEdge1, const Standard_Real aT11, const Standard_Real aT12, const TopoDS_Edge& theEdge2, const Standard_Real aT21, const Standard_Real aT22);
  

  //! Sets the first edge
      void SetEdge1 (const TopoDS_Edge& theEdge) ;
  

  //! Sets the first edge and its range
      void SetEdge1 (const TopoDS_Edge& theEdge, const Standard_Real aT1, const Standard_Real aT2) ;
  

  //! Sets the range for the first edge
      void SetRange1 (const IntTools_Range& theRange1) ;
  

  //! Sets the range for the first edge
      void SetRange1 (const Standard_Real aT1, const Standard_Real aT2) ;
  

  //! Sets the second edge
      void SetEdge2 (const TopoDS_Edge& theEdge) ;
  

  //! Sets the first edge and its range
      void SetEdge2 (const TopoDS_Edge& theEdge, const Standard_Real aT1, const Standard_Real aT2) ;
  

  //! Sets the range for the second edge
      void SetRange2 (const IntTools_Range& theRange) ;
  

  //! Sets the range for the second edge
      void SetRange2 (const Standard_Real aT1, const Standard_Real aT2) ;
  

  //! Performs the intersection between edges
  Standard_EXPORT   void Perform() ;
  

  //! Returns TRUE if common part(s) is(are) found
      Standard_Boolean IsDone()  const;
  

  //! Returns common parts
     const  IntTools_SequenceOfCommonPrts& CommonParts()  const;




protected:

  

  //! Checks the data
      void CheckData() ;
  

  //! Prepares the data
  Standard_EXPORT   void Prepare() ;
  

  //! Computes Line/Line intersection.
  Standard_EXPORT   void ComputeLineLine() ;
  

  //! Intermediate function
  Standard_EXPORT   void FindSolutions (IntTools_SequenceOfRanges& theRanges1, IntTools_SequenceOfRanges& theRanges2, Standard_Boolean& bSplit2) ;
  

  //! Looking for the exact intersection ranges
  Standard_EXPORT   void FindSolutions (const IntTools_Range& theR1, const IntTools_Range& theR2, const Bnd_Box& theBox2, IntTools_SequenceOfRanges& theRanges1, IntTools_SequenceOfRanges& theRanges2) ;
  

  //! Merges found solutions
  Standard_EXPORT   void MergeSolutions (const IntTools_SequenceOfRanges& theRanges1, const IntTools_SequenceOfRanges& theRanges2, const Standard_Boolean bSplit2) ;
  

  //! Looking for the range of the edge whick is in the box
  Standard_EXPORT static   Standard_Boolean FindParameters (const BRepAdaptor_Curve& theBAC, const Standard_Real aT1, const Standard_Real aT2, const Standard_Real theRes, const Standard_Real thePTol, const Standard_Real theResCoeff, const Bnd_Box& theCBox, Standard_Real& aTB1, Standard_Real& aTB2) ;
  

  //! Checks if edges coincide on the ranges
  Standard_EXPORT   Standard_Integer CheckCoincidence (const Standard_Real aT11, const Standard_Real aT12, const Standard_Real aT21, const Standard_Real aT22, const Standard_Real theCriteria, const Standard_Real theCurveRes1) ;
  

  //! Adds common part of the given type to myCommonParts
  Standard_EXPORT   void AddSolution (const Standard_Real aT11, const Standard_Real aT12, const Standard_Real aT21, const Standard_Real aT22, const TopAbs_ShapeEnum theType) ;
  

  //! Looking for the minimal distance between edges on the ranges
  Standard_EXPORT   void FindBestSolution (const Standard_Real aT11, const Standard_Real aT12, const Standard_Real aT21, const Standard_Real aT22, Standard_Real& aT1, Standard_Real& aT2) ;
  

  //! Checks is there an intersection between edges on the given ranges
  //! (for nearly conicident edges)
  Standard_EXPORT   Standard_Boolean IsIntersection (const Standard_Real aT11, const Standard_Real aT12, const Standard_Real aT21, const Standard_Real aT22) ;


  TopoDS_Edge myEdge1;
  TopoDS_Edge myEdge2;
  Handle(Geom_Curve) myGeom1;
  Handle(Geom_Curve) myGeom2;
  BRepAdaptor_Curve myCurve1;
  BRepAdaptor_Curve myCurve2;
  Standard_Real myTol1;
  Standard_Real myTol2;
  Standard_Real myTol;
  Standard_Real myRes1;
  Standard_Real myRes2;
  Standard_Real myResCoeff1;
  Standard_Real myResCoeff2;
  Standard_Real myPTol1;
  Standard_Real myPTol2;
  IntTools_Range myRange1;
  IntTools_Range myRange2;
  Standard_Boolean mySwap;
  Standard_Integer myErrorStatus;
  IntTools_SequenceOfCommonPrts myCommonParts;


private:





};


#include <IntTools_EdgeEdge.lxx>





#endif // _IntTools_EdgeEdge_HeaderFile
