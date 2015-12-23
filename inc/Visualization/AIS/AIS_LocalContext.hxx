// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_LocalContext_HeaderFile
#define _AIS_LocalContext_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_LocalContext.hxx>

#include <Handle_AIS_InteractiveContext.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_SelectMgr_SelectionManager.hxx>
#include <Handle_StdSelect_ViewerSelector3d.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager3d.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Visualization/AIS/AIS_DataMapOfSelStat.hxx>
#include <Handle_SelectMgr_OrFilter.hxx>
#include <Foundation/TColStd/TColStd_ListOfInteger.hxx>
#include <Handle_SelectMgr_Filter.hxx>
#include <Visualization/SelectMgr/SelectMgr_IndexedMapOfOwner.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <Visualization/AIS/AIS_SequenceOfInteractive.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_AIS_InteractiveObject.hxx>
#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <Handle_Select3D_Projector.hxx>
#include <Visualization/AIS/AIS_ClearMode.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Visualization/AIS/AIS_StatusOfDetection.hxx>
#include <Handle_V3d_View.hxx>
#include <Visualization/AIS/AIS_StatusOfPick.hxx>
#include <Handle_SelectMgr_EntityOwner.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <StdSelect_SensitivityMode.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_AIS_LocalStatus.hxx>
#include <Handle_SelectMgr_SelectableObject.hxx>
class AIS_InteractiveContext;
class SelectMgr_SelectionManager;
class StdSelect_ViewerSelector3d;
class SelectMgr_OrFilter;
class SelectMgr_Filter;
class AIS_InteractiveObject;
class TCollection_AsciiString;
class Select3D_Projector;
class TColStd_ListOfInteger;
class SelectMgr_ListOfFilter;
class V3d_View;
class TColgp_Array1OfPnt2d;
class TopoDS_Shape;
class SelectMgr_EntityOwner;
class Standard_Transient;
class TColStd_MapOfTransient;
class AIS_LocalStatus;
class SelectMgr_SelectableObject;


//! Defines a specific context  for selection.
//! It becomes possible to:
//! +  Load  InteractiveObjects  with   a mode   to be
//! activated +  associate InteractiveObjects   with a
//! set of  temporary   selectable Objects....   +   +
//! activate StandardMode  of selection  for  Entities
//! inheriting  BasicShape  from  AIS (Selection    Of
//! vertices, edges,   wires,faces...  + Add   Filters
//! acting on detected owners of sensitive primitives
//!
//! -     automatically    highlight   shapes   and
//! InteractiveObjects  (highlight of  detected shape +
//! highlight of detected selectable...
class AIS_LocalContext : public MMgt_TShared
{

public:

  
  Standard_EXPORT AIS_LocalContext();
  
  //! Constructor By Default, the  displayed objects are
  //! automatically loaded.
  Standard_EXPORT AIS_LocalContext(const Handle(AIS_InteractiveContext)& aCtx, const Standard_Integer anIndex, const Standard_Boolean LoadDisplayed = Standard_True, const Standard_Boolean AcceptStandardModes = Standard_True, const Standard_Boolean AcceptErase = Standard_False, const Standard_Boolean UseBothViewers = Standard_False);
  
  //! authorize or not others contexts to erase
  //! temporary displayed objects here;
      void AcceptErase (const Standard_Boolean aStatus) ;
  
      Standard_Boolean AcceptErase()  const;
  
  Standard_EXPORT   void SetContext (const Handle(AIS_InteractiveContext)& aCtx) ;
  
     const  TCollection_AsciiString& SelectionName()  const;
  
  Standard_EXPORT   void Terminate (const Standard_Boolean updateviewer = Standard_True) ;
  
  //! compares the current projector of the localContext
  //! with <aPrj>
  //! returns True if the projectors are identical.
  //! (no need to update projection of selection primitives
  //! when closing the local context)....
  Standard_EXPORT   Standard_Boolean HasSameProjector (const Handle(Select3D_Projector)& aPrj)  const;
  
