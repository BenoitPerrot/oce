// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_DrawableMesure_HeaderFile
#define _TestTopOpeDraw_DrawableMesure_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TestTopOpeDraw_DrawableMesure.hxx>

#include <Handle_TColgp_HArray1OfPnt.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Handle_TestTopOpeDraw_DrawableC3D.hxx>
#include <Handle_TestTopOpeDraw_HArray1OfDrawableP3D.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <TestTopOpeDraw_DrawableC3D.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
class TColgp_HArray1OfPnt;
class TestTopOpeDraw_DrawableC3D;
class TestTopOpeDraw_HArray1OfDrawableP3D;
class TestTopOpeTools_Mesure;
class Draw_Color;
class TCollection_AsciiString;
class gp_Pnt;
class Draw_Display;



class TestTopOpeDraw_DrawableMesure : public TestTopOpeDraw_DrawableC3D
{

public:

  
  Standard_EXPORT TestTopOpeDraw_DrawableMesure(const TestTopOpeTools_Mesure& M, const Draw_Color& CurveColor, const Draw_Color& TextColor, const Standard_Real ScaleX = 1.0, const Standard_Real ScaleY = 1.0);
  
  Standard_EXPORT   void SetScale (const Standard_Real ScaleX, const Standard_Real ScaleY) ;
  
  Standard_EXPORT   void SetScaleX (const Standard_Real ScaleX) ;
  
  Standard_EXPORT   void SetScaleY (const Standard_Real ScaleY) ;
  
  Standard_EXPORT   void SetName (const TCollection_AsciiString& Name) ;
  
  Standard_EXPORT virtual   gp_Pnt Pnt()  const;
  
  Standard_EXPORT  const  Handle(TColgp_HArray1OfPnt)& Pnts()  const;
  
  Standard_EXPORT   void Clear() ;
  
  //! For variable whatis command.
  Standard_EXPORT virtual   void Whatis (Draw_Interpretor& I)  const;
  
  Standard_EXPORT virtual   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_DrawableMesure)

protected:




private: 


  Handle(TColgp_HArray1OfPnt) myP;
  Draw_Color myCurveColor;
  Handle(TestTopOpeDraw_DrawableC3D) myAXE1;
  Handle(TestTopOpeDraw_DrawableC3D) myAXE2;
  Handle(TestTopOpeDraw_HArray1OfDrawableP3D) myHDP;
  Handle(TestTopOpeDraw_HArray1OfDrawableP3D) myHADP1;
  Handle(TestTopOpeDraw_HArray1OfDrawableP3D) myHADP2;
  Standard_Real myScaleX;
  Standard_Real myScaleY;


};







#endif // _TestTopOpeDraw_DrawableMesure_HeaderFile
