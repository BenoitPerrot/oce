// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_RLine_HeaderFile
#define _IntPatch_RLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/IntPatch/Handle_IntPatch_RLine.hxx>

#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/IntSurf/Handle_IntSurf_LineOn2S.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_SequenceOfPoint.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_Line.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_TypeTrans.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_Situation.hxx>
class Adaptor2d_HCurve2d;
class IntSurf_LineOn2S;
class Standard_DomainError;
class Standard_OutOfRange;
class IntPatch_Point;
class IntSurf_PntOn2S;


//! Implementation of an intersection line described by a
//! restriction line on one of the surfaces.
class IntPatch_RLine : public IntPatch_Line
{

public:

  
  //! Creates a restriction as an intersection line
  //! when the transitions are In or Out.
  Standard_EXPORT IntPatch_RLine(const Standard_Boolean Tang, const IntSurf_TypeTrans Trans1, const IntSurf_TypeTrans Trans2);
  
  //! Creates a restriction as an intersection line
  //! when the transitions are Touch.
  Standard_EXPORT IntPatch_RLine(const Standard_Boolean Tang, const IntSurf_Situation Situ1, const IntSurf_Situation Situ2);
  
  //! Creates a restriction as an intersection line
  //! when the transitions are Undecided.
  Standard_EXPORT IntPatch_RLine(const Standard_Boolean Tang);
  
  //! To add a vertex in the list.
      void AddVertex (const IntPatch_Point& Pnt) ;
  
  //! Replaces the element of range Index in the list
  //! of points.
      void Replace (const Standard_Integer Index, const IntPatch_Point& Pnt) ;
  
      void SetFirstPoint (const Standard_Integer IndFirst) ;
  
      void SetLastPoint (const Standard_Integer IndLast) ;
  
      void Add (const Handle(IntSurf_LineOn2S)& L) ;
  
  //! Returns True if the intersection is on the domain of the
  //! first patch.
  //! Returns False if the intersection is on the domain of
  //! the second patch.
      Standard_Boolean IsArcOnS1()  const;
  
  //! Returns True if the intersection is on the domain of the
  //! first patch.
  //! Returns False if the intersection is on the domain of
  //! the second patch.
      Standard_Boolean IsArcOnS2()  const;
  
  Standard_EXPORT   void SetArcOnS1 (const Handle(Adaptor2d_HCurve2d)& A) ;
  
  Standard_EXPORT   void SetArcOnS2 (const Handle(Adaptor2d_HCurve2d)& A) ;
  
  Standard_EXPORT   void SetParamOnS1 (const Standard_Real p1, const Standard_Real p2) ;
  
  Standard_EXPORT   void SetParamOnS2 (Standard_Real& p1, Standard_Real& p2) ;
  
  //! Returns the concerned arc.
     const  Handle(Adaptor2d_HCurve2d)& ArcOnS1()  const;
  
  //! Returns the concerned arc.
     const  Handle(Adaptor2d_HCurve2d)& ArcOnS2()  const;
  
  Standard_EXPORT   void ParamOnS1 (Standard_Real& p1, Standard_Real& p2)  const;
  
  Standard_EXPORT   void ParamOnS2 (Standard_Real& p1, Standard_Real& p2)  const;
  
  //! Returns True if the line has a known First point.
  //! This point is given by the method FirstPoint().
      Standard_Boolean HasFirstPoint()  const;
  
  //! Returns True if the line has a known Last point.
  //! This point is given by the method LastPoint().
      Standard_Boolean HasLastPoint()  const;
  
  //! Returns the IntPoint corresponding to the FirstPoint.
  //! An exception is raised when HasFirstPoint returns False.
     const  IntPatch_Point& FirstPoint()  const;
  
  //! Returns the IntPoint corresponding to the LastPoint.
  //! An exception is raised when HasLastPoint returns False.
     const  IntPatch_Point& LastPoint()  const;
  
      Standard_Integer NbVertex()  const;
  
  //! Returns the vertex of range Index on the line.
     const  IntPatch_Point& Vertex (const Standard_Integer Index)  const;
  
      Standard_Boolean HasPolygon()  const;
  
  //! Returns the number of intersection points.
      Standard_Integer NbPnts()  const;
  
  //! Returns the intersection point of range Index.
     const  IntSurf_PntOn2S& Point (const Standard_Integer Index)  const;
  
  //! Set the Point of index <Index> in the LineOn2S
  Standard_EXPORT   void SetPoint (const Standard_Integer Index, const IntPatch_Point& Pnt) ;
  
  //! Set the parameters of all the vertex on the line.
  //! if a vertex is already in the line,
  //! its parameter is modified
  //! else a new point in the line is inserted.
  Standard_EXPORT   void ComputeVertexParameters (const Standard_Real Tol) ;




  DEFINE_STANDARD_RTTI(IntPatch_RLine)

protected:




private: 


  Handle(Adaptor2d_HCurve2d) theArcOnS1;
  Handle(Adaptor2d_HCurve2d) theArcOnS2;
  Standard_Boolean onS1;
  Standard_Boolean onS2;
  Standard_Real ParamInf1;
  Standard_Real ParamSup1;
  Standard_Real ParamInf2;
  Standard_Real ParamSup2;
  Handle(IntSurf_LineOn2S) curv;
  Standard_Boolean fipt;
  Standard_Boolean lapt;
  Standard_Integer indf;
  Standard_Integer indl;
  IntPatch_SequenceOfPoint svtx;


};


#include <ModelingAlgorithms/IntPatch/IntPatch_RLine.lxx>





#endif // _IntPatch_RLine_HeaderFile
