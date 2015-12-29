// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

//:l8 abv 15.01.99: CTS22022: writing correct pcurves for indirect tori
//:p5 abv 26.02.99: PRO18207: force copying of edge if any its pcurve is to be replaced
//szv#4 S4163
//S4181 pdn 20.04.99 Modification of indirect rectangular trimming surfaces and taking
// locations into account
//szv 03.01.01 PositiveCones merged in
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <ModelingAlgorithms/ShapeCustom/ShapeCustom_DirectModification.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeCustom_DirectModification)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BRepTools_Modification),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeCustom_DirectModification)
IMPLEMENT_DOWNCAST(ShapeCustom_DirectModification,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeCustom_DirectModification)

#include <Mathematics/Primitives/gp_Mat.hxx>
#include <Geometry/Geom/Geom_ConicalSurface.hxx>
#include <Geometry/Geom/Geom_ElementarySurface.hxx>
#include <Geometry/Geom/Geom_RectangularTrimmedSurface.hxx>

#include <Mathematics/Precision/Precision.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <ModelingData/BRep/BRep_TEdge.hxx>
#include <ModelingData/BRep/BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#include <ModelingData/BRep/BRep_GCurve.hxx>

//=======================================================================
//function : ShapeCustom_DirectModification
//purpose  : 
//=======================================================================

ShapeCustom_DirectModification::ShapeCustom_DirectModification()
{
}

//S4181 returns 0 - none, 1 - indirect, 2 - negative cone, 3 - indirect negative cone
static Standard_Integer IsIndirectSurface (Handle(Geom_Surface) &S,
					   TopLoc_Location &L)
{
  Standard_Integer result = 0;

  Handle(Geom_Surface) TS = S;
  while (TS->IsKind(STANDARD_TYPE(Geom_RectangularTrimmedSurface)))
    TS = Handle(Geom_RectangularTrimmedSurface)::DownCast(TS)->BasisSurface();

  Handle(Geom_ElementarySurface) ES = Handle(Geom_ElementarySurface)::DownCast(TS);
  if (!ES.IsNull()) {
    // is the surface indirect ?
    gp_Trsf t = L.Transformation();
    Standard_Boolean neg = t.IsNegative();
    Standard_Boolean det = ( t.VectorialPart().Determinant() < 0.0 );
    Standard_Boolean dir = ES->Position().Direct();
    if ( ( neg != det ) == dir ) result = 1;
    Handle(Geom_ConicalSurface) CS = Handle(Geom_ConicalSurface)::DownCast(ES);
    if (!CS.IsNull()) {
      // does the cone have negative semiangle ?
      if ( CS->SemiAngle() < 0.0 ) result += 2;
    }
    if (result) S = TS;
  }

  return result;
}

//=======================================================================
//function : NewSurface
//purpose  : 
//=======================================================================

Standard_Boolean ShapeCustom_DirectModification::NewSurface (const TopoDS_Face& F,
                                                             Handle(Geom_Surface)& S,
                                                             TopLoc_Location& L,
                                                             Standard_Real& Tol,
                                                             Standard_Boolean& RevWires,
                                                             Standard_Boolean& RevFace)
{
  S = BRep_Tool::Surface(F,L);
  
  switch (IsIndirectSurface(S,L)) {
    case 1: { // Indirect surface
      // UReverse a copy of S
      S = S->UReversed();
      RevWires = Standard_True;
      RevFace = Standard_True;
      break;
    }
    case 2: { // Negative cone
      // U- and VReverse a copy of S
      S = S->VReversed();
      S->UReverse();
      RevWires = Standard_False;
      RevFace = Standard_False;
      break;
    }
    case 3: { // Indirect negative cone
      // VReverse a copy of S
      S = S->VReversed();
      RevWires = Standard_True;
      RevFace = Standard_True;
      break;
    }
    default: return Standard_False;
  }

  Tol = BRep_Tool::Tolerance(F);

  return Standard_True;
}

//=======================================================================
//function : NewCurve
//purpose  : 
//=======================================================================

