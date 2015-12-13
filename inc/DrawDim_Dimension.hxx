// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_Dimension_HeaderFile
#define _DrawDim_Dimension_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_DrawDim_Dimension.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Draw_Color.hxx>
#include <Draw_Drawable3D.hxx>
class Draw_Color;
class gp_Pnt;
class Draw_Display;


//! Dimension between planes and cylinder
class DrawDim_Dimension : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT   void SetValue (const Standard_Real avalue) ;
  
  Standard_EXPORT   Standard_Real GetValue()  const;
  
  Standard_EXPORT   Standard_Boolean IsValued()  const;
  
  Standard_EXPORT   void TextColor (const Draw_Color& C) ;
  
  Standard_EXPORT   Draw_Color TextColor()  const;
  
  Standard_EXPORT   void DrawText (const gp_Pnt& Pos, Draw_Display& D)  const;




  DEFINE_STANDARD_RTTI(DrawDim_Dimension)

protected:

  
  Standard_EXPORT DrawDim_Dimension();

  Standard_Boolean is_valued;
  Standard_Real myValue;
  Draw_Color myTextColor;


private: 




};







#endif // _DrawDim_Dimension_HeaderFile
