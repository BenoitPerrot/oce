// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDataStd_DrawDriver_HeaderFile
#define _DDataStd_DrawDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Viewer/DDataStd/Handle_DDataStd_DrawDriver.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Viewer/Draw/Handle_Draw_Drawable3D.hxx>
#include <OCAF/TDataXtd/Handle_TDataXtd_Constraint.hxx>
#include <Viewer/Draw/Draw_ColorKind.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Draw_Drawable3D;
class TDF_Label;
class TDataXtd_Constraint;
class TopoDS_Shape;


//! Root class of drivers to build draw variables from TDF_Label.
//! Priority rule to display standard attributes is :
//! * 1 Constraint
//! * 2 Object
//! * 3 Datum      (Point,Axis,Plane)
//! * 4 Geometry
//! * 5 NamedShape
class DDataStd_DrawDriver : public MMgt_TShared
{

public:

  
  //! access to the current DrawDriver
  //! ================================
  Standard_EXPORT static   void Set (const Handle(DDataStd_DrawDriver)& DD) ;
  
  Standard_EXPORT static   Handle(DDataStd_DrawDriver) Get() ;
  
  //! next method is called by DrawPresentation (may be redefined)
  //! ============================================================
  Standard_EXPORT DDataStd_DrawDriver();
  
  //! reusable methods (may used when redefined <Drawable>)
  //! =====================================================
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Drawable (const TDF_Label& L)  const;
  
  Standard_EXPORT   Handle(Draw_Drawable3D) DrawableConstraint (const Handle(TDataXtd_Constraint)& C)  const;
  
  Standard_EXPORT   Handle(Draw_Drawable3D) DrawableShape (const TDF_Label& L, const Draw_ColorKind color, const Standard_Boolean current = Standard_True)  const;
  
  //! May be used for temporary display of a shape
  Standard_EXPORT static   Handle(Draw_Drawable3D) DrawableShape (const TopoDS_Shape& s, const Draw_ColorKind color) ;




  DEFINE_STANDARD_RTTI(DDataStd_DrawDriver)

protected:




private: 




};







#endif // _DDataStd_DrawDriver_HeaderFile
