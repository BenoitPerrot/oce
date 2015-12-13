// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_PointRepresentation_HeaderFile
#define _BRep_PointRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRep_PointRepresentation.hxx>

#include <TopLoc_Location.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Geom_Surface.hxx>
class Standard_DomainError;
class TopLoc_Location;
class Geom_Curve;
class Geom2d_Curve;
class Geom_Surface;


//! Root  class     for   the points  representations.
//! Contains a location and a parameter.
class BRep_PointRepresentation : public MMgt_TShared
{

public:

  
  //! A point on a 3d curve.
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurve()  const;
  
  //! A point on a 2d curve on a surface.
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurveOnSurface()  const;
  
  //! A point on a surface.
  Standard_EXPORT virtual   Standard_Boolean IsPointOnSurface()  const;
  
  //! A point on the curve <C>.
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurve (const Handle(Geom_Curve)& C, const TopLoc_Location& L)  const;
  
  //! A point on the 2d curve <PC> on the surface <S>.
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurveOnSurface (const Handle(Geom2d_Curve)& PC, const Handle(Geom_Surface)& S, const TopLoc_Location& L)  const;
  
  //! A point on the surface <S>.
  Standard_EXPORT virtual   Standard_Boolean IsPointOnSurface (const Handle(Geom_Surface)& S, const TopLoc_Location& L)  const;
  
     const  TopLoc_Location& Location()  const;
  
      void Location (const TopLoc_Location& L) ;
  
      Standard_Real Parameter()  const;
  
      void Parameter (const Standard_Real P) ;
  
  Standard_EXPORT virtual   Standard_Real Parameter2()  const;
  
  Standard_EXPORT virtual   void Parameter2 (const Standard_Real P) ;
  
  Standard_EXPORT virtual  const  Handle(Geom_Curve)& Curve()  const;
  
  Standard_EXPORT virtual   void Curve (const Handle(Geom_Curve)& C) ;
  
  Standard_EXPORT virtual  const  Handle(Geom2d_Curve)& PCurve()  const;
  
  Standard_EXPORT virtual   void PCurve (const Handle(Geom2d_Curve)& C) ;
  
  Standard_EXPORT virtual  const  Handle(Geom_Surface)& Surface()  const;
  
  Standard_EXPORT virtual   void Surface (const Handle(Geom_Surface)& S) ;




  DEFINE_STANDARD_RTTI(BRep_PointRepresentation)

protected:

  
  Standard_EXPORT BRep_PointRepresentation(const Standard_Real P, const TopLoc_Location& L);



private: 


  TopLoc_Location myLocation;
  Standard_Real myParameter;


};


#include <BRep_PointRepresentation.lxx>





#endif // _BRep_PointRepresentation_HeaderFile
