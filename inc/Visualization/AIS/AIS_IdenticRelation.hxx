// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_IdenticRelation_HeaderFile
#define _AIS_IdenticRelation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/AIS/Handle_AIS_IdenticRelation.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Visualization/AIS/AIS_Relation.hxx>
#include <Geometry/Geom/Handle_Geom_Plane.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager3d.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Presentation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Projector.hxx>
#include <Geometry/Geom/Handle_Geom_Transformation.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_Selection.hxx>
#include <Geometry/Geom/Handle_Geom_Line.hxx>
#include <Geometry/Geom/Handle_Geom_Circle.hxx>
#include <Geometry/Geom/Handle_Geom_Ellipse.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TopoDS_Shape;
class Geom_Plane;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;
class Geom_Line;
class gp_Pnt;
class Geom_Circle;
class Geom_Ellipse;
class TopoDS_Wire;
class TopoDS_Vertex;
class gp_Dir;


//! Constructs a constraint by a relation of identity
//! between two or more datums figuring in shape
//! Interactive Objects.
class AIS_IdenticRelation : public AIS_Relation
{

public:

  

  //! Initializes the relation of identity between the two
  //! entities, FirstShape and SecondShape. The plane
  //! aPlane is initialized in case a visual reference is
  //! needed to show identity.
  Standard_EXPORT AIS_IdenticRelation(const TopoDS_Shape& FirstShape, const TopoDS_Shape& SecondShape, const Handle(Geom_Plane)& aPlane);
  

  //! Returns true if the interactive object is movable.
    virtual   Standard_Boolean IsMovable()  const;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_IdenticRelation)

protected:




private: 

  
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void ComputeOneEdgeOVertexPresentation (const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeTwoEdgesPresentation (const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeTwoLinesPresentation (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Geom_Line)& aLin, gp_Pnt& Pnt1On1, gp_Pnt& Pnt2On1, gp_Pnt& Pnt1On2, gp_Pnt& Pnt2On2, const Standard_Boolean isInf1, const Standard_Boolean isInf2) ;
  
  Standard_EXPORT   void ComputeTwoCirclesPresentation (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Geom_Circle)& aCircle, const gp_Pnt& Pnt1On1, const gp_Pnt& Pnt2On1, const gp_Pnt& Pnt1On2, const gp_Pnt& Pnt2On2) ;
  
  //! Computes the presentation of the identic constraint
  //! between 2 arcs in the case of automatic presentation
  Standard_EXPORT   void ComputeAutoArcPresentation (const Handle(Geom_Circle)& aCircle, const gp_Pnt& firstp, const gp_Pnt& lastp, const Standard_Boolean isstatic = Standard_False) ;
  
  //! Computes the presentation of the identic constraint
  //! between 2 circles in the case of non automatic presentation
  Standard_EXPORT   void ComputeNotAutoCircPresentation (const Handle(Geom_Circle)& aCircle) ;
  
  //! Computes the presentation of the identic constraint
  //! between 2 arcs in the case of non automatic presentation
  Standard_EXPORT   void ComputeNotAutoArcPresentation (const Handle(Geom_Circle)& aCircle, const gp_Pnt& pntfirst, const gp_Pnt& pntlast) ;
  
  Standard_EXPORT   void ComputeTwoEllipsesPresentation (const Handle(Prs3d_Presentation)& aPrs, const Handle(Geom_Ellipse)& anEll, const gp_Pnt& Pnt1On1, const gp_Pnt& Pnt2On1, const gp_Pnt& Pnt1On2, const gp_Pnt& Pnt2On2) ;
  
  //! Computes the presentation of the identic constraint
  //! between 2 arcs in the case of automatic presentation
  Standard_EXPORT   void ComputeAutoArcPresentation (const Handle(Geom_Ellipse)& theEll, const gp_Pnt& firstp, const gp_Pnt& lastp, const Standard_Boolean isstatic = Standard_False) ;
  
  //! Computes the presentation of the identic constraint
  //! between 2 ellipses in the case of non automatic presentation
  Standard_EXPORT   void ComputeNotAutoElipsPresentation (const Handle(Geom_Ellipse)& theEll) ;
  
  //! Computes the presentation of the identic constraint
  //! between 2 arcs in the case of non automatic presentation
  Standard_EXPORT   void ComputeNotAutoArcPresentation (const Handle(Geom_Ellipse)& theEll, const gp_Pnt& pntfirst, const gp_Pnt& pntlast) ;
  
  Standard_EXPORT   void ComputeTwoVerticesPresentation (const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   Standard_Real ComputeSegSize()  const;
  
  Standard_EXPORT   Standard_Boolean ComputeDirection (const TopoDS_Wire& aWire, const TopoDS_Vertex& aVertex, gp_Dir& aDir)  const;
  
  Standard_EXPORT   gp_Dir ComputeLineDirection (const Handle(Geom_Line)& aLin, const gp_Pnt& anExtremity)  const;
  
  Standard_EXPORT   gp_Dir ComputeCircleDirection (const Handle(Geom_Circle)& aCirc, const TopoDS_Vertex& ConnectedVertex)  const;

  Standard_Boolean isCircle;
  gp_Pnt myFAttach;
  gp_Pnt mySAttach;
  gp_Pnt myCenter;


};


#include <Visualization/AIS/AIS_IdenticRelation.lxx>





#endif // _AIS_IdenticRelation_HeaderFile
