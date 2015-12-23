// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_View_HeaderFile
#define _Visual3d_View_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Visual3d_View.hxx>

#include <Visual3d_ViewManagerPtr.hxx>
#include <Visualization/Graphic3d/Graphic3d_CView.hxx>
#include <Visual3d_ContextView.hxx>
#include <Handle_Aspect_Window.hxx>
#include <Visualization/Graphic3d/Graphic3d_SequenceOfStructure.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Graphic3d_GraphicDriver.hxx>
#include <Visualization/Aspect/Aspect_Background.hxx>
#include <Visualization/Aspect/Aspect_GradientBackground.hxx>
#include <Visualization/Graphic3d/Graphic3d_MapOfStructure.hxx>
#include <Visualization/Graphic3d/Graphic3d_CGraduatedTrihedron.hxx>
#include <Visualization/Graphic3d/Graphic3d_Camera_Handle.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Visualization/Graphic3d/Graphic3d_DataStructureManager.hxx>
#include <Handle_Visual3d_ViewManager.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Visual3d_Layer.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Visualization/Aspect/Aspect_FillMethod.hxx>
#include <Visualization/Aspect/Aspect_GradientFillMethod.hxx>
#include <Visual3d_TypeOfBackfacingModel.hxx>
#include <Visualization/Aspect/Aspect_RenderingContext.hxx>
#include <Visualization/Aspect/Aspect_GraphicCallbackProc.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Visualization/Aspect/Aspect_TypeOfUpdate.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Visualization/Aspect/Aspect_TypeOfTriedronPosition.hxx>
#include <Visualization/Aspect/Aspect_TypeOfTriedronEcho.hxx>
#include <Visualization/Font/Font_FontAspect.hxx>
#include <Visual3d_TypeOfAnswer.hxx>
#include <Handle_Graphic3d_Structure.hxx>
#include <Visualization/Graphic3d/Graphic3d_ZLayerSettings.hxx>
#include <Visualization/Aspect/Aspect_TypeOfHighlightMethod.hxx>
#include <Visualization/Aspect/Aspect_Handle.hxx>
#include <Visualization/Aspect/Aspect_PrintAlgo.hxx>
#include <Visualization/Graphic3d/Graphic3d_PtrFrameBuffer.hxx>
#include <Visualization/Image/Image_PixMap.hxx>
#include <Visualization/Graphic3d/Graphic3d_BufferType.hxx>
#include <Visualization/Graphic3d/Graphic3d_ExportFormat.hxx>
#include <Visualization/Graphic3d/Graphic3d_SortType.hxx>
class Aspect_Window;
class Graphic3d_GraphicDriver;
class Visual3d_TransformError;
class Visual3d_ViewDefinitionError;
class Visual3d_ViewManager;
class Visual3d_Layer;
class Aspect_Background;
class Aspect_GradientBackground;
class Visual3d_ContextView;
class TCollection_ExtendedString;
class Quantity_Color;
class TCollection_AsciiString;
class Graphic3d_MapOfStructure;
class Bnd_Box;
class Graphic3d_Structure;
class TColStd_Array2OfReal;


//! Creation and edition of a view in a 3D visualiser.
//! A 3D view is composed of an "orientation" part defined
//! by the position of the observer, the direction of view,
//! and a "mapping" part defined by the type of projection
//! (parallel or perspective) and by the window-viewport
//! couple which allows passage from the projected coordinate
//! space into the screen space.
//! Summary of 3D Viewing
//! To define a view, you must define:
//! -   The view orientation transformation
//! -   The view mapping transformation
//! -   The view representation.
//! To activate a view, you must define:
//! -   The associated window.
class Visual3d_View : public Graphic3d_DataStructureManager
{

public:

  
  //! Creates a view in the viewer <AManager> with a default
  //! orientation and a default mapping.
  Standard_EXPORT Visual3d_View(const Handle(Visual3d_ViewManager)& AManager);
  
  //! Activates the view <me>.
  //! Map the associated window on the screen and
  //! post the view in this window.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void Activate() ;
  
  //! Deactivates the view <me>.
  //! Unmap the associated window on the screen and
  //! unpost the view in this window.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void Deactivate() ;
  
  //! Deletes and erases the view <me>.
  Standard_EXPORT virtual   void Destroy() ;
~Visual3d_View()
{
  Destroy();
}
  
  //! Updates screen in all cases.
  Standard_EXPORT   void Redraw() ;
  