Standard_Boolean ShapeCustom_DirectModification::NewCurve (const TopoDS_Edge& E,
							   Handle(Geom_Curve)& C,
							   TopLoc_Location& L,
							   Standard_Real& Tol) 
{
  //:p5 abv 26 Feb 99: force copying of edge if any its pcurve will be replaced
  Handle(BRep_TEdge)& TE = *((Handle(BRep_TEdge)*)&E.TShape());

  // iterate on pcurves
  for (auto cr : TE->Curves()) {
    Handle(BRep_GCurve) GC = Handle(BRep_GCurve)::DownCast(cr);
    if ( GC.IsNull() || ! GC->IsCurveOnSurface() ) continue;
    Handle(Geom_Surface) S = GC->Surface();
    TopLoc_Location Loc = GC->Location();
    if ( ! IsIndirectSurface ( S, Loc ) ) continue;
    Standard_Real f, l;
    C = BRep_Tool::Curve ( E, L, f, l );
    if ( ! C.IsNull() ) C = Handle(Geom_Curve)::DownCast ( C->Copy() );
    Tol = BRep_Tool::Tolerance(E);
    return Standard_True;
  }
  return Standard_False;
}

//=======================================================================
//function : NewPoint
//purpose  : 
//=======================================================================

Standard_Boolean ShapeCustom_DirectModification::NewPoint (const TopoDS_Vertex& /*V*/,
                                                           gp_Pnt& /*P*/, 
                                                           Standard_Real& /*Tol*/) 
{
  // 3d points are never modified
  return Standard_False;
}

//=======================================================================
//function : NewCurve2d
//purpose  : 
//=======================================================================

Standard_Boolean ShapeCustom_DirectModification::NewCurve2d (const TopoDS_Edge& E,
                                                             const TopoDS_Face& F,
                                                             const TopoDS_Edge& NewE,
                                                             const TopoDS_Face& NewF,
                                                             Handle(Geom2d_Curve)& C,
                                                             Standard_Real& Tol) 
{
  TopLoc_Location L;
  Handle(Geom_Surface) S = BRep_Tool::Surface(F,L);

  Standard_Integer result = IsIndirectSurface ( S, L );
  if ( !result && E.IsSame(NewE) ) return Standard_False;

  Standard_Real f, l;
  C = BRep_Tool::CurveOnSurface( E, F, f, l );
  Tol = BRep_Tool::Tolerance(E);

  if ( result ) {
    
    gp_Trsf2d T;

    switch (result) {
      case 1: { // Indirect surface
	// mirror the PCurve about the V axis
	T.SetMirror(gp::OY2d());
	C = Handle(Geom2d_Curve)::DownCast(C->Transformed(T));
	break;
      }
      case 2: { // Negative cone
	// mirror the PCurve about the U and V axis
	T.SetMirror(gp::OX2d());
	C = Handle(Geom2d_Curve)::DownCast(C->Transformed(T));
	T.SetMirror(gp::OY2d());
	C->Transform(T);
	break;
      }
      case 3: { // Indirect negative cone
	// mirror the PCurve about the U axis
	T.SetMirror(gp::OX2d());
	C = Handle(Geom2d_Curve)::DownCast(C->Transformed(T));
	break;
      }
    }

    //#26 rln When seam edge contains triangulations trimming is lost by BRep_Builder::UpdateEdge
    if (BRepTools::IsReallyClosed (E, F)) {
      //szv#4:S4163:12Mar99 SGI warning
      TopoDS_Shape sh = NewE.Reversed();
      Handle(Geom2d_Curve) tmp = BRep_Tool::CurveOnSurface( TopoDS::Edge(sh), NewF, f, l );
      if (tmp.IsNull()) {
	tmp = BRep_Tool::CurveOnSurface (E, F, f, l);
	BRep_Builder B;
	B.UpdateEdge (NewE, tmp, C, NewF, Tol);
	B.Range (NewE, NewF, f, l);
	//anyway, tmp will be removed later by BRepTools_Modifier
      }
    }
  }
  else {
    //:p5 abv 26 Feb 99: force copying of pcurves if edge was copied
    if ( ! C.IsNull() ) C = Handle(Geom2d_Curve)::DownCast ( C->Copy() );
  }

  return Standard_True;
}

//=======================================================================
//function : NewParameter
//purpose  : 
//=======================================================================

Standard_Boolean ShapeCustom_DirectModification::NewParameter (const TopoDS_Vertex& /*V*/,
                                                               const TopoDS_Edge& /*E*/,
                                                               Standard_Real& /*P*/,
                                                               Standard_Real& /*Tol*/) 
{
  return Standard_False;
}

//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape ShapeCustom_DirectModification::Continuity (const TopoDS_Edge& E,
                                                          const TopoDS_Face& F1,
                                                          const TopoDS_Face& F2,
                                                          const TopoDS_Edge& /*NewE*/,
                                                          const TopoDS_Face& /*NewF1*/,
                                                          const TopoDS_Face& /*NewF2*/) 
{
  return BRep_Tool::Continuity(E,F1,F2);
}
