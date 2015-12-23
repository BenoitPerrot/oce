// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_LineInter_HeaderFile
#define _TopOpeBRep_LineInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopOpeBRep_TypeLineCurve.hxx>
#include <Handle_IntPatch_Line.hxx>
#include <Handle_IntPatch_ALine.hxx>
#include <Handle_IntPatch_RLine.hxx>
#include <Handle_IntPatch_WLine.hxx>
#include <Handle_IntPatch_GLine.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <Handle_TopOpeBRep_HArray1OfVPointInter.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_TypeTrans.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_Situation.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class IntPatch_Line;
class IntPatch_ALine;
class IntPatch_RLine;
class IntPatch_WLine;
class IntPatch_GLine;
class TopOpeBRep_HArray1OfVPointInter;
class BRepAdaptor_Surface;
class TopoDS_Face;
class TopOpeBRep_VPointInter;
class TopOpeBRep_WPointInter;
class Geom_Curve;
class TopoDS_Shape;
class TopOpeBRepDS_Transition;
class TCollection_AsciiString;
class TopOpeBRep_Bipoint;



class TopOpeBRep_LineInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TopOpeBRep_LineInter();
  
  Standard_EXPORT   void SetLine (const Handle(IntPatch_Line)& L, const BRepAdaptor_Surface& S1, const BRepAdaptor_Surface& S2) ;
  
      void SetFaces (const TopoDS_Face& F1, const TopoDS_Face& F2) ;
  
      TopOpeBRep_TypeLineCurve TypeLineCurve()  const;
  
      Standard_Integer NbVPoint()  const;
  
  Standard_EXPORT  const  TopOpeBRep_VPointInter& VPoint (const Standard_Integer I)  const;
  
  Standard_EXPORT   TopOpeBRep_VPointInter& ChangeVPoint (const Standard_Integer I) ;
  
  Standard_EXPORT   void SetINL() ;
  
      Standard_Boolean INL()  const;
  
  Standard_EXPORT   void SetIsVClosed() ;
  
      Standard_Boolean IsVClosed()  const;
  
  Standard_EXPORT   void SetOK (const Standard_Boolean B) ;
  
      Standard_Boolean OK()  const;
  
  Standard_EXPORT   void SetHasVPonR() ;
  
      Standard_Boolean HasVPonR()  const;
  
  Standard_EXPORT   void SetVPBounds() ;
  
  Standard_EXPORT   void VPBounds (Standard_Integer& f, Standard_Integer& l, Standard_Integer& n)  const;
  
  Standard_EXPORT   Standard_Boolean IsPeriodic()  const;
  
  Standard_EXPORT   Standard_Real Period()  const;
  
  Standard_EXPORT   void Bounds (Standard_Real& f, Standard_Real& l)  const;
  
  Standard_EXPORT   Standard_Boolean HasVInternal() ;
  
  Standard_EXPORT   Standard_Integer NbWPoint()  const;
  
  Standard_EXPORT  const  TopOpeBRep_WPointInter& WPoint (const Standard_Integer I) ;
  
      IntSurf_TypeTrans TransitionOnS1()  const;
  
      IntSurf_TypeTrans TransitionOnS2()  const;
  
      IntSurf_Situation SituationS1()  const;
  
      IntSurf_Situation SituationS2()  const;
  
  Standard_EXPORT   Handle(Geom_Curve) Curve()  const;
  
  Standard_EXPORT   Handle(Geom_Curve) Curve (const Standard_Real parmin, const Standard_Real parmax)  const;
  
  //! returns the edge of a RESTRICTION line (or a null edge).
  Standard_EXPORT  const  TopoDS_Shape& Arc()  const;
  
  //! returns true if Arc() edge (of a RESTRICTION line) is
  //! an edge of the original face <Index> (1 or 2).
  Standard_EXPORT   Standard_Boolean ArcIsEdge (const Standard_Integer I)  const;
  
     const  Handle(IntPatch_WLine)& LineW()  const;
  
     const  Handle(IntPatch_GLine)& LineG()  const;
  
     const  Handle(IntPatch_RLine)& LineR()  const;
  
  Standard_EXPORT   Standard_Boolean HasFirstPoint()  const;
  
  Standard_EXPORT   Standard_Boolean HasLastPoint()  const;
  
  Standard_EXPORT   void ComputeFaceFaceTransition() ;
  
  Standard_EXPORT  const  TopOpeBRepDS_Transition& FaceFaceTransition (const Standard_Integer I)  const;
  
      void Index (const Standard_Integer I) ;
  
      Standard_Integer Index()  const;
  
  Standard_EXPORT   void DumpType()  const;
  
  Standard_EXPORT   void DumpVPoint (const Standard_Integer I, const TCollection_AsciiString& s1, const TCollection_AsciiString& s2)  const;
  
  Standard_EXPORT   void DumpBipoint (const TopOpeBRep_Bipoint& B, const TCollection_AsciiString& s1, const TCollection_AsciiString& s2)  const;
  
  Standard_EXPORT   void SetTraceIndex (const Standard_Integer exF1, const Standard_Integer exF2) ;
  
  Standard_EXPORT   void GetTraceIndex (Standard_Integer& exF1, Standard_Integer& exF2)  const;
  
  Standard_EXPORT   Standard_OStream& DumpLineTransitions (Standard_OStream& OS)  const;




protected:





private:



  Standard_Boolean myOK;
  Standard_Integer myIndex;
  Standard_Integer myNbVPoint;
  Standard_Boolean myIsVClosed;
  Standard_Boolean myHasVPonR;
  Standard_Boolean myINL;
  Standard_Boolean myVPBDefined;
  Standard_Integer myVPF;
  Standard_Integer myVPL;
  Standard_Integer myVPN;
  TopOpeBRep_TypeLineCurve myTypeLineCurve;
  Handle(IntPatch_Line) myIL;
  Handle(IntPatch_ALine) myILA;
  Handle(IntPatch_RLine) myILR;
  Handle(IntPatch_WLine) myILW;
  Handle(IntPatch_GLine) myILG;
  TopOpeBRep_WPointInter myCurrentWP;
  Handle(TopOpeBRep_HArray1OfVPointInter) myHAVP;
  TopoDS_Face myF1;
  TopoDS_Face myF2;
  TopOpeBRepDS_Transition myLineTonF1;
  TopOpeBRepDS_Transition myLineTonF2;
  TopoDS_Shape myNullShape;
  Standard_Integer myexF1;
  Standard_Integer myexF2;


};


#include <TopOpeBRep_LineInter.lxx>





#endif // _TopOpeBRep_LineInter_HeaderFile
