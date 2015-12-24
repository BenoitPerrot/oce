// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_ShadedShape_HeaderFile
#define _StdPrs_ShadedShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Visualization/Prs3d/Prs3d_Root.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Presentation.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Drawer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Prs3d_Presentation;
class TopoDS_Shape;
class Prs3d_Drawer;
class gp_Pnt2d;


//! Auxiliary procedures to prepare Shaded presentation of specified shape.
class StdPrs_ShadedShape  : public Prs3d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Shades <theShape>.
  //! @param theToExploreSolids when set to true, explodes compound into two groups - with closed Solids and open Shells
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& thePresentation, const TopoDS_Shape& theShape, const Handle(Prs3d_Drawer)& theDrawer, const Standard_Boolean theToExploreSolids = Standard_True) ;
  
  //! Shades <theShape> with texture coordinates.
  //! @param theToExploreSolids when set to true, explodes compound into two groups - with closed Solids and open Shells
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& thePresentation, const TopoDS_Shape& theShape, const Handle(Prs3d_Drawer)& theDrawer, const Standard_Boolean theHasTexels, const gp_Pnt2d& theUVOrigin, const gp_Pnt2d& theUVRepeat, const gp_Pnt2d& theUVScale, const Standard_Boolean theToExploreSolids = Standard_True) ;
  
  //! Validates triangulation within the shape and performs tessellation if necessary.
  Standard_EXPORT static   void Tessellate (const TopoDS_Shape& theShape, const Handle(Prs3d_Drawer)& theDrawer) ;




protected:





private:





};







#endif // _StdPrs_ShadedShape_HeaderFile
