// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Marker3D_HeaderFile
#define _Draw_Marker3D_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Draw_Marker3D.hxx>

#include <gp_Pnt.hxx>
#include <Draw_Color.hxx>
#include <Draw_MarkerShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Draw_Drawable3D.hxx>
class gp_Pnt;
class Draw_Color;
class Draw_Display;



class Draw_Marker3D : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT Draw_Marker3D(const gp_Pnt& P, const Draw_MarkerShape T, const Draw_Color& C, const Standard_Integer ISize = 5);
  
  Standard_EXPORT Draw_Marker3D(const gp_Pnt& P, const Draw_MarkerShape T, const Draw_Color& C, const Standard_Real RSize);
  
  //! myPos field
  Standard_EXPORT   gp_Pnt& ChangePos() ;
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  //! Returs always false
  Standard_EXPORT virtual   Standard_Boolean PickReject (const Standard_Real X, const Standard_Real Y, const Standard_Real Prec)  const;




  DEFINE_STANDARD_RTTI(Draw_Marker3D)

protected:




private: 


  gp_Pnt myPos;
  Draw_Color myCol;
  Draw_MarkerShape myTyp;
  Standard_Integer mySiz;
  Standard_Real myRSiz;
  Standard_Boolean myIsRSiz;


};







#endif // _Draw_Marker3D_HeaderFile
