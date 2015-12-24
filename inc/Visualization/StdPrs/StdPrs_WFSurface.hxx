// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_WFSurface_HeaderFile
#define _StdPrs_WFSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Visualization/Prs3d/Prs3d_Root.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Presentation.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Drawer.hxx>
class Prs3d_Presentation;
class Adaptor3d_HSurface;
class Prs3d_Drawer;


//! Computes the wireframe presentation of surfaces
//! by displaying a given number of U and/or V isoparametric
//! curves. The isoparametric curves are drawn with respect
//! to a given number of points.
class StdPrs_WFSurface  : public Prs3d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Draws a surface by drawing the isoparametric curves with respect to
  //! a fixed number of points given by the Drawer.
  //! The number of isoparametric curves to be drawn and their color are
  //! controlled by the furnished Drawer.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Adaptor3d_HSurface)& aSurface, const Handle(Prs3d_Drawer)& aDrawer) ;




protected:





private:





};







#endif // _StdPrs_WFSurface_HeaderFile
