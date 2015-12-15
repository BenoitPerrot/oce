// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_DrawableP2D_HeaderFile
#define _TestTopOpeDraw_DrawableP2D_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TestTopOpeDraw_DrawableP2D.hxx>

#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Draw_Color.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Draw_Text2D.hxx>
#include <Draw_Marker2D.hxx>
#include <Draw_MarkerShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Draw_Text2D;
class gp_Pnt2d;
class Draw_Color;
class Draw_Display;



class TestTopOpeDraw_DrawableP2D : public Draw_Marker2D
{

public:

  
  Standard_EXPORT TestTopOpeDraw_DrawableP2D(const gp_Pnt2d& P, const Draw_Color& PColor, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT TestTopOpeDraw_DrawableP2D(const gp_Pnt2d& P, const Draw_Color& PColor, const Standard_CString Text, const Draw_Color& TextColor, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT TestTopOpeDraw_DrawableP2D(const gp_Pnt2d& P, const Draw_MarkerShape T, const Draw_Color& PColor, const Standard_CString Text, const Draw_Color& TextColor, const Standard_Integer Size = 2, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT TestTopOpeDraw_DrawableP2D(const gp_Pnt2d& P, const Draw_MarkerShape T, const Draw_Color& PColor, const Standard_CString Text, const Draw_Color& TextColor, const Standard_Real Tol, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT   void ChangePnt2d (const gp_Pnt2d& P) ;
  
  Standard_EXPORT virtual   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_DrawableP2D)

protected:




private: 


  gp_Pnt2d myPnt2d;
  Standard_CString myText;
  Draw_Color myTextColor;
  Standard_Real myMoveX;
  Standard_Real myMoveY;
  Handle(Draw_Text2D) myText2D;


};







#endif // _TestTopOpeDraw_DrawableP2D_HeaderFile
