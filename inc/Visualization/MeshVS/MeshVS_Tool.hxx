// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_Tool_HeaderFile
#define _MeshVS_Tool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Visualization/Graphic3d/Handle_Graphic3d_AspectFillArea3d.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_Drawer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/Graphic3d/Handle_Graphic3d_AspectLine3d.hxx>
#include <Visualization/Graphic3d/Handle_Graphic3d_AspectMarker3d.hxx>
#include <Visualization/Graphic3d/Handle_Graphic3d_AspectText3d.hxx>
class Graphic3d_AspectFillArea3d;
class MeshVS_Drawer;
class Graphic3d_MaterialAspect;
class Graphic3d_AspectLine3d;
class Graphic3d_AspectMarker3d;
class Graphic3d_AspectText3d;
class TColStd_Array1OfReal;
class gp_Vec;


//! This class provides auxiliary methods to create differents aspects
class MeshVS_Tool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates fill area aspect with values from Drawer according to keys from DrawerAttribute
  Standard_EXPORT static   Handle(Graphic3d_AspectFillArea3d) CreateAspectFillArea3d (const Handle(MeshVS_Drawer)& theDr, const Standard_Boolean UseDefaults = Standard_True) ;
  
  //! Creates fill aspect with values from Drawer according to keys from DrawerAttribute
  //! and specific material aspect
  Standard_EXPORT static   Handle(Graphic3d_AspectFillArea3d) CreateAspectFillArea3d (const Handle(MeshVS_Drawer)& theDr, const Graphic3d_MaterialAspect& Mat, const Standard_Boolean UseDefaults = Standard_True) ;
  
  //! Creates line aspect with values from Drawer according to keys from DrawerAttribute
  Standard_EXPORT static   Handle(Graphic3d_AspectLine3d) CreateAspectLine3d (const Handle(MeshVS_Drawer)& theDr, const Standard_Boolean UseDefaults = Standard_True) ;
  
  //! Creates marker aspect with values from Drawer according to keys from DrawerAttribute
  Standard_EXPORT static   Handle(Graphic3d_AspectMarker3d) CreateAspectMarker3d (const Handle(MeshVS_Drawer)& theDr, const Standard_Boolean UseDefaults = Standard_True) ;
  
  //! Creates text aspect with values from Drawer according to keys from DrawerAttribute
  Standard_EXPORT static   Handle(Graphic3d_AspectText3d) CreateAspectText3d (const Handle(MeshVS_Drawer)& theDr, const Standard_Boolean UseDefaults = Standard_True) ;
  
  //! Get one of normals to polygon described by these points.
  //! If the polygon isn't planar, function returns false
  Standard_EXPORT static   Standard_Boolean GetNormal (const TColStd_Array1OfReal& Nodes, gp_Vec& Norm) ;
  
  //! Get an average of normals to non-planar polygon described by these points or compute
  //! normal of planar polygon. If the polygon isn't planar, function returns false
  Standard_EXPORT static   Standard_Boolean GetAverageNormal (const TColStd_Array1OfReal& Nodes, gp_Vec& Norm) ;




protected:





private:





};







#endif // _MeshVS_Tool_HeaderFile