  //! to be called when a upper local context was closed...
  //! useful to put pack the right projector...
  Standard_EXPORT   void Reactivate() ;
  
  //! returns true if done...
  Standard_EXPORT   Standard_Boolean Display (const Handle(AIS_InteractiveObject)& anInteractive, const Standard_Integer DisplayMode = 0, const Standard_Boolean AllowShapeDecomposition = Standard_True, const Standard_Integer ActivationMode = 0) ;
  
  //! loads <anInteractive> with nodisplay...
  //! returns true if done
  Standard_EXPORT   Standard_Boolean Load (const Handle(AIS_InteractiveObject)& anInteractive, const Standard_Boolean AllowShapeDecomposition = Standard_True, const Standard_Integer ActivationMode = 0) ;
  
  //! returns true if done...
  Standard_EXPORT   Standard_Boolean Erase (const Handle(AIS_InteractiveObject)& anInteractive) ;
  
  Standard_EXPORT   Standard_Boolean Remove (const Handle(AIS_InteractiveObject)& aSelectable) ;
  
  Standard_EXPORT   Standard_Boolean ClearPrs (const Handle(AIS_InteractiveObject)& anInteractive, const Standard_Integer aMode) ;
  
  //! allows  or  forbids   the   shape  decomposition  into
  //! Activated Standard   Mode  for   <aStoredObject>
  //! does nothing if the object doesn't inherits
  //! BasicShape from AIS
  Standard_EXPORT   void SetShapeDecomposition (const Handle(AIS_InteractiveObject)& aStoredObject, const Standard_Boolean aStatus) ;
  
  //! according to <atype>  , clears the  different parts of
  //! the selector (filters, modeof activation, objects...)
  Standard_EXPORT   void Clear (const AIS_ClearMode atype = AIS_CM_All) ;
  
