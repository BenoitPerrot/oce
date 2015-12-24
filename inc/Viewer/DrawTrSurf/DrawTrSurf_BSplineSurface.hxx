// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_BSplineSurface_HeaderFile
#define _DrawTrSurf_BSplineSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Viewer/DrawTrSurf/Handle_DrawTrSurf_BSplineSurface.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Viewer/Draw/Draw_MarkerShape.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Viewer/DrawTrSurf/DrawTrSurf_Surface.hxx>
#include <Geometry/Geom/Handle_Geom_BSplineSurface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Viewer/Draw/Handle_Draw_Drawable3D.hxx>
class Geom_BSplineSurface;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;



//! This class defines a drawable BSplineSurface.
//! With this class you can draw the control points and the knots
//! of the surface.
//! You can use the general class Surface from DrawTrSurf too,
//! if you just want to sea boundaries and isoparametric curves.
class DrawTrSurf_BSplineSurface : public DrawTrSurf_Surface
{

public:

  
  //! default drawing mode.
  //! The isoparametric curves corresponding to the knots values are
  //! drawn.
  //! The control points and the knots points are drawn.
  //! The boundaries are yellow, the isoparametric curves are blues.
  //! For the discretisation 50 points are computed in each parametric
  //! direction.
  Standard_EXPORT DrawTrSurf_BSplineSurface(const Handle(Geom_BSplineSurface)& S);
  

  //! The isoparametric curves corresponding to the knots values are
  //! drawn.
  Standard_EXPORT DrawTrSurf_BSplineSurface(const Handle(Geom_BSplineSurface)& S, const Draw_Color& BoundsColor, const Draw_Color& IsosColor, const Draw_Color& PolesColor, const Draw_Color& KnotsColor, const Draw_MarkerShape KnotsShape, const Standard_Integer KnotsSize, const Standard_Boolean ShowPoles, const Standard_Boolean ShowKnots, const Standard_Integer Discret, const Standard_Real Deflection, const Standard_Integer DrawMode);
  
  //! Parametric equidistant iso curves are drawn.
  Standard_EXPORT DrawTrSurf_BSplineSurface(const Handle(Geom_BSplineSurface)& S, const Standard_Integer NbUIsos, const Standard_Integer NbVIsos, const Draw_Color& BoundsColor, const Draw_Color& IsosColor, const Draw_Color& PolesColor, const Draw_Color& KnotsColor, const Draw_MarkerShape KnotsShape, const Standard_Integer KnotsSize, const Standard_Boolean ShowPoles, const Standard_Boolean ShowKnots, const Standard_Integer Discret, const Standard_Real Deflection, const Standard_Integer DrawMode);
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  Standard_EXPORT   void ShowPoles() ;
  
  Standard_EXPORT   void ShowKnots() ;
  
  //! change the number of isoparametric curves to be drawn.
  Standard_EXPORT virtual   void ShowIsos (const Standard_Integer Nu, const Standard_Integer Nv) ;
  
  //! change the number of isoparametric curves to be drawn.
  Standard_EXPORT   void ShowKnotsIsos() ;
  
  //! rub out all the isoparametric curves.
  Standard_EXPORT virtual   void ClearIsos() ;
  
  Standard_EXPORT   void ClearPoles() ;
  
  Standard_EXPORT   void ClearKnots() ;
  
  Standard_EXPORT   void FindPole (const Standard_Real X, const Standard_Real Y, const Draw_Display& D, const Standard_Real Prec, Standard_Integer& UIndex, Standard_Integer& VIndex)  const;
  
  Standard_EXPORT   void FindUKnot (const Standard_Real X, const Standard_Real Y, const Draw_Display& D, const Standard_Real Prec, Standard_Integer& UIndex)  const;
  
  Standard_EXPORT   void FindVKnot (const Standard_Real X, const Standard_Real Y, const Draw_Display& D, const Standard_Real Prec, Standard_Integer& VIndex)  const;
  
      void SetPolesColor (const Draw_Color& aColor) ;
  
      void SetKnotsColor (const Draw_Color& aColor) ;
  
      void SetKnotsShape (const Draw_MarkerShape Shape) ;
  
      Draw_MarkerShape KnotsShape()  const;
  
      Draw_Color KnotsColor()  const;
  
      Draw_Color PolesColor()  const;
  
  //! For variable copy.
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_BSplineSurface)

protected:




private: 


  Standard_Boolean drawPoles;
  Standard_Boolean drawKnots;
  Standard_Boolean knotsIsos;
  Draw_MarkerShape knotsForm;
  Draw_Color knotsLook;
  Standard_Integer knotsDim;
  Draw_Color polesLook;


};


#include <Viewer/DrawTrSurf/DrawTrSurf_BSplineSurface.lxx>





#endif // _DrawTrSurf_BSplineSurface_HeaderFile