  //! Updates layer of immediate presentations.
  Standard_EXPORT   void RedrawImmediate() ;
  
  //! Updates screen area in all cases.
  //! area is given by his xy min corner and size in pixel coordinates
  Standard_EXPORT   void Redraw (const Standard_Integer x, const Standard_Integer y, const Standard_Integer width, const Standard_Integer height) ;
  
  //! Updates screen in all cases.
  Standard_EXPORT   void Redraw (const Handle(Visual3d_Layer)& AnUnderLayer, const Handle(Visual3d_Layer)& AnOverLayer) ;
  
  //! Updates layer of immediate presentations.
  Standard_EXPORT   void RedrawImmediate (const Handle(Visual3d_Layer)& theUnderLayer, const Handle(Visual3d_Layer)& theOverLayer) ;
  
  //! Invalidates view content but does not redraw it.
  Standard_EXPORT   void Invalidate() ;
  
  //! Updates screen area in all cases.
  //! area is given by his xy min corner and size in pixel coordinates
  Standard_EXPORT   void Redraw (const Handle(Visual3d_Layer)& AnUnderLayer, const Handle(Visual3d_Layer)& AnOverLayer, const Standard_Integer x, const Standard_Integer y, const Standard_Integer width, const Standard_Integer height) ;
  
  //! Deletes and erases the view <me>.
  //! Warning: No more graphic operations in <me> after this call.
  Standard_EXPORT   void Remove() ;
  
  //! Updates the view <me> after the modification
  //! of the associated window.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void Resized() ;
  
  //! Modifies the default window background.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void SetBackground (const Aspect_Background& ABack) ;
  

  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void SetBackgroundImage (const Standard_CString FileName, const Aspect_FillMethod FillStyle, const Standard_Boolean update) ;
  

  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void SetBgImageStyle (const Aspect_FillMethod FillStyle, const Standard_Boolean update) ;
  
  //! Modifies the gradient window background.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void SetGradientBackground (const Aspect_GradientBackground& ABack, const Standard_Boolean update) ;
  

  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   void SetBgGradientStyle (const Aspect_GradientFillMethod FillStyle, const Standard_Boolean update) ;
  
  //! Manages display of the back faces
  Standard_EXPORT   void SetBackFacingModel (const Visual3d_TypeOfBackfacingModel aModel) ;
  
  //! Returns current state of the back faces display
  Standard_EXPORT   Visual3d_TypeOfBackfacingModel BackFacingModel()  const;
  
  //! Sets the context <CTX> in the view <me>.
  Standard_EXPORT   void SetContext (const Visual3d_ContextView& CTX) ;
  
  //! Saves the current mapping which will be the
  //! reference value for the reset of the mapping
  //! done by the ViewmappingReset method.
  Standard_EXPORT   void SetViewMappingDefault() ;
  
  //! Saves the current orientation which will be the
  //! reference value for the reset of the orientation
  //! done by the ViewOrientationReset method.
  Standard_EXPORT   void SetViewOrientationDefault() ;
  
  //! Associates the window <AWindow> to the view <me>.
  //! No new association if the window is already defined.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if it is impossible
  //! to associate a view and a window.
  //! (association already done or another problem)
  //! Modifies the viewmapping of the associated view
  //! when it calls the SetRatio method.
  //!
  //! After this call, each view is mapped in an unique window.
  //!
  //! Programming example :
  //!
  //! An example when we have 1 view and 1 window
  //! -------------------------------------------
  //!
  //! Handle(Aspect_DisplayConnection) aDisplayConnection;
  //!
  //! // Display connection initialization only needed on Linux platform
  //! // and on Mac OS X, in cases when you use Xlib for windows drawing.
  //! aDisplayConnection = new Aspect_DisplayConnection();
  //!
  //! // Graphic driver initialization
  //! Handle(Graphic3d_GraphicDriver) aGraphicDriver =
  //! Graphic3d::InitGraphicDriver (aDisplayConnection);
  //!
  //! // Define a view manager
  //! Handle(Visual3d_ViewManager) aVisualManager = new Visual3d_ViewManager (aGraphicDriver);
  //!
  //! // Define a view
  //! Handle(Visual3d_View) aView = new Visual3d_View (aVisaulManager);
  //!
  //! // Define a window
  //! Handle(Xw_Window) aWindow = new Xw_Window
  //! (aDisplayConnection, "Graphic View 1", 0.695, 0.695, 0.600, 0.600, Quantity_NOC_MATRAGRAY);
  //!
  //! // Associate the view and the window
  //! aView->SetWindow (aWindow);
  //!
  //! // Map the window
  //! aWindow->Map ();
  //!
  //! // Activate the view
  //! aView->Activate ();
  Standard_EXPORT   void SetWindow (const Handle(Aspect_Window)& AWindow) ;
  
