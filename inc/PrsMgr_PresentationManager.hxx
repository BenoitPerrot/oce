// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_PresentationManager_HeaderFile
#define _PrsMgr_PresentationManager_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_PrsMgr_PresentationManager.hxx>

#include <Handle_Graphic3d_StructureManager.hxx>
#include <Standard_Integer.hxx>
#include <PrsMgr_ListOfPresentations.hxx>
#include <Handle_V3d_View.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_PrsMgr_PresentableObject.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Graphic3d_NameOfMaterial.hxx>
#include <Handle_Prs3d_ShadingAspect.hxx>
#include <Handle_PrsMgr_Presentation.hxx>
class Graphic3d_StructureManager;
class V3d_View;
class Standard_NoSuchObject;
class PrsMgr_PresentableObject;
class Prs3d_Presentation;
class Geom_Transformation;
class Prs3d_ShadingAspect;
class PrsMgr_Presentation;


//! A framework to manage 3D displays, graphic entities and their updates.
//! Used in the AIS package (Application Interactive Services), to enable the advanced user to define the
//! default display mode of a new interactive object which extends the list of signatures and types.
//! Definition of new display types is handled by calling the presentation algorithms provided by the StdPrs package.
class PrsMgr_PresentationManager : public MMgt_TShared
{

public:

  

  //! Creates a framework to manage displays and graphic entities with the 3D view theStructureManager.
  Standard_EXPORT PrsMgr_PresentationManager(const Handle(Graphic3d_StructureManager)& theStructureManager);
  
  //! Displays the presentation of the object in the given Presentation manager with the given mode.
  //! The mode should be enumerated by the object which inherits PresentableObject.
  Standard_EXPORT   void Display (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  
  //! erases the presentation of the object in the given
  //! Presentation manager with the given mode.
  Standard_EXPORT   void Erase (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  

  //! Clears the presentation of the presentable object thePrsObject in this framework with the display mode theMode.
  Standard_EXPORT virtual   void Clear (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  
  //! Sets the visibility of presentable object.
  Standard_EXPORT   void SetVisibility (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode, const Standard_Boolean theValue) ;
  
  //! Highlights the presentation of the presentable object
  //! thePrsObject in this framework with the display mode theMode.
  Standard_EXPORT   void Highlight (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  
  //! Removes highlighting from the presentation of the
  //! presentable object thePrsObject in this framework with the display mode theMode.
  Standard_EXPORT   void Unhighlight (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  

  //! Sets the display priority theNewPrior of the
  //! presentable object thePrsObject in this framework with the display mode theMode.
  Standard_EXPORT   void SetDisplayPriority (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode, const Standard_Integer theNewPrior)  const;
  

  //! Returns the display priority of the presentable object
  //! thePrsObject in this framework with the display mode theMode.
  Standard_EXPORT   Standard_Integer DisplayPriority (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode)  const;
  
  //! Set Z layer ID for all presentations of the object.
  Standard_EXPORT   void SetZLayer (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theLayerId) ;
  
  //! Get Z layer ID assigned to all presentations of the object.
  //! Method returns -1 value if object has no presentations and is
  //! impossible to get layer index.
  Standard_EXPORT   Standard_Integer GetZLayer (const Handle(PrsMgr_PresentableObject)& thePrsObject)  const;
  
  Standard_EXPORT   Standard_Boolean IsDisplayed (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0)  const;
  
  //! Returns true if the presentation of the presentable
  //! object thePrsObject in this framework with the display mode theMode is highlighted.
  Standard_EXPORT   Standard_Boolean IsHighlighted (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0)  const;
  
  //! Updates the presentation of the presentable object
  //! thePrsObject in this framework with the display mode theMode.
  Standard_EXPORT   void Update (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0)  const;
  
  //! Resets the transient list of presentations previously displayed in immediate mode
  //! and begins accumulation of new list by following AddToImmediateList()/Color()/Highlight() calls.
  Standard_EXPORT   void BeginImmediateDraw() ;
  
  //! Resets the transient list of presentations previously displayed in immediate mode.
  Standard_EXPORT   void ClearImmediateDraw() ;
  
  //! Stores thePrs in the transient list of presentations to be displayed in immediate mode.
  //! Will be taken in account in EndImmediateDraw method.
  Standard_EXPORT   void AddToImmediateList (const Handle(Prs3d_Presentation)& thePrs) ;
  
  //! Allows rapid drawing of the view theView by avoiding an update of the whole background.
  Standard_EXPORT   void EndImmediateDraw (const Handle(V3d_View)& theView) ;
  
  //! Returns true if Presentation Manager is accumulating transient list of presentations to be displayed in immediate mode.
      Standard_Boolean IsImmediateModeOn()  const;
  
  //! Highlights the graphic object thePrsObject in the color theColor.
  //! thePrsObject has the display mode theMode;
  //! this has the default value of 0, that is, the wireframe display mode.
  Standard_EXPORT   void Color (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Quantity_NameOfColor theColor = Quantity_NOC_YELLOW, const Standard_Integer theMode = 0) ;
  
  //! highlights the boundbox of the presentation
  Standard_EXPORT   void BoundBox (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  
  Standard_EXPORT   void Connect (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Handle(PrsMgr_PresentableObject)& theOtherObject, const Standard_Integer theMode = 0, const Standard_Integer theOtherMode = 0) ;
  

  //! Sets the transformation theTransformation for the presentable object thePrsObject.
  //! thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.
  Standard_EXPORT   void Transform (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Handle(Geom_Transformation)& theTransformation, const Standard_Integer theMode = 0) ;
  
  //! Returns the structure manager.
     const  Handle(Graphic3d_StructureManager)& StructureManager()  const;
  
  //! this method will change the color and the aspect of the presentations containing shaded structures.
  Standard_EXPORT   void SetShadingAspect (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Quantity_NameOfColor theColor, const Graphic3d_NameOfMaterial theMaterial, const Standard_Integer theMode = 0) ;
  
  //! this method will change the color and the aspect of the presentations containing shaded structures.
  Standard_EXPORT   void SetShadingAspect (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Handle(Prs3d_ShadingAspect)& theShadingAspect, const Standard_Integer theMode = 0) ;
  
  //! Returns true if there is a presentation of the
  //! presentable object thePrsObject in this framework, thePrsObject having the display mode theMode.
  Standard_EXPORT   Standard_Boolean HasPresentation (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0)  const;
  
  //! Returns the presentation Presentation of the presentable object thePrsObject in this framework. thePrsObject has the display mode theMode.
  Standard_EXPORT   Handle(PrsMgr_Presentation) Presentation (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0)  const;




  DEFINE_STANDARD_RTTI(PrsMgr_PresentationManager)

protected:

  
  //! Adds a presentation of the presentable object thePrsObject to this framework.
  //! thePrsObject has the display mode theMode.
  Standard_EXPORT   void AddPresentation (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;
  
  //! Removes a presentation of the presentable object thePrsObject to this framework. thePrsObject has the display mode theMode.
  Standard_EXPORT   void RemovePresentation (const Handle(PrsMgr_PresentableObject)& thePrsObject, const Standard_Integer theMode = 0) ;

  Handle(Graphic3d_StructureManager) myStructureManager;
  Standard_Integer myImmediateModeOn;
  PrsMgr_ListOfPresentations myImmediateList;
  Handle(V3d_View) myImmediateView;


private: 




};


#include <PrsMgr_PresentationManager.lxx>





#endif // _PrsMgr_PresentationManager_HeaderFile
