// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_MidPointRelation_HeaderFile
#define _AIS_MidPointRelation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_MidPointRelation.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Visualization/AIS/AIS_Relation.hxx>
#include <Handle_Geom_Plane.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Prs3d_Projector.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Handle_SelectMgr_Selection.hxx>
class TopoDS_Shape;
class Geom_Plane;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;
class gp_Lin;
class gp_Pnt;
class gp_Circ;
class gp_Elips;


//! presentation of equal distance to point myMidPoint
class AIS_MidPointRelation : public AIS_Relation
{

public:

  
  Standard_EXPORT AIS_MidPointRelation(const TopoDS_Shape& aSymmTool, const TopoDS_Shape& FirstShape, const TopoDS_Shape& SecondShape, const Handle(Geom_Plane)& aPlane);
  
    virtual   Standard_Boolean IsMovable()  const;
  
      void SetTool (const TopoDS_Shape& aMidPointTool) ;
  
     const  TopoDS_Shape& GetTool()  const;
  
  //! Computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_MidPointRelation)

protected:




private: 

  
  Standard_EXPORT   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void ComputeFaceFromPnt (const Handle(Prs3d_Presentation)& aprs, const Standard_Boolean first) ;
  
  Standard_EXPORT   void ComputeEdgeFromPnt (const Handle(Prs3d_Presentation)& aprs, const Standard_Boolean first) ;
  
  Standard_EXPORT   void ComputeVertexFromPnt (const Handle(Prs3d_Presentation)& aprs, const Standard_Boolean first) ;
  
  Standard_EXPORT   void ComputePointsOnLine (const gp_Lin& aLin, const Standard_Boolean first) ;
  
  Standard_EXPORT   void ComputePointsOnLine (const gp_Pnt& pnt1, const gp_Pnt& pnt2, const Standard_Boolean first) ;
  
  Standard_EXPORT   void ComputePointsOnCirc (const gp_Circ& aCirc, const gp_Pnt& pnt1, const gp_Pnt& pnt2, const Standard_Boolean first) ;
  
  //! ComputePointsOn... methods set myFAttach, myFirstPnt and myLastPnt
  //! from the following initial data: curve, end points, myMidPoint.
  //! End points (pnt1 & pnt2) and curve define the trimmed curve.
  //! If end points are equal, curve is not trimmed (line - special case).
  //!
  //! .------. pnt2
  //! /        
  //! .  circle  . myLastPnt
  //! |          |
  //! . pnt1     . myFAttach
  //! \   arc  /          . myMidPoint
  //! .______. myFirstPnt
  Standard_EXPORT   void ComputePointsOnElips (const gp_Elips& anEll, const gp_Pnt& pnt1, const gp_Pnt& pnt2, const Standard_Boolean first) ;

  TopoDS_Shape myTool;
  gp_Pnt myMidPoint;
  gp_Pnt myFAttach;
  gp_Pnt myFirstPnt1;
  gp_Pnt myFirstPnt2;
  gp_Pnt mySAttach;
  gp_Pnt mySecondPnt1;
  gp_Pnt mySecondPnt2;


};


#include <Visualization/AIS/AIS_MidPointRelation.lxx>





#endif // _AIS_MidPointRelation_HeaderFile