  //! Associates the window <AWindow> and context <AContext>
  //! to the view <me>.
  //! If <AContext> is not NULL the graphic context is used
  //! directly to draw something in this view.
  //! Otherwise an internal context is created.
  //! If <ADisplayCB> is not NULL then a user display CB is
  //! call at the end of the OCC graphic traversal and just
  //! before the swap of buffers. The <aClientData> is pass
  //! to this call back.
  //! No new association if the window is already defined.
  //! Category: Methods to modify the class definition
  //! Warning: Raises ViewDefinitionError if it is impossible
  //! to associate a view and a window.
  //! (association already done or another problem)
  //! Modifies the viewmapping of the associated view
  //! when it calls the SetRatio method.
  //!
  //! After this call, each view is mapped in an unique window.
  Standard_EXPORT   void SetWindow (const Handle(Aspect_Window)& AWindow, const Aspect_RenderingContext AContext, const Aspect_GraphicCallbackProc& ADisplayCB, const Standard_Address AClientData) ;
  
  //! Updates screen in function of modifications of
  //! the structures.
  Standard_EXPORT   void Update (const Aspect_TypeOfUpdate theUpdateMode) ;
  
  //! Updates screen in function of modifications of
  //! the structures.
  Standard_EXPORT   void Update (const Handle(Visual3d_Layer)& AnUnderLayer, const Handle(Visual3d_Layer)& AnOverLayer) ;
  
  //! Sets the automatic z-fit mode and its parameters.
  //! The auto z-fit has extra parameters which can controlled from application level
  //! to ensure that the size of viewing volume will be sufficiently large to cover
  //! the depth of unmanaged objects, for example, transformation persistent ones.
  //! @param theScaleFactor [in] the scale factor for Z-range.
  //! The range between Z-min, Z-max projection volume planes
  //! evaluated by z fitting method will be scaled using this coefficient.
  //! Program error exception is thrown if negative or zero value
  //! is passed.
  Standard_EXPORT   void SetAutoZFitMode (const Standard_Boolean theIsOn, const Standard_Real theScaleFactor = 1.0) ;
  
  //! returns TRUE if automatic z-fit mode is turned on.
  Standard_EXPORT   Standard_Boolean AutoZFitMode()  const;
  
  //! returns scale factor parameter of automatic z-fit mode.
  Standard_EXPORT   Standard_Real AutoZFitScaleFactor()  const;
  
  //! If automatic z-range fitting is turned on, adjusts Z-min and Z-max
  //! projection volume planes with call to ZFitAll.
  Standard_EXPORT   void AutoZFit() ;
  
  //! Change Z-min and Z-max planes of projection volume to match the
  //! displayed objects.
  Standard_EXPORT   void ZFitAll (const Standard_Real theScaleFactor = 1.0) ;
  
  //! Sets the value of the mapping to be the same as
  //! the mapping saved by the SetViewMappingDefaut method.
  Standard_EXPORT   void ViewMappingReset() ;
  
  //! Sets the value of the orientation to be the same as the
  //! orientation saved by the SetViewOrientationDefaut method.
  Standard_EXPORT   void ViewOrientationReset() ;
  
  //! Switches computed HLR mode in the view
  Standard_EXPORT   void SetComputedMode (const Standard_Boolean aMode) ;
  
  //! Returns the computed HLR mode state
  Standard_EXPORT   Standard_Boolean ComputedMode()  const;
  
  //! Customization of the ZBUFFER Triedron.
  //! Initializes Colors of X Y and axis
  //! Scale ratio defines decreasing of trihedron size when
  //! its position is out of a View
  Standard_EXPORT   void ZBufferTriedronSetup (const Quantity_NameOfColor XColor = Quantity_NOC_RED, const Quantity_NameOfColor YColor = Quantity_NOC_GREEN, const Quantity_NameOfColor ZColor = Quantity_NOC_BLUE1, const Standard_Real SizeRatio = 0.8, const Standard_Real AxisDiametr = 0.05, const Standard_Integer NbFacettes = 12) ;
  
