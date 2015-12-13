// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_Walking_HeaderFile
#define _BRepBlend_Walking_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Blend_Point.hxx>
#include <Handle_BRepBlend_Line.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Blend_SequenceOfPoint.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Adaptor3d_HVertex.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopAbs_State.hxx>
#include <Blend_Status.hxx>
class BRepBlend_Line;
class Adaptor3d_HSurface;
class Adaptor3d_TopolTool;
class StdFail_NotDone;
class Adaptor3d_HVertex;
class Adaptor2d_HCurve2d;
class Adaptor3d_HCurve;
class BRepBlend_HCurve2dTool;
class Adaptor3d_HSurfaceTool;
class BRepBlend_HCurveTool;
class BRepBlend_BlendTool;
class BRepBlend_PointOnRst;
class BRepBlend_SequenceOfPointOnRst;
class BRepBlend_Extremity;
class Blend_Point;
class Blend_Function;
class Blend_FuncInv;
class gp_Pnt2d;
class IntSurf_Transition;



class BRepBlend_Walking 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepBlend_Walking(const Handle(Adaptor3d_HSurface)& Surf1, const Handle(Adaptor3d_HSurface)& Surf2, const Handle(Adaptor3d_TopolTool)& Domain1, const Handle(Adaptor3d_TopolTool)& Domain2);
  
  Standard_EXPORT   void SetDomainsToRecadre (const Handle(Adaptor3d_TopolTool)& RecDomain1, const Handle(Adaptor3d_TopolTool)& RecDomain2) ;
  
  Standard_EXPORT   void AddSingularPoint (const Blend_Point& P) ;
  
  Standard_EXPORT   void Perform (Blend_Function& F, Blend_FuncInv& FInv, const Standard_Real Pdep, const Standard_Real Pmax, const Standard_Real MaxStep, const Standard_Real TolGuide, const math_Vector& Soldep, const Standard_Real Tolesp, const Standard_Real Fleche, const Standard_Boolean Appro = Standard_False) ;
  
  Standard_EXPORT   Standard_Boolean PerformFirstSection (Blend_Function& F, const Standard_Real Pdep, math_Vector& ParDep, const Standard_Real Tolesp, const Standard_Real TolGuide, TopAbs_State& Pos1, TopAbs_State& Pos2) ;
  
  Standard_EXPORT   Standard_Boolean PerformFirstSection (Blend_Function& F, Blend_FuncInv& FInv, const Standard_Real Pdep, const Standard_Real Pmax, const math_Vector& ParDep, const Standard_Real Tolesp, const Standard_Real TolGuide, const Standard_Boolean RecOnS1, const Standard_Boolean RecOnS2, Standard_Real& Psol, math_Vector& ParSol) ;
  
  Standard_EXPORT   Standard_Boolean Continu (Blend_Function& F, Blend_FuncInv& FInv, const Standard_Real P) ;
  
  Standard_EXPORT   Standard_Boolean Continu (Blend_Function& F, Blend_FuncInv& FInv, const Standard_Real P, const Standard_Boolean OnS1) ;
  
  Standard_EXPORT   Standard_Boolean Complete (Blend_Function& F, Blend_FuncInv& FInv, const Standard_Real Pmin) ;
  
  Standard_EXPORT   void ClassificationOnS1 (const Standard_Boolean C) ;
  
  Standard_EXPORT   void ClassificationOnS2 (const Standard_Boolean C) ;
  
  Standard_EXPORT   void Check2d (const Standard_Boolean C) ;
  
  Standard_EXPORT   void Check (const Standard_Boolean C) ;
  
      Standard_Boolean TwistOnS1()  const;
  
      Standard_Boolean TwistOnS2()  const;
  
      Standard_Boolean IsDone()  const;
  
     const  Handle(BRepBlend_Line)& Line()  const;




protected:





