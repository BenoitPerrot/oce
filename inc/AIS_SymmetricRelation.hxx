// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_SymmetricRelation_HeaderFile
#define _AIS_SymmetricRelation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_SymmetricRelation.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <AIS_Relation.hxx>
#include <Handle_Geom_Plane.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
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


//! A framework to display constraints of symmetricity
//! between two or more datum Interactive Objects.
//! A plane serves as the axis of symmetry between the
//! shapes of which the datums are parts.
class AIS_SymmetricRelation : public AIS_Relation
{

public:

  
  //! Constructs an object to display constraints of symmetricity.
  //! This object is defined by a tool aSymmTool, a first
  //! shape FirstShape, a second shape SecondShape, and a plane aPlane.
  //! aPlane serves as the axis of symmetry.
  //! aSymmTool is the shape composed of FirstShape
  //! SecondShape and aPlane. It may be queried and
  //! edited using the functions GetTool and SetTool.
  //! The two shapes are typically two edges, two vertices or two points.
  Standard_EXPORT AIS_SymmetricRelation(const TopoDS_Shape& aSymmTool, const TopoDS_Shape& FirstShape, const TopoDS_Shape& SecondShape, const Handle(Geom_Plane)& aPlane);
  
  //! Returns true if the symmetric constraint display is movable.
    virtual   Standard_Boolean IsMovable()  const;
  
  //! Sets the tool aSymmetricTool composed of a first
  //! shape, a second shape, and a plane.
  //! This tool is initially created at construction time.
      void SetTool (const TopoDS_Shape& aSymmetricTool) ;
  
  //! Returns the tool composed of a first shape, a second
  //! shape, and a plane. This tool is created at construction time.
     const  TopoDS_Shape& GetTool()  const;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_SymmetricRelation)

protected:




private: 

  
  Standard_EXPORT   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void ComputeTwoFacesSymmetric (const Handle(Prs3d_Presentation)& aprs) ;
  
  Standard_EXPORT   void ComputeTwoEdgesSymmetric (const Handle(Prs3d_Presentation)& aprs) ;
  
  Standard_EXPORT   void ComputeTwoVerticesSymmetric (const Handle(Prs3d_Presentation)& aprs) ;

  TopoDS_Shape myTool;
  gp_Pnt myFAttach;
  gp_Pnt mySAttach;
  gp_Dir myFDirAttach;
  gp_Dir myAxisDirAttach;


};


#include <AIS_SymmetricRelation.lxx>





#endif // _AIS_SymmetricRelation_HeaderFile