  //! Display of the Triedron.
  //! Initialize position, color and length of Triedron axes.
  //! The scale is a percent of the window width.
  //! If AsWireframe is FALSE triedron is shown in shaded mode
  //! AColor is not considered for ZBUFFER mode
  Standard_EXPORT   void TriedronDisplay (const Aspect_TypeOfTriedronPosition APosition = Aspect_TOTP_CENTER, const Quantity_NameOfColor AColor = Quantity_NOC_WHITE, const Standard_Real AScale = 0.02, const Standard_Boolean AsWireframe = Standard_True) ;
  
  //! Erases the Triedron.
  Standard_EXPORT   void TriedronErase() ;
  
  //! Highlights the echo zone of the Triedron.
  Standard_EXPORT   void TriedronEcho (const Aspect_TypeOfTriedronEcho AType = Aspect_TOTE_NONE) ;
  
  //! Returns data of a graduated trihedron if displayed (return value is True)
  Standard_EXPORT   Standard_Boolean GetGraduatedTrihedron (TCollection_ExtendedString& xname, TCollection_ExtendedString& yname, TCollection_ExtendedString& zname, Standard_Boolean& xdrawname, Standard_Boolean& ydrawname, Standard_Boolean& zdrawname, Standard_Boolean& xdrawvalues, Standard_Boolean& ydrawvalues, Standard_Boolean& zdrawvalues, Standard_Boolean& drawgrid, Standard_Boolean& drawaxes, Standard_Integer& nbx, Standard_Integer& nby, Standard_Integer& nbz, Standard_Integer& xoffset, Standard_Integer& yoffset, Standard_Integer& zoffset, Standard_Integer& xaxisoffset, Standard_Integer& yaxisoffset, Standard_Integer& zaxisoffset, Standard_Boolean& xdrawtickmarks, Standard_Boolean& ydrawtickmarks, Standard_Boolean& zdrawtickmarks, Standard_Integer& xtickmarklength, Standard_Integer& ytickmarklength, Standard_Integer& ztickmarklength, Quantity_Color& gridcolor, Quantity_Color& xnamecolor, Quantity_Color& ynamecolor, Quantity_Color& znamecolor, Quantity_Color& xcolor, Quantity_Color& ycolor, Quantity_Color& zcolor, TCollection_AsciiString& fontOfNames, Font_FontAspect& styleOfNames, Standard_Integer& sizeOfNames, TCollection_AsciiString& fontOfValues, Font_FontAspect& styleOfValues, Standard_Integer& sizeOfValues)  const;
  
  //! Displays a graduated trihedron.
  Standard_EXPORT   void GraduatedTrihedronDisplay (const TCollection_ExtendedString& xname, const TCollection_ExtendedString& yname, const TCollection_ExtendedString& zname, const Standard_Boolean xdrawname, const Standard_Boolean ydrawname, const Standard_Boolean zdrawname, const Standard_Boolean xdrawvalues, const Standard_Boolean ydrawvalues, const Standard_Boolean zdrawvalues, const Standard_Boolean drawgrid, const Standard_Boolean drawaxes, const Standard_Integer nbx, const Standard_Integer nby, const Standard_Integer nbz, const Standard_Integer xoffset, const Standard_Integer yoffset, const Standard_Integer zoffset, const Standard_Integer xaxisoffset, const Standard_Integer yaxisoffset, const Standard_Integer zaxisoffset, const Standard_Boolean xdrawtickmarks, const Standard_Boolean ydrawtickmarks, const Standard_Boolean zdrawtickmarks, const Standard_Integer xtickmarklength, const Standard_Integer ytickmarklength, const Standard_Integer ztickmarklength, const Quantity_Color& gridcolor, const Quantity_Color& xnamecolor, const Quantity_Color& ynamecolor, const Quantity_Color& znamecolor, const Quantity_Color& xcolor, const Quantity_Color& ycolor, const Quantity_Color& zcolor, const TCollection_AsciiString& fontOfNames, const Font_FontAspect styleOfNames, const Standard_Integer sizeOfNames, const TCollection_AsciiString& fontOfValues, const Font_FontAspect styleOfValues, const Standard_Integer sizeOfValues) ;
  
  //! Erases a graduated trihedron from the view.
  Standard_EXPORT   void GraduatedTrihedronErase() ;
  