private:

  
  Standard_EXPORT   void InternalPerform (Blend_Function& F, Blend_FuncInv& FInv, const Standard_Real Bound) ;
  
  Standard_EXPORT   Standard_Integer ArcToRecadre (const Standard_Boolean OnFirst, const math_Vector& Sol, const Standard_Integer PrevIndex, gp_Pnt2d& lpt2d, gp_Pnt2d& pt2d, Standard_Real& ponarc) ;
  
  Standard_EXPORT   Standard_Boolean Recadre (Blend_FuncInv& FInv, const Standard_Boolean OnFirst, const math_Vector& Sol, math_Vector& Solrst, Standard_Integer& Indexsol, Standard_Boolean& IsVtx, Handle(Adaptor3d_HVertex)& Vtx, const Standard_Real Extrap = 0.0) ;
  
  Standard_EXPORT   void Transition (const Standard_Boolean OnFirst, const Handle(Adaptor2d_HCurve2d)& A, const Standard_Real Param, IntSurf_Transition& TLine, IntSurf_Transition& TArc) ;
  
  Standard_EXPORT   void MakeExtremity (BRepBlend_Extremity& Extrem, const Standard_Boolean OnFirst, const Standard_Integer Index, const Standard_Real Param, const Standard_Boolean IsVtx, const Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   void MakeSingularExtremity (BRepBlend_Extremity& Extrem, const Standard_Boolean OnFirst, const Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   Blend_Status CheckDeflection (const Standard_Boolean OnFirst, const Blend_Point& CurPoint) ;
  
  Standard_EXPORT   Blend_Status TestArret (Blend_Function& F, const Blend_Status State, const Standard_Boolean TestDeflection = Standard_True, const Standard_Boolean TestSolution = Standard_True, const Standard_Boolean TestLengthStep = Standard_False) ;


  Blend_Point previousP;
  Handle(BRepBlend_Line) line;
  math_Vector sol;
  Blend_SequenceOfPoint jalons;
  Handle(Adaptor3d_HSurface) surf1;
  Handle(Adaptor3d_HSurface) surf2;
  Handle(Adaptor3d_TopolTool) domain1;
  Handle(Adaptor3d_TopolTool) domain2;
  Handle(Adaptor3d_TopolTool) recdomain1;
  Handle(Adaptor3d_TopolTool) recdomain2;
  Standard_Real tolesp;
  Standard_Real tolgui;
  Standard_Real pasmax;
  Standard_Real fleche;
  Standard_Real param;
  Standard_Real sens;
  Standard_Boolean done;
  Standard_Boolean rebrou;
  Standard_Boolean iscomplete;
  Standard_Boolean comptra;
  Standard_Boolean clasonS1;
  Standard_Boolean clasonS2;
  Standard_Boolean check2d;
  Standard_Boolean check;
  Standard_Boolean twistflag1;
  Standard_Boolean twistflag2;


};

#define TheVertex Handle(Adaptor3d_HVertex)
#define TheVertex_hxx <Adaptor3d_HVertex.hxx>
#define TheArc Handle(Adaptor2d_HCurve2d)
#define TheArc_hxx <Adaptor2d_HCurve2d.hxx>
#define TheSurface Handle(Adaptor3d_HSurface)
#define TheSurface_hxx <Adaptor3d_HSurface.hxx>
#define TheCurve Handle(Adaptor3d_HCurve)
#define TheCurve_hxx <Adaptor3d_HCurve.hxx>
#define TheVertexTool Standard_Integer
#define TheVertexTool_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheArcTool BRepBlend_HCurve2dTool
#define TheArcTool_hxx <BRepBlend_HCurve2dTool.hxx>
#define TheSurfaceTool Adaptor3d_HSurfaceTool
#define TheSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define TheCurveTool BRepBlend_HCurveTool
#define TheCurveTool_hxx <BRepBlend_HCurveTool.hxx>
#define Handle_TheTopolTool Handle_Adaptor3d_TopolTool
#define TheTopolTool Adaptor3d_TopolTool
#define TheTopolTool_hxx <Adaptor3d_TopolTool.hxx>
#define TheBlendTool BRepBlend_BlendTool
#define TheBlendTool_hxx <BRepBlend_BlendTool.hxx>
#define ThePointOnRst BRepBlend_PointOnRst
#define ThePointOnRst_hxx <BRepBlend_PointOnRst.hxx>
#define TheSeqPointOnRst BRepBlend_SequenceOfPointOnRst
#define TheSeqPointOnRst_hxx <BRepBlend_SequenceOfPointOnRst.hxx>
#define TheExtremity BRepBlend_Extremity
#define TheExtremity_hxx <BRepBlend_Extremity.hxx>
#define Handle_TheLine Handle_BRepBlend_Line
#define TheLine BRepBlend_Line
#define TheLine_hxx <BRepBlend_Line.hxx>
#define Blend_Walking BRepBlend_Walking
#define Blend_Walking_hxx <BRepBlend_Walking.hxx>

#include <Blend_Walking.lxx>

#undef TheVertex
#undef TheVertex_hxx
#undef TheArc
#undef TheArc_hxx
#undef TheSurface
#undef TheSurface_hxx
#undef TheCurve
#undef TheCurve_hxx
#undef TheVertexTool
#undef TheVertexTool_hxx
#undef TheArcTool
#undef TheArcTool_hxx
#undef TheSurfaceTool
#undef TheSurfaceTool_hxx
#undef TheCurveTool
#undef TheCurveTool_hxx
#undef Handle_TheTopolTool
#undef TheTopolTool
#undef TheTopolTool_hxx
#undef TheBlendTool
#undef TheBlendTool_hxx
#undef ThePointOnRst
#undef ThePointOnRst_hxx
#undef TheSeqPointOnRst
#undef TheSeqPointOnRst_hxx
#undef TheExtremity
#undef TheExtremity_hxx
#undef Handle_TheLine
#undef TheLine
#undef TheLine_hxx
#undef Blend_Walking
#undef Blend_Walking_hxx




#endif // _BRepBlend_Walking_HeaderFile
