// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_OsculatingSurface_HeaderFile
#define _Geom_OsculatingSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Geom/Handle_Geom_HSequenceOfBSplineSurface.hxx>
#include <Foundation/TColStd/Handle_TColStd_HSequenceOfInteger.hxx>
#include <Foundation/TColStd/TColStd_Array1OfBoolean.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Geom/Handle_Geom_BSplineSurface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_IsoType.hxx>
class Geom_Surface;
class Geom_HSequenceOfBSplineSurface;
class TColStd_HSequenceOfInteger;
class Geom_BSplineSurface;
class Geom_SequenceOfBSplineSurface;



class Geom_OsculatingSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom_OsculatingSurface();
  
  //! detects if the  surface has punctual U  or  V
  //! isoparametric  curve along on  the bounds of the surface
  //! relativly to the tolerance Tol and Builds the corresponding
  //! osculating surfaces.
  Standard_EXPORT Geom_OsculatingSurface(const Handle(Geom_Surface)& BS, const Standard_Real Tol);
  
  Standard_EXPORT   void Init (const Handle(Geom_Surface)& BS, const Standard_Real Tol) ;
  
  Standard_EXPORT   Handle(Geom_Surface) BasisSurface()  const;
  
  Standard_EXPORT   Standard_Real Tolerance()  const;
  
  //! if Standard_True, L is the local osculating surface
  //! along U at the point U,V.
  Standard_EXPORT   Standard_Boolean UOscSurf (const Standard_Real U, const Standard_Real V, Standard_Boolean& t, Handle(Geom_BSplineSurface)& L)  const;
  
  //! if Standard_True, L is the local osculating surface
  //! along V at the point U,V.
  Standard_EXPORT   Standard_Boolean VOscSurf (const Standard_Real U, const Standard_Real V, Standard_Boolean& t, Handle(Geom_BSplineSurface)& L)  const;




protected:





private:

  
  //! returns False if the osculating surface can't be built
  Standard_EXPORT   Standard_Boolean BuildOsculatingSurface (const Standard_Real Param, const Standard_Integer UKnot, const Standard_Integer VKnot, const Handle(Geom_BSplineSurface)& BS, Handle(Geom_BSplineSurface)& L)  const;
  
  //! returns    True    if  the    isoparametric     is
  //! quasi-punctual
  Standard_EXPORT   Standard_Boolean IsQPunctual (const Handle(Geom_Surface)& S, const Standard_Real Param, const GeomAbs_IsoType IT, const Standard_Real TolMin, const Standard_Real TolMax)  const;
  
  Standard_EXPORT   Standard_Boolean HasOscSurf()  const;
  
  Standard_EXPORT   Standard_Boolean IsAlongU()  const;
  
  Standard_EXPORT   Standard_Boolean IsAlongV()  const;
  
  Standard_EXPORT   void ClearOsculFlags() ;
  
  Standard_EXPORT  const  Geom_SequenceOfBSplineSurface& GetSeqOfL1()  const;
  
  Standard_EXPORT  const  Geom_SequenceOfBSplineSurface& GetSeqOfL2()  const;


  Handle(Geom_Surface) myBasisSurf;
  Standard_Real myTol;
  Handle(Geom_HSequenceOfBSplineSurface) myOsculSurf1;
  Handle(Geom_HSequenceOfBSplineSurface) myOsculSurf2;
  Handle(TColStd_HSequenceOfInteger) myKdeg;
  TColStd_Array1OfBoolean myAlong;


};







#endif // _Geom_OsculatingSurface_HeaderFile