  //! Returns the value of the default window background.
  Standard_EXPORT   Aspect_Background Background()  const;
  
  //! Returns the value of the window background.
  Standard_EXPORT   Aspect_GradientBackground GradientBackground()  const;
  
  //! Returns Standard_True if one of the structures
  //! displayed in the view <me> contains Polygons,
  //! Triangles or Quadrangles.
  Standard_EXPORT   Standard_Boolean ContainsFacet()  const;
  
  //! Returns Standard_True if one of the structures
  //! in the set <ASet> contains Polygons, Triangles
  //! or Quadrangles.
  Standard_EXPORT   Standard_Boolean ContainsFacet (const Graphic3d_MapOfStructure& ASet)  const;
  
  //! Returns the current context of the view <me>.
  Standard_EXPORT  const  Visual3d_ContextView& Context()  const;
  
  //! Returns the set of structures displayed in
  //! the view <me>.
  Standard_EXPORT   void DisplayedStructures (Graphic3d_MapOfStructure& SG)  const;
  
  //! Returns the activity flag of the view <me>.
  Standard_EXPORT   Standard_Boolean IsActive()  const;
  
  //! Returns True if the window associated to the view
  //! <me> is defined.
  Standard_EXPORT   Standard_Boolean IsDefined()  const;
  
  //! Returns Standard_True is the view <me> is deleted.
  //! <me> is deleted after the call Remove (me).
  Standard_EXPORT   Standard_Boolean IsDeleted()  const;
  
  //! Returns the coordinates of the boundary box of all
  //! structures displayed in the view <me>.
  //! If <theToIgnoreInfiniteFlag> is TRUE, then the boundary box
  //! also includes minimum and maximum limits of graphical elements
  //! forming parts of infinite structures.
  Standard_EXPORT   Bnd_Box MinMaxValues (const Standard_Boolean theToIgnoreInfiniteFlag = Standard_False)  const;
  
  //! Returns the coordinates of the boundary box of all
  //! structures in the set <theSet>.
  //! If <theToIgnoreInfiniteFlag> is TRUE, then the boundary box
  //! also includes minimum and maximum limits of graphical elements
  //! forming parts of infinite structures.
  Standard_EXPORT   Bnd_Box MinMaxValues (const Graphic3d_MapOfStructure& theSet, const Standard_Boolean theToIgnoreInfiniteFlag = Standard_False)  const;
  
  //! Returns number of displayed structures in
  //! the view <me>.
  Standard_EXPORT   Standard_Integer NumberOfDisplayedStructures()  const;
  
  //! Returns the coordinates of the projection of the
  //! 3d coordinates <AX>, <AY>, <AZ>.
  Standard_EXPORT   void Projects (const Standard_Real AX, const Standard_Real AY, const Standard_Real AZ, Standard_Real& APX, Standard_Real& APY, Standard_Real& APZ)  const;
  
  //! @return the default camera of <me>.
  Standard_EXPORT  const  Graphic3d_Camera_Handle& DefaultCamera()  const;
  
  //! @return the camera of <me>.
  Standard_EXPORT  const  Graphic3d_Camera_Handle& Camera()  const;
  
  //! Set camera object to provide orientation and projection matrices
  //! for graphic driver.
  Standard_EXPORT   void SetCamera (const Graphic3d_Camera_Handle& theCamera) ;
  
  //! Returns the window associated to the view <me>.
  //! Warning: Raises ViewDefinitionError if the associated
  //! window isn't defined.
  Standard_EXPORT   Handle(Aspect_Window) Window()  const;
  
  //! Returns the MAX number of light associated to the view <me>.
  Standard_EXPORT   Standard_Integer LightLimit()  const;
  
  //! Returns the MAX number of clipping planes
  //! associated to the view <me>.
  Standard_EXPORT   Standard_Integer PlaneLimit()  const;
  
  //! Returns the view manager handle which manage this view
  Standard_EXPORT   Handle(Visual3d_ViewManager) ViewManager()  const;
  
  //! Computes the new presentation of the
  //! structure <AStructure> displayed in <me>
  //! with the type Graphic3d_TOS_COMPUTED.
  Standard_EXPORT   void ReCompute (const Handle(Graphic3d_Structure)& AStructure) ;
  
  //! Add structure to the list of immediate presentations.
  //! @return true if structure has not been registered in this view
  Standard_EXPORT   Standard_Boolean DisplayImmediate (const Handle(Graphic3d_Structure)& theStructure, const Standard_Boolean theIsSingleView = Standard_True) ;
  
