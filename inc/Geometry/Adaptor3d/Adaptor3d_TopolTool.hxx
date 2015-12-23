// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_TopolTool_HeaderFile
#define _Adaptor3d_TopolTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Adaptor2d_HLine2d.hxx>
#include <Handle_Adaptor3d_HVertex.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Adaptor2d_HLine2d;
class Adaptor3d_HVertex;
class Adaptor3d_HSurface;
class TColStd_HArray1OfReal;
class Standard_DomainError;
class Adaptor2d_HCurve2d;
class gp_Pnt2d;
class gp_Pnt;
class TColStd_Array1OfReal;


//! This class provides a default topological tool,
//! based on the Umin,Vmin,Umax,Vmax of an HSurface
//! from Adaptor3d.
//! All methods and fields may be redefined when
//! inheriting from this class.
//! This class is used to instantiate algorithmes
//! as Intersection, outlines,...
class Adaptor3d_TopolTool : public MMgt_TShared
{

public:

  
  Standard_EXPORT Adaptor3d_TopolTool();
  
  Standard_EXPORT Adaptor3d_TopolTool(const Handle(Adaptor3d_HSurface)& Surface);
  
  Standard_EXPORT virtual   void Initialize() ;
  
  Standard_EXPORT virtual   void Initialize (const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT virtual   void Initialize (const Handle(Adaptor2d_HCurve2d)& Curve) ;
  
  Standard_EXPORT virtual   void Init() ;
  
  Standard_EXPORT virtual   Standard_Boolean More() ;
  
  Standard_EXPORT virtual   Handle(Adaptor2d_HCurve2d) Value() ;
  
  Standard_EXPORT virtual   void Next() ;
  
  Standard_EXPORT virtual   void InitVertexIterator() ;
  
  Standard_EXPORT virtual   Standard_Boolean MoreVertex() ;
  
  Standard_EXPORT virtual   Handle(Adaptor3d_HVertex) Vertex() ;
  
  Standard_EXPORT virtual   void NextVertex() ;
  
  Standard_EXPORT virtual   TopAbs_State Classify (const gp_Pnt2d& P, const Standard_Real Tol, const Standard_Boolean ReacdreOnPeriodic = Standard_True) ;
  
  Standard_EXPORT virtual   Standard_Boolean IsThePointOn (const gp_Pnt2d& P, const Standard_Real Tol, const Standard_Boolean ReacdreOnPeriodic = Standard_True) ;
  
  //! If the function returns the orientation of the arc.
  //! If the orientation is FORWARD or REVERSED, the arc is
  //! a "real" limit of the surface.
  //! If the orientation is INTERNAL or EXTERNAL, the arc is
  //! considered as an arc on the surface.
  Standard_EXPORT virtual   TopAbs_Orientation Orientation (const Handle(Adaptor2d_HCurve2d)& C) ;
  
  //! Returns the orientation of the vertex V.
  //! The vertex has been found with an exploration on
  //! a given arc. The orientation is the orientation
  //! of the vertex on this arc.
  Standard_EXPORT virtual   TopAbs_Orientation Orientation (const Handle(Adaptor3d_HVertex)& V) ;
  
  //! Returns True if the vertices V1 and V2 are identical.
  //! This method does not take the orientation of the
  //! vertices in account.
  Standard_EXPORT virtual   Standard_Boolean Identical (const Handle(Adaptor3d_HVertex)& V1, const Handle(Adaptor3d_HVertex)& V2) ;
  
  //! answers if arcs and vertices may have 3d representations,
  //! so that we could use Tol3d and Pnt methods.
  Standard_EXPORT virtual   Standard_Boolean Has3d()  const;
  
  //! returns 3d tolerance of the arc C
  Standard_EXPORT virtual   Standard_Real Tol3d (const Handle(Adaptor2d_HCurve2d)& C)  const;
  
  //! returns 3d tolerance of the vertex V
  Standard_EXPORT virtual   Standard_Real Tol3d (const Handle(Adaptor3d_HVertex)& V)  const;
  
  //! returns 3d point of the vertex V
  Standard_EXPORT virtual   gp_Pnt Pnt (const Handle(Adaptor3d_HVertex)& V)  const;
  
  Standard_EXPORT virtual   void ComputeSamplePoints() ;
  
  //! compute the sample-points for the intersections algorithms
  Standard_EXPORT virtual   Standard_Integer NbSamplesU() ;
  
  //! compute the sample-points for the intersections algorithms
  Standard_EXPORT virtual   Standard_Integer NbSamplesV() ;
  
  //! compute the sample-points for the intersections algorithms
  Standard_EXPORT virtual   Standard_Integer NbSamples() ;
  
  //! return the set of U parameters on the surface
  //! obtained by the method SamplePnts
  Standard_EXPORT   void UParameters (TColStd_Array1OfReal& theArray)  const;
  
  //! return the set of V parameters on the surface
  //! obtained by the method SamplePnts
  Standard_EXPORT   void VParameters (TColStd_Array1OfReal& theArray)  const;
  
  Standard_EXPORT virtual   void SamplePoint (const Standard_Integer Index, gp_Pnt2d& P2d, gp_Pnt& P3d) ;
  
  Standard_EXPORT virtual   Standard_Boolean DomainIsInfinite() ;
  
  Standard_EXPORT virtual   Standard_Address Edge()  const;
  
  //! compute the sample-points for the intersections algorithms
  //! by adaptive algorithm for BSpline surfaces. For other surfaces algorithm
  //! is the same as in method ComputeSamplePoints(), but only fill arrays of U
  //! and V sample parameters;
  //! theDefl is a requred deflection
  //! theNUmin, theNVmin are minimal nb points for U and V.
  Standard_EXPORT virtual   void SamplePnts (const Standard_Real theDefl, const Standard_Integer theNUmin, const Standard_Integer theNVmin) ;
  
  //! compute the sample-points for the intersections algorithms
  //! by adaptive algorithm for BSpline surfaces  -  is  used  in  SamplePnts
  //! theDefl is a requred deflection
  //! theNUmin, theNVmin are minimal nb points for U and V.
  Standard_EXPORT virtual   void BSplSamplePnts (const Standard_Real theDefl, const Standard_Integer theNUmin, const Standard_Integer theNVmin) ;
  
  //! Returns true if provide uniform sampling of points.
  Standard_EXPORT virtual   Standard_Boolean IsUniformSampling()  const;




  DEFINE_STANDARD_RTTI(Adaptor3d_TopolTool)

protected:


  Handle(Adaptor3d_HSurface) myS;
  Standard_Integer myNbSamplesU;
  Standard_Integer myNbSamplesV;
  Handle(TColStd_HArray1OfReal) myUPars;
  Handle(TColStd_HArray1OfReal) myVPars;


private: 


  Standard_Integer nbRestr;
  Standard_Integer idRestr;
  Standard_Real Uinf;
  Standard_Real Usup;
  Standard_Real Vinf;
  Standard_Real Vsup;
  Handle(Adaptor2d_HLine2d) myRestr[4];
  Standard_Integer nbVtx;
  Standard_Integer idVtx;
  Handle(Adaptor3d_HVertex) myVtx[2];


};







#endif // _Adaptor3d_TopolTool_HeaderFile
