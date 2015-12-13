// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTopAdaptor_TopolTool_HeaderFile
#define _BRepTopAdaptor_TopolTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepTopAdaptor_TopolTool.hxx>

#include <TopExp_Explorer.hxx>
#include <TopoDS_Face.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_BRepAdaptor_HCurve2d.hxx>
#include <TColStd_ListOfTransient.hxx>
#include <TColStd_ListIteratorOfListOfTransient.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Adaptor3d_HVertex.hxx>
#include <TopAbs_State.hxx>
#include <TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class BRepAdaptor_HCurve2d;
class Standard_DomainError;
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class Adaptor3d_HVertex;
class gp_Pnt2d;
class gp_Pnt;



class BRepTopAdaptor_TopolTool : public Adaptor3d_TopolTool
{

public:

  
  Standard_EXPORT BRepTopAdaptor_TopolTool();
  
  Standard_EXPORT BRepTopAdaptor_TopolTool(const Handle(Adaptor3d_HSurface)& Surface);
  
  Standard_EXPORT virtual   void Initialize() ;
  
  Standard_EXPORT virtual   void Initialize (const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT virtual   void Initialize (const Handle(Adaptor2d_HCurve2d)& Curve) ;
  
  Standard_EXPORT virtual   void Init() ;
  
  Standard_EXPORT virtual   Standard_Boolean More() ;
  
  Standard_EXPORT virtual   Handle(Adaptor2d_HCurve2d) Value() ;
  
  Standard_EXPORT virtual   void Next() ;
  
  Standard_EXPORT virtual   Standard_Address Edge()  const;
  
  Standard_EXPORT virtual   void InitVertexIterator() ;
  
  Standard_EXPORT virtual   Standard_Boolean MoreVertex() ;
  
  Standard_EXPORT virtual   Handle(Adaptor3d_HVertex) Vertex() ;
  
  Standard_EXPORT virtual   void NextVertex() ;
  
  Standard_EXPORT virtual   TopAbs_State Classify (const gp_Pnt2d& P2d, const Standard_Real Tol, const Standard_Boolean RecadreOnPeriodic = Standard_True) ;
  
  //! see the code for specifications)
  Standard_EXPORT virtual   Standard_Boolean IsThePointOn (const gp_Pnt2d& P2d, const Standard_Real Tol, const Standard_Boolean RecadreOnPeriodic = Standard_True) ;
  
  //! If the function returns the orientation of the arc.
  //! If the orientation is FORWARD or REVERSED, the arc is
  //! a "real" limit of the surface.
  //! If the orientation is INTERNAL or EXTERNAL, the arc is
  //! considered as an arc on the surface.
  Standard_EXPORT virtual   TopAbs_Orientation Orientation (const Handle(Adaptor2d_HCurve2d)& C) ;
  
  //! If the function returns the orientation of the arc.
  //! If the orientation is FORWARD or REVERSED, the arc is
  //! a "real" limit of the surface.
  //! If the orientation is INTERNAL or EXTERNAL, the arc is
  //! considered as an arc on the surface.
  Standard_EXPORT virtual   TopAbs_Orientation Orientation (const Handle(Adaptor3d_HVertex)& C) ;
  
  Standard_EXPORT   void Destroy() ;
~BRepTopAdaptor_TopolTool()
{
  Destroy();
}
  
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
  
  Standard_EXPORT virtual   void SamplePoint (const Standard_Integer Index, gp_Pnt2d& P2d, gp_Pnt& P3d) ;
  
  Standard_EXPORT virtual   Standard_Boolean DomainIsInfinite() ;



  DEFINE_STANDARD_RTTI(BRepTopAdaptor_TopolTool)

protected:




private: 


  TopExp_Explorer myVIterator;
  TopoDS_Face myFace;
  Standard_Address myFClass2d;
  Handle(BRepAdaptor_HCurve2d) myCurve;
  TColStd_ListOfTransient myCurves;
  TColStd_ListIteratorOfListOfTransient myCIterator;
  Standard_Real myU0;
  Standard_Real myV0;
  Standard_Real myDU;
  Standard_Real myDV;


};







#endif // _BRepTopAdaptor_TopolTool_HeaderFile