  //! Removes the structure from the list of immediate presentations.
  //! @return true if structure has been registered in view
  Standard_EXPORT   Standard_Boolean EraseImmediate (const Handle(Graphic3d_Structure)& theStructure) ;
  
  //! Clears list of immediate presentations.
  //! @return true if list was not empty
  Standard_EXPORT   Standard_Boolean ClearImmediate() ;
  
  //! Returns the identification number of the view <me>.
  Standard_EXPORT   Standard_Integer Identification()  const;
  
  //! Returns the c structure associated to <me>.
  Standard_EXPORT   Standard_Address CView()  const;
  
  //! Returns the associated GraphicDriver.
  Standard_EXPORT  const  Handle(Graphic3d_GraphicDriver)& GraphicDriver()  const;
  
  //! print the contents of all layers of the view to the printer.
  //! <hPrnDC> : Pass the PrinterDeviceContext (HDC),
  //! <showBackground> : When set to FALSE then print the view without background color
  //! (background is white)
  //! else set to TRUE for printing with current background color.
  //! <filename>: If != NULL, then the view will be printed to a file.
  //! <printAlgo>: Select print algorithm: stretch, tile.
  //! <theScaleFactor>: Scaling coefficient, used internally to scale the
  //! printings accordingly to the scale factor selected in the printer
  //! properties dialog.
  //! Returns Standard_True if the data is passed to the printer, otherwise
  //! Standard_False if the print operation failed due to printer error
  //! or insufficient memory.
  //! Warning: Works only under Windows.
  Standard_EXPORT   Standard_Boolean Print (const Handle(Visual3d_Layer)& AnUnderLayer, const Handle(Visual3d_Layer)& AnOverLayer, const Aspect_Handle hPrnDC, const Standard_Boolean showBackground, const Standard_CString filename, const Aspect_PrintAlgo printAlgorithm = Aspect_PA_STRETCH, const Standard_Real theScaleFactor = 1.0)  const;
  
  //! print the contents of the view to printer.
  //! <hPrnDC> : Pass the PrinterDeviceContext (HDC),
  //! <showBackground> : When set to FALSE then print the view without background color
  //! (background is white)
  //! else set to TRUE for printing with current background color.
  //! <filename>: If != NULL, then the view will be printed to a file.
  //! <printAlgo>: Select print algorithm: stretch, tile.
  //! <theScaleFactor>: Scaling coefficient, used internally to scale the
  //! printings accordingly to the scale factor selected in the printer
  //! properties dialog.
  //! Returns Standard_True if the data is passed to the printer, otherwise
  //! Standard_False if the print operation failed due to printer error
  //! or insufficient memory.
  //! Warning: Works only under Windows.
  Standard_EXPORT   Standard_Boolean Print (const Aspect_Handle hPrnDC, const Standard_Boolean showBackground, const Standard_CString filename, const Aspect_PrintAlgo printAlgorithm = Aspect_PA_STRETCH, const Standard_Real theScaleFactor = 1.0)  const;
  
  //! if <AFlag> is Standard_True then the transparency
  //! is managed in the view <me>.
  //! Default Standard_False
  Standard_EXPORT   void SetTransparency (const Standard_Boolean AFlag) ;
  
  //! Returns Standard_True if the ZBuffer is activated
  //! in the view <me> and Standard_False if not.
  Standard_EXPORT   Standard_Boolean ZBufferIsActivated()  const;
  
  //! Activates the ZBuffer if the integer <AnActivity>
  //! is equal to 1.
  //! Deactivates the ZBuffer if the integer <AnActivity>
  //! is equal to 0.
  //! If the integer <AnActivity> is equal to -1 then
  //! - the ZBuffer is activated if
  //! me->Context ().Visualization () == Visual3d_TOV_SHADING
  //! - the ZBuffer is deactivated if
  //! me->Context ().Visualization () == Visual3d_TOV_WIREFRAME
  Standard_EXPORT   void SetZBufferActivity (const Standard_Integer AnActivity) ;
  
  //! Returns the underlay of the view <me>.
  Standard_EXPORT  const  Handle(Visual3d_Layer)& UnderLayer()  const;
  
  //! Returns the underlay of the view <me>.
  Standard_EXPORT  const  Handle(Visual3d_Layer)& OverLayer()  const;
  
