// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_MultipleConnectedInteractive_HeaderFile
#define _AIS_MultipleConnectedInteractive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/AIS/Handle_AIS_MultipleConnectedInteractive.hxx>

#include <Visualization/AIS/AIS_InteractiveObject.hxx>
#include <Visualization/AIS/Handle_AIS_InteractiveObject.hxx>
#include <Visualization/Graphic3d/Graphic3d_TransModeFlags.hxx>
#include <Visualization/AIS/AIS_KindOfInteractive.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager3d.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Presentation.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Projector.hxx>
#include <Geometry/Geom/Handle_Geom_Transformation.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_Selection.hxx>
class AIS_InteractiveObject;
class gp_Trsf;
class gp_Pnt;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;


//! Defines an Interactive Object by gathering together
//! several object presentations. This is done through a
//! list of interactive objects. These can also be
//! Connected objects. That way memory-costly
//! calculations of presentation are avoided.
class AIS_MultipleConnectedInteractive : public AIS_InteractiveObject
{

public:

  
  //! Initializes the Interactive Object with multiple
  //! connections to AIS_Interactive objects.
  Standard_EXPORT AIS_MultipleConnectedInteractive();
  
  //! Establishes the connection between the Connected Interactive Object, theInteractive, and its reference.
  //! Copies local transformation and transformation persistence mode from theInteractive.
  //! @return created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
  Standard_EXPORT   Handle(AIS_InteractiveObject) Connect (const Handle(AIS_InteractiveObject)& theInteractive) ;
  
  //! Establishes the connection between the Connected Interactive Object, theInteractive, and its reference.
  //! Locates instance in theLocation and copies transformation persistence mode from theInteractive.
  //! @return created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
  Standard_EXPORT   Handle(AIS_InteractiveObject) Connect (const Handle(AIS_InteractiveObject)& theInteractive, const gp_Trsf& theLocation) ;
  
  //! Establishes the connection between the Connected Interactive Object, theInteractive, and its reference.
  //! Locates instance in theLocation and applies specified transformation persistence mode.
  //! @return created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
  Standard_EXPORT virtual   Handle(AIS_InteractiveObject) Connect (const Handle(AIS_InteractiveObject)& theInteractive, const gp_Trsf& theLocation, const Graphic3d_TransModeFlags& theTrsfPersFlag, const gp_Pnt& theTrsfPersPoint) ;
  
  Standard_EXPORT virtual   AIS_KindOfInteractive Type()  const;
  
  Standard_EXPORT virtual   Standard_Integer Signature()  const;
  
  //! Returns true if the object is connected to others.
  Standard_EXPORT   Standard_Boolean HasConnection()  const;
  
  //! Removes the connection with theInteractive.
  Standard_EXPORT   void Disconnect (const Handle(AIS_InteractiveObject)& theInteractive) ;
  
  //! Clears all the connections to objects.
  Standard_EXPORT   void DisconnectAll() ;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  //! Informs the graphic context that the interactive Object
  //! may be decomposed into sub-shapes for dynamic selection.
  Standard_EXPORT virtual   Standard_Boolean AcceptShapeDecomposition()  const;




  DEFINE_STANDARD_RTTI(AIS_MultipleConnectedInteractive)

protected:

  
  //! this method is redefined virtual;
  //! when the instance is connected to another
  //! InteractiveObject,this method doesn't
  //! compute anything, but just uses the
  //! presentation of this last object, with
  //! a transformation if there's one stored.
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;



private: 

  
  //! Computes the selection for whole subtree in scene hierarchy.
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;



};







#endif // _AIS_MultipleConnectedInteractive_HeaderFile
