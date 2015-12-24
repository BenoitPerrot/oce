// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_ThePolyhedronOfHInter_HeaderFile
#define _IntCurveSurface_ThePolyhedronOfHInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#include <Mathematics/BoundingVolumes/Handle_Bnd_HArray1OfBox.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
class Bnd_HArray1OfBox;
class Standard_OutOfRange;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class TColStd_Array1OfReal;
class gp_Pnt;
class Bnd_Box;
class gp_XYZ;



class IntCurveSurface_ThePolyhedronOfHInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntCurveSurface_ThePolyhedronOfHInter(const Handle(Adaptor3d_HSurface)& Surface, const Standard_Integer nbdU, const Standard_Integer nbdV, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2);
  
  Standard_EXPORT IntCurveSurface_ThePolyhedronOfHInter(const Handle(Adaptor3d_HSurface)& Surface, const TColStd_Array1OfReal& Upars, const TColStd_Array1OfReal& Vpars);
  
  Standard_EXPORT   void Destroy() ;
~IntCurveSurface_ThePolyhedronOfHInter()
{
  Destroy();
}
  
  Standard_EXPORT   void DeflectionOverEstimation (const Standard_Real flec) ;
  
  Standard_EXPORT   Standard_Real DeflectionOnTriangle (const Handle(Adaptor3d_HSurface)& Surface, const Standard_Integer Index)  const;
  
  Standard_EXPORT   void UMinSingularity (const Standard_Boolean Sing) ;
  
  Standard_EXPORT   void UMaxSingularity (const Standard_Boolean Sing) ;
  
  Standard_EXPORT   void VMinSingularity (const Standard_Boolean Sing) ;
  
  Standard_EXPORT   void VMaxSingularity (const Standard_Boolean Sing) ;
  
  Standard_EXPORT   void Size (Standard_Integer& nbdu, Standard_Integer& nbdv)  const;
  
  Standard_EXPORT   Standard_Integer NbTriangles()  const;
  
  Standard_EXPORT   void Triangle (const Standard_Integer Index, Standard_Integer& P1, Standard_Integer& P2, Standard_Integer& P3)  const;
  
  Standard_EXPORT   Standard_Integer TriConnex (const Standard_Integer Triang, const Standard_Integer Pivot, const Standard_Integer Pedge, Standard_Integer& TriCon, Standard_Integer& OtherP)  const;
  
  Standard_EXPORT   Standard_Integer NbPoints()  const;
  
  Standard_EXPORT   void Point (const gp_Pnt& thePnt, const Standard_Integer lig, const Standard_Integer col, const Standard_Real U, const Standard_Real V) ;
  
  Standard_EXPORT  const  gp_Pnt& Point (const Standard_Integer Index, Standard_Real& U, Standard_Real& V)  const;
  
  Standard_EXPORT  const  gp_Pnt& Point (const Standard_Integer Index)  const;
  
  Standard_EXPORT   void Point (const Standard_Integer Index, gp_Pnt& P)  const;
  
  Standard_EXPORT  const  Bnd_Box& Bounding()  const;
  
  Standard_EXPORT   void FillBounding() ;
  
  Standard_EXPORT  const  Handle(Bnd_HArray1OfBox)& ComponentsBounding()  const;
  
  Standard_EXPORT   Standard_Real DeflectionOverEstimation()  const;
  
  Standard_EXPORT   Standard_Boolean HasUMinSingularity()  const;
  
  Standard_EXPORT   Standard_Boolean HasUMaxSingularity()  const;
  
  Standard_EXPORT   Standard_Boolean HasVMinSingularity()  const;
  
  Standard_EXPORT   Standard_Boolean HasVMaxSingularity()  const;
  
  Standard_EXPORT   void PlaneEquation (const Standard_Integer Triang, gp_XYZ& NormalVector, Standard_Real& PolarDistance)  const;
  
  Standard_EXPORT   Standard_Boolean Contain (const Standard_Integer Triang, const gp_Pnt& ThePnt)  const;
  
  Standard_EXPORT   void Parameters (const Standard_Integer Index, Standard_Real& U, Standard_Real& V)  const;
  
  Standard_EXPORT   Standard_Boolean IsOnBound (const Standard_Integer Index1, const Standard_Integer Index2)  const;
  
      Standard_Real GetBorderDeflection()  const;
  
  Standard_EXPORT   void Dump()  const;




protected:

  
  Standard_EXPORT   void Init (const Handle(Adaptor3d_HSurface)& Surface, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2) ;
  
  Standard_EXPORT   void Init (const Handle(Adaptor3d_HSurface)& Surface, const TColStd_Array1OfReal& Upars, const TColStd_Array1OfReal& Vpars) ;




private:

  
  Standard_EXPORT   Standard_Real ComputeBorderDeflection (const Handle(Adaptor3d_HSurface)& Surface, const Standard_Real Parameter, const Standard_Real PMin, const Standard_Real PMax, const Standard_Boolean isUIso)  const;


  Standard_Integer nbdeltaU;
  Standard_Integer nbdeltaV;
  Bnd_Box TheBnd;
  Handle(Bnd_HArray1OfBox) TheComponentsBnd;
  Standard_Real TheDeflection;
  Standard_Address C_MyPnts;
  Standard_Address C_MyU;
  Standard_Address C_MyV;
  Standard_Boolean UMinSingular;
  Standard_Boolean UMaxSingular;
  Standard_Boolean VMinSingular;
  Standard_Boolean VMaxSingular;
  Standard_Real TheBorderDeflection;
  Standard_Address C_MyIsOnBounds;


};

#define ThePSurface Handle(Adaptor3d_HSurface)
#define ThePSurface_hxx <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#define IntCurveSurface_Polyhedron IntCurveSurface_ThePolyhedronOfHInter
#define IntCurveSurface_Polyhedron_hxx <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_ThePolyhedronOfHInter.hxx>

#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_Polyhedron.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef IntCurveSurface_Polyhedron
#undef IntCurveSurface_Polyhedron_hxx




#endif // _IntCurveSurface_ThePolyhedronOfHInter_HeaderFile