  //! turns on/off opengl depth
  Standard_EXPORT   void EnableDepthTest (const Standard_Boolean enable)  const;
  
  //! returns current state of the opengl depth testing
  Standard_EXPORT   Standard_Boolean IsDepthTestEnabled()  const;
  
  //! Reads depths of shown pixels of the given rectangle
  Standard_EXPORT   void ReadDepths (const Standard_Integer x, const Standard_Integer y, const Standard_Integer width, const Standard_Integer height, const Standard_Address buffer)  const;
  
  //! Generate offscreen FBO in the graphic library
  Standard_EXPORT   Graphic3d_PtrFrameBuffer FBOCreate (const Standard_Integer width, const Standard_Integer height) ;
  
  //! Remove offscreen FBO from the graphic library
  Standard_EXPORT   void FBORelease (Graphic3d_PtrFrameBuffer& fboPtr) ;
  
  //! Read offscreen FBO configuration.
  Standard_EXPORT   void FBOGetDimensions (const Graphic3d_PtrFrameBuffer fboPtr, Standard_Integer& width, Standard_Integer& height, Standard_Integer& widthMax, Standard_Integer& heightMax) ;
  
  //! Change offscreen FBO viewport.
  Standard_EXPORT   void FBOChangeViewport (Graphic3d_PtrFrameBuffer& fboPtr, const Standard_Integer width, const Standard_Integer height) ;
  
  //! Dump active rendering buffer into specified memory buffer.
  Standard_EXPORT   Standard_Boolean BufferDump (Image_PixMap& theImage, const Graphic3d_BufferType& theBufferType) ;
  
  //! turns on/off opengl lighting, currently used in triedron displaying
  Standard_EXPORT   void EnableGLLight (const Standard_Boolean enable)  const;
  
  //! returns the current state of the gl lighting
  //! currently used in triedron displaying
  Standard_EXPORT   Standard_Boolean IsGLLightEnabled()  const;
  

  //! Export scene into the one of the Vector graphics formats (SVG, PS, PDF...).
  //! In contrast to Bitmaps, Vector graphics is scalable (so you may got quality benefits on printing to laser printer).
  //! Notice however that results may differ a lot and do not contain some elements.
  Standard_EXPORT   Standard_Boolean Export (const Standard_CString theFileName, const Graphic3d_ExportFormat theFormat, const Graphic3d_SortType theSortType = Graphic3d_ST_BSP_Tree, const Standard_Real thePrecision = 0.005, const Standard_Address theProgressBarFunc = NULL, const Standard_Address theProgressObject = NULL)  const;

friend class Visual3d_ViewManager;


  DEFINE_STANDARD_RTTI(Visual3d_View)

protected:




private: 

  
  //! Is it possible to display the structure
  //! <AStructure> in the view <me> ?
  Standard_EXPORT   Visual3d_TypeOfAnswer AcceptDisplay (const Handle(Graphic3d_Structure)& AStructure)  const;
  
  //! Computes the new presentation of the
  //! Structures displayed in <me> with the type
  //! Graphic3d_TOS_COMPUTED.
  Standard_EXPORT   void Compute() ;
  
  //! Changes the display priority of the structure <AStructure>.
  Standard_EXPORT   void ChangeDisplayPriority (const Handle(Graphic3d_Structure)& AStructure, const Standard_Integer OldPriority, const Standard_Integer NewPriority) ;
  
  //! Sets the settings for a single Z layer of specified view.
  Standard_EXPORT   void SetZLayerSettings (const Standard_Integer theLayerId, const Graphic3d_ZLayerSettings& theSettings) ;
  
  //! Add a new top-level Z layer to the view with ID
  //! <theLayerId>. The z layer mechanism allows to display
  //! structures in higher layers in overlay of structures in lower layers.
  //! The layers in a particular view should be managed centrally
  //! by its view manager so to avoid IDs mismatching and provide correct
  //! display of graphics in all views.
  Standard_EXPORT   void AddZLayer (const Standard_Integer theLayerId) ;
  
  //! Remove z layer from the view by its ID.
  Standard_EXPORT   void RemoveZLayer (const Standard_Integer theLayerId) ;
  
  //! Change Z layer of already displayed structure in the view.
  Standard_EXPORT   void ChangeZLayer (const Handle(Graphic3d_Structure)& theStructure, const Standard_Integer theLayerId) ;
  