  //! optional : activation of a mode which is not 0 for a selectable...
  Standard_EXPORT   void ActivateMode (const Handle(AIS_InteractiveObject)& aSelectable, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void DeactivateMode (const Handle(AIS_InteractiveObject)& aSelectable, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void Deactivate (const Handle(AIS_InteractiveObject)& aSelectable) ;
  
  //! decomposition of shapes into <aType>
  Standard_EXPORT   void ActivateStandardMode (const TopAbs_ShapeEnum aType) ;
  
  Standard_EXPORT   void DeactivateStandardMode (const TopAbs_ShapeEnum aType) ;
  
     const  TColStd_ListOfInteger& StandardModes()  const;
  
  Standard_EXPORT   void AddFilter (const Handle(SelectMgr_Filter)& aFilter) ;
  
  Standard_EXPORT   void RemoveFilter (const Handle(SelectMgr_Filter)& aFilter) ;
  
     const  SelectMgr_ListOfFilter& ListOfFilter()  const;
  
     const  Handle(SelectMgr_OrFilter)& Filter()  const;
  
  //! if <aStatus> = True , the shapes or subshapes detected
  //! by the selector will be automatically hilighted in the
  //! main viewer.
  //! Else the user has to manage the detected shape outside the
  //! Shape Selector....
      void SetAutomaticHilight (const Standard_Boolean aStatus) ;
  
      Standard_Boolean AutomaticHilight()  const;
  
  Standard_EXPORT   AIS_StatusOfDetection MoveTo (const Standard_Integer theXpix, const Standard_Integer theYpix, const Handle(V3d_View)& theView, const Standard_Boolean theToRedrawImmediate) ;
  
  //! returns True if more than one entity
  //! was detected at the last Mouse position.
      Standard_Boolean HasNextDetected()  const;
  
  //! returns True if  last detected. the next detected will
  //! be first one (endless loop)
  Standard_EXPORT   Standard_Integer HilightNextDetected (const Handle(V3d_View)& theView, const Standard_Boolean theToRedrawImmediate) ;
  
  Standard_EXPORT   Standard_Integer HilightPreviousDetected (const Handle(V3d_View)& theView, const Standard_Boolean theToRedrawImmediate) ;
  
  //! returns True if something was done...
  Standard_EXPORT   Standard_Boolean UnhilightLastDetected (const Handle(V3d_View)& aView) ;
  
  //! returns the number of selected
  Standard_EXPORT   AIS_StatusOfPick Select (const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   AIS_StatusOfPick ShiftSelect (const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   AIS_StatusOfPick Select (const Standard_Integer XPMin, const Standard_Integer YPMin, const Standard_Integer XPMax, const Standard_Integer YPMax, const Handle(V3d_View)& aView, const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   AIS_StatusOfPick ShiftSelect (const Standard_Integer XPMin, const Standard_Integer YPMin, const Standard_Integer XPMax, const Standard_Integer YPMax, const Handle(V3d_View)& aView, const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   AIS_StatusOfPick Select (const TColgp_Array1OfPnt2d& Polyline, const Handle(V3d_View)& aView, const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   AIS_StatusOfPick ShiftSelect (const TColgp_Array1OfPnt2d& Polyline, const Handle(V3d_View)& aView, const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   void HilightPicked (const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   void UnhilightPicked (const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   void UpdateSelected (const Standard_Boolean updateviewer = Standard_True) ;
  
  //! Part of advanced selection highlighting mechanism.
  //! If no owners belonging to anobj are selected, calls anobj->ClearSelected(),
  //! otherwise calls anobj->HilightSelected(). This method can be used to avoid
  //! redrawing the whole selection belonging to several Selectable Objects.
  Standard_EXPORT   void UpdateSelected (const Handle(AIS_InteractiveObject)& anobj, const Standard_Boolean updateviewer = Standard_True) ;
  
  //! useful  to  update selection with objects  coming from
  //! Collector or stack
  Standard_EXPORT   void SetSelected (const Handle(AIS_InteractiveObject)& anobj, const Standard_Boolean updateviewer = Standard_True) ;
  
  //! useful  to  update selection with objects  coming from
  //! Collector or stack
  Standard_EXPORT   void AddOrRemoveSelected (const Handle(AIS_InteractiveObject)& anobj, const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   void AddOrRemoveSelected (const TopoDS_Shape& aShape, const Standard_Boolean updateviewer = Standard_True) ;
  
  Standard_EXPORT   void AddOrRemoveSelected (const Handle(SelectMgr_EntityOwner)& theOwner, const Standard_Boolean toUpdateViewer = Standard_True) ;
  
  //! Clears local context selection.
  //! @param toUpdateViewer [in] if TRUE the viewer will be updated.
  Standard_EXPORT   void ClearSelected (const Standard_Boolean toUpdateViewer = Standard_True) ;
  
  //! Clears outdated selection and detection of owners for the
  //! interactive object. Use this method if selection structures
  //! of the interactive object have changed. The method unhilights
  //! and removes outdated entity owners from lists of selected
  //! and detected owners.
  //! @param theIO [in] the interactive object.
  //! @param toClearDeactivated [in] pass TRUE to treat deactivated
  //! entity owners as 'outdated' when clearing the selection.
  Standard_EXPORT   void ClearOutdatedSelection (const Handle(AIS_InteractiveObject)& theIO, const Standard_Boolean toClearDeactivated) ;
  
      Standard_Boolean HasDetected()  const;
  

  //! Initialization for iteration through mouse-detected objects in local context.
  Standard_EXPORT   void InitDetected() ;
  

  //! @return true if there is more mouse-detected objects after the current one
  //! during iteration through mouse-detected interactive objects.
  Standard_EXPORT   Standard_Boolean MoreDetected()  const;
  

  //! Gets next current object during iteration through mouse-detected
  //! interactive objects.
  Standard_EXPORT   void NextDetected() ;
  

  //! @return current mouse-detected shape or empty (null) shape, if current interactive object
  //! is not a shape (AIS_Shape) or there is no current mouse-detected interactive object at all.
  Standard_EXPORT  const  TopoDS_Shape& DetectedCurrentShape()  const;
  

  //! @return current mouse-detected interactive object or null object if there is no current detected.
  Standard_EXPORT   Handle(AIS_InteractiveObject) DetectedCurrentObject()  const;
  
  Standard_EXPORT   Standard_Boolean HasDetectedShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& DetectedShape()  const;
  
  Standard_EXPORT   Handle(AIS_InteractiveObject) DetectedInteractive()  const;
  
  Standard_EXPORT   Handle(SelectMgr_EntityOwner) DetectedOwner()  const;
  
  Standard_EXPORT   void InitSelected() ;
  
  Standard_EXPORT   Standard_Boolean MoreSelected()  const;
  
  Standard_EXPORT   void NextSelected() ;
  
  //! returns TRUE if the detected entity is a shape
  //! coming from a Decomposition of an element.
  Standard_EXPORT   Standard_Boolean HasShape()  const;
  
  Standard_EXPORT   TopoDS_Shape SelectedShape()  const;
  
  Standard_EXPORT   Handle(SelectMgr_EntityOwner) SelectedOwner()  const;
  
  Standard_EXPORT   Standard_Boolean IsSelected (const Handle(AIS_InteractiveObject)& aniobj)  const;
  
  Standard_EXPORT   Standard_Boolean IsSelected (const Handle(SelectMgr_EntityOwner)& anOwner)  const;
  
  Standard_EXPORT   Handle(AIS_InteractiveObject) SelectedInteractive()  const;
  
  //! returns TRUE if an interactive element
  //! was associated with the current picked entity.
  Standard_EXPORT   Standard_Boolean HasApplicative()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& SelectedApplicative()  const;
  
  Standard_EXPORT   void SetDisplayPriority (const Handle(AIS_InteractiveObject)& anObject, const Standard_Integer Prior) ;
  
  //! Set Z layer id for interactive object. The layer can be
  //! specified for displayed object only. The Z layers can be used to display
  //! temporarily presentations of some object in front of the other objects
  //! in the scene. The ids for Z layers are generated by V3d_Viewer.
  //! Note that Z layers differ from under-/overlayer in V3d_View:
  //! under-/overlayer are intended for specific 2D drawings that appear
  //! behind/in front of all 3D presentations, while SetZLayer() method
  //! applies to regular 3D presentations and does not imply any specific
  //! drawing methods.
  Standard_EXPORT   void SetZLayer (const Handle(AIS_InteractiveObject)& theIObj, const Standard_Integer theLayerId) ;
  
  //! Get Z layer id set for displayed interactive object.
  //! If the object doesn't exists in context or has no computed presentations,
  //! the method returns -1.
  Standard_EXPORT   Standard_Integer GetZLayer (const Handle(AIS_InteractiveObject)& theIObj)  const;
  
  Standard_EXPORT   Standard_Integer DisplayedObjects (TColStd_MapOfTransient& theMapToFill)  const;
  
  Standard_EXPORT   Standard_Boolean IsIn (const Handle(AIS_InteractiveObject)& anObject)  const;
  
  Standard_EXPORT   Standard_Boolean IsDisplayed (const Handle(AIS_InteractiveObject)& anObject)  const;
  
  Standard_EXPORT   Standard_Boolean IsDisplayed (const Handle(AIS_InteractiveObject)& anObject, const Standard_Integer aMode)  const;
  
  Standard_EXPORT  const  TColStd_ListOfInteger& SelectionModes (const Handle(AIS_InteractiveObject)& anObject)  const;
  
  Standard_EXPORT   void SubIntensityOn (const Handle(AIS_InteractiveObject)& anObject) ;
  
  Standard_EXPORT   void SubIntensityOff (const Handle(AIS_InteractiveObject)& anObject) ;
  
  Standard_EXPORT   void Hilight (const Handle(AIS_InteractiveObject)& anObject) ;
  
  Standard_EXPORT   void Hilight (const Handle(AIS_InteractiveObject)& anObject, const Quantity_NameOfColor aCol) ;
  
  Standard_EXPORT   void Unhilight (const Handle(AIS_InteractiveObject)& anObject) ;
  
  Standard_EXPORT   Standard_Boolean IsHilighted (const Handle(AIS_InteractiveObject)& anObject)  const;
  
  Standard_EXPORT   Standard_Boolean IsHilighted (const Handle(AIS_InteractiveObject)& anObject, Standard_Boolean& WithColor, Quantity_NameOfColor& HiCol)  const;
  
  //! Sets the selection sensitivity mode. SM_WINDOW mode
  //! uses the specified pixel tolerance to compute the sensitivity
  //! value, SM_VIEW mode allows to define the sensitivity manually.
  Standard_EXPORT   void SetSensitivityMode (const StdSelect_SensitivityMode aMode) ;
  
  //! Returns the selection sensitivity mode.
  Standard_EXPORT   StdSelect_SensitivityMode SensitivityMode()  const;
  
  //! Define the current selection sensitivity for
  //! this local context according to the view size.
  Standard_EXPORT   void SetSensitivity (const Standard_Real aPrecision) ;
  
  //! Returns the selection sensitivity value.
  Standard_EXPORT   Standard_Real Sensitivity()  const;
  
  //! Define the current selection sensitivity for
  //! this local context according to the view size.
  Standard_EXPORT   void SetPixelTolerance (const Standard_Integer aPrecision = 2) ;
  
  //! Returns the pixel tolerance.
  Standard_EXPORT   Standard_Integer PixelTolerance()  const;
  
  //! Resets the transient list of presentations previously displayed in immediate mode
  //! and begins accumulation of new list by following AddToImmediateList()/Color()/Highlight() calls.
  Standard_EXPORT   Standard_Boolean BeginImmediateDraw() ;
  
  //! Resets the transient list of presentations previously displayed in immediate mode.
  Standard_EXPORT virtual   void ClearImmediateDraw() ;
  
  //! Stores presentation theMode of object theObj in the transient list of presentations to be displayed in immediate mode.
  //! Will be taken in account in EndImmediateDraw method.
  Standard_EXPORT   Standard_Boolean ImmediateAdd (const Handle(AIS_InteractiveObject)& theObj, const Standard_Integer theMode = 0) ;
  
  //! Allows rapid drawing of the view theView by avoiding an update of the whole background.
  Standard_EXPORT   Standard_Boolean EndImmediateDraw (const Handle(V3d_View)& theView) ;
  
  //! Returns true if Presentation Manager is accumulating transient list of presentations to be displayed in immediate mode.
  Standard_EXPORT   Standard_Boolean IsImmediateModeOn()  const;
  
  Standard_EXPORT   void UpdateConversion() ;
  
  Standard_EXPORT   void UpdateSort() ;
  
  Standard_EXPORT   void LoadContextObjects() ;
  
  Standard_EXPORT   void UnloadContextObjects() ;
  
  Standard_EXPORT   void DisplayAreas (const Handle(V3d_View)& aviou) ;
  
  Standard_EXPORT   void ClearAreas (const Handle(V3d_View)& aView) ;
  
  Standard_EXPORT   void DisplaySensitive (const Handle(V3d_View)& aView) ;
  
  Standard_EXPORT   void ClearSensitive (const Handle(V3d_View)& aView) ;
  
     const  Handle(StdSelect_ViewerSelector3d)& MainSelector()  const;
  
  Standard_EXPORT   Handle(SelectMgr_EntityOwner) FindSelectedOwnerFromIO (const Handle(AIS_InteractiveObject)& anIObj)  const;
  
  Standard_EXPORT   Handle(SelectMgr_EntityOwner) FindSelectedOwnerFromShape (const TopoDS_Shape& aShape)  const;


friend   
  //! Changes the status of a temporary object. It will be
  //! kept at the neutral point, i.e. put in the list of
  //! displayed   objects along withwith   its temporary
  //! attributes. These include display mode and
  //! selection   mode, for example.
  //! Returns true if done.
  //! inWhichLocal gives the local context in which anIObj
  //! is displayed. By default, the index -1 refers to the last
  //! Local Context opened.
  Standard_EXPORT   Standard_Boolean AIS_InteractiveContext::KeepTemporary (const Handle(AIS_InteractiveObject)& anIObj, const Standard_Integer InWhichLocal) ;


  DEFINE_STANDARD_RTTI(AIS_LocalContext)

protected:




private: 

  
  Standard_EXPORT   TCollection_AsciiString Status()  const;
  
  Standard_EXPORT  const  Handle(AIS_LocalStatus)& Status (const Handle(AIS_InteractiveObject)& anObject)  const;
  
  Standard_EXPORT   void Process (const Handle(SelectMgr_SelectableObject)& anObject, const Standard_Boolean WithProj = Standard_True) ;
  
  Standard_EXPORT   void Process (const Standard_Boolean WithProj = Standard_True) ;
  
  Standard_EXPORT   void ActivateStandardModes (const Handle(SelectMgr_SelectableObject)& anObject, const Standard_Boolean WithProj = Standard_True) ;
  
  Standard_EXPORT   void manageDetected (const Handle(SelectMgr_EntityOwner)& thePickOwner, const Handle(V3d_View)& theView, const Standard_Boolean theToRedrawImmediate) ;
  
  //! returns 0  if the detected entity was Not FilterOK...
      Standard_Integer DetectedIndex() ;
  
  Standard_EXPORT   void Hilight (const Handle(SelectMgr_EntityOwner)& Own, const Handle(V3d_View)& aview) ;
  
  Standard_EXPORT   void Unhilight (const Handle(SelectMgr_EntityOwner)& Ownr, const Handle(V3d_View)& aview) ;
  
  Standard_EXPORT   void ClearObjects() ;
  
  Standard_EXPORT   void ClearDetected() ;
  
  Standard_EXPORT   Standard_Boolean IsDecompositionOn()  const;
  
  Standard_EXPORT   Standard_Boolean IsShape (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Standard_Boolean IsValidForSelection (const Handle(AIS_InteractiveObject)& anIObj)  const;
  
      Standard_Boolean IsValidIndex (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Standard_Boolean ComesFromDecomposition (const Standard_Integer aPickedIndex)  const;
  
  Standard_EXPORT   Standard_Boolean HasFilters (const TopAbs_ShapeEnum aType)  const;

  Handle(AIS_InteractiveContext) myCTX;
  Standard_Boolean myLoadDisplayed;
  Standard_Boolean myAcceptStdMode;
  Standard_Boolean myAcceptErase;
  Handle(SelectMgr_SelectionManager) mySM;
  Handle(StdSelect_ViewerSelector3d) myMainVS;
  Handle(PrsMgr_PresentationManager3d) myMainPM;
  TCollection_AsciiString mySelName;
  Handle(StdSelect_ViewerSelector3d) myCollVS;
  AIS_DataMapOfSelStat myActiveObjects;
  Handle(SelectMgr_OrFilter) myFilters;
  TColStd_ListOfInteger myListOfStandardMode;
  Handle(SelectMgr_Filter) myStdFilters[9];
  Standard_Boolean myAutoHilight;
  SelectMgr_IndexedMapOfOwner myMapOfOwner;
  Standard_Integer mylastindex;
  Standard_Integer mylastgood;
  Standard_Integer myCurrentOwner;
  TColStd_SequenceOfInteger myDetectedSeq;
  Standard_Integer myCurDetected;
  AIS_SequenceOfInteractive myAISDetectedSeq;
  Standard_Integer myAISCurDetected;


};


#include <Visualization/AIS/AIS_LocalContext.lxx>





#endif // _AIS_LocalContext_HeaderFile
