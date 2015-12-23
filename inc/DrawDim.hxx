// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_HeaderFile
#define _DrawDim_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_CString.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TopoDS_Shape;
class gp_Pnt;
class TopoDS_Edge;
class gp_Lin;
class gp_Circ;
class TopoDS_Face;
class gp_Pln;
class DrawDim_Dimension;
class DrawDim_Angle;
class DrawDim_Distance;
class DrawDim_Radius;
class DrawDim_PlanarDimension;
class DrawDim_PlanarAngle;
class DrawDim_PlanarDistance;
class DrawDim_PlanarRadius;
class DrawDim_PlanarDiameter;


//! This package provides Drawable Dimensions.
//!
//! The classes PlanarDimension and subclasses provide
//! services  to  build  drawable dimensions between
//! point line and circle in a given 3d plane.
//!
//! The   classes  Dimension and   subclasses provide
//! services  to build  drawable  dimensions between
//! plane and cylindrical surfaces.
class DrawDim 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Commands
  //! ========
  Standard_EXPORT static   void DrawShapeName (const TopoDS_Shape& ashape, const Standard_CString aname) ;
  
  Standard_EXPORT static   void AllCommands (Draw_Interpretor& I) ;
  
  //! tools
  //! =====
  Standard_EXPORT static   void PlanarDimensionCommands (Draw_Interpretor& I) ;
  
  Standard_EXPORT static   gp_Pnt Nearest (const TopoDS_Shape& aShape, const gp_Pnt& apoint) ;
  
  //! false if <e> is not a linear edge
  Standard_EXPORT static   Standard_Boolean Lin (const TopoDS_Edge& e, gp_Lin& l, Standard_Boolean& infinite, Standard_Real& first, Standard_Real& last) ;
  
  //! false if <e> is not a circular edge
  Standard_EXPORT static   Standard_Boolean Circ (const TopoDS_Edge& e, gp_Circ& l, Standard_Real& first, Standard_Real& last) ;
  
  //! false if <f> is not a planar face
  Standard_EXPORT static   Standard_Boolean Pln (const TopoDS_Face& f, gp_Pln& p) ;




protected:





private:




friend class DrawDim_Dimension;
friend class DrawDim_Angle;
friend class DrawDim_Distance;
friend class DrawDim_Radius;
friend class DrawDim_PlanarDimension;
friend class DrawDim_PlanarAngle;
friend class DrawDim_PlanarDistance;
friend class DrawDim_PlanarRadius;
friend class DrawDim_PlanarDiameter;

};







#endif // _DrawDim_HeaderFile