  //! Clears the structure <AStructure> to the view <me>.
  Standard_EXPORT   void Clear (const Handle(Graphic3d_Structure)& AStructure, const Standard_Boolean WithDestruction) ;
  
  //! Connects the structures <AMother> and <ADaughter>.
  Standard_EXPORT   void Connect (const Handle(Graphic3d_Structure)& AMother, const Handle(Graphic3d_Structure)& ADaughter) ;
  
  //! Disconnects the structures <AMother> and <ADaughter>.
  Standard_EXPORT   void Disconnect (const Handle(Graphic3d_Structure)& AMother, const Handle(Graphic3d_Structure)& ADaughter) ;
  
  //! Display the structure <AStructure> to the view <me>.
  Standard_EXPORT   void Display (const Handle(Graphic3d_Structure)& AStructure) ;
  
  //! Display the structure <AStructure> to the view <me>.
  Standard_EXPORT   void Display (const Handle(Graphic3d_Structure)& AStructure, const Aspect_TypeOfUpdate AnUpdateMode) ;
  
  //! Erases the structure <AStructure> from the view <me>.
  Standard_EXPORT   void Erase (const Handle(Graphic3d_Structure)& AStructure) ;
  
  //! Erases the structure <AStructure> from the view <me>.
  Standard_EXPORT   void Erase (const Handle(Graphic3d_Structure)& AStructure, const Aspect_TypeOfUpdate AnUpdateMode) ;
  
  //! Highlights the structure <AStructure> in the view <me>.
  Standard_EXPORT   void Highlight (const Handle(Graphic3d_Structure)& AStructure, const Aspect_TypeOfHighlightMethod AMethod) ;
  
  //! Transforms the structure <AStructure> in the view <me>.
  Standard_EXPORT   void SetTransform (const Handle(Graphic3d_Structure)& AStructure, const TColStd_Array2OfReal& ATrsf) ;
  
  //! Suppress the highlighting on the structure <AStructure>
  //! in the view <me>.
  Standard_EXPORT   void UnHighlight (const Handle(Graphic3d_Structure)& AStructure) ;
  
  //! Returns an index != 0 if the structure <AStructure>
  //! have another structure computed for the view <me>.
  Standard_EXPORT   Standard_Integer IsComputed (const Handle(Graphic3d_Structure)& AStructure)  const;
  
  //! Returns true if the structure <AStructure> is
  //! displayed in the view <me>.
  Standard_EXPORT   Standard_Boolean IsDisplayed (const Handle(Graphic3d_Structure)& AStructure)  const;
  
  //! Modifies the aspect ratio of the view <me> when the
  //! associated window is defined or resized.
  Standard_EXPORT   void SetRatio() ;
  
  //! Updates the lights when the associated window is defined
  //! and when the view is activated.
  Standard_EXPORT   void UpdateLights() ;
  
  //! Updates the planes when the associated window is defined
  //! and when the view is activated.
  Standard_EXPORT   void UpdatePlanes() ;
  
  //! Updates the associated c structure before a call to the
  //! graphic library.
  Standard_EXPORT   void UpdateView() ;
  
  //! Returns an index != 0 if the structure <AStructure>
  //! have the same owner than another structure in the
  //! sequence of the computed structures.
  Standard_EXPORT   Standard_Integer HaveTheSameOwner (const Handle(Graphic3d_Structure)& AStructure)  const;

  Visual3d_ViewManagerPtr myViewManager;
  Graphic3d_CView MyCView;
  Visual3d_ContextView MyContext;
  Handle(Aspect_Window) MyWindow;
  Graphic3d_SequenceOfStructure myStructsToCompute;
  Graphic3d_SequenceOfStructure myStructsComputed;
  Standard_Boolean myIsInComputedMode;
  Handle(Graphic3d_GraphicDriver) myGraphicDriver;
  Aspect_Background MyBackground;
  Aspect_GradientBackground MyGradientBackground;
  Graphic3d_MapOfStructure myStructsDisplayed;
  Graphic3d_MapOfStructure myImmediateStructures;
  Graphic3d_CGraduatedTrihedron MyGTrihedron;
  Graphic3d_Camera_Handle myDefaultCamera;
  Standard_Boolean myAutoZFitIsOn;
  Standard_Real myAutoZFitScaleFactor;
  Standard_Boolean myStructuresUpdated;


};







#endif // _Visual3d_View_HeaderFile
