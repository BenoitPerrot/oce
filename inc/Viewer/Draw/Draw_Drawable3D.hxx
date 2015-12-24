// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Drawable3D_HeaderFile
#define _Draw_Drawable3D_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Viewer/Draw/Handle_Draw_Drawable3D.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
class Draw_Display;



class Draw_Drawable3D : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void DrawOn (Draw_Display& dis)  const = 0;
  
  //! Returs True if the pick is outside the box
  Standard_EXPORT virtual   Standard_Boolean PickReject (const Standard_Real X, const Standard_Real Y, const Standard_Real Prec)  const;
  
  //! For variable copy.
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;
  
  //! For variable dump.
  Standard_EXPORT virtual   void Dump (Standard_OStream& S)  const;
  
  //! For variable whatis command. Set  as a result  the
  //! type of the variable.
  Standard_EXPORT virtual   void Whatis (Draw_Interpretor& I)  const;
  
  //! Is a 3D object. (Default True).
  Standard_EXPORT virtual   Standard_Boolean Is3D()  const;
  
  Standard_EXPORT   void SetBounds (const Standard_Real xmin, const Standard_Real xmax, const Standard_Real ymin, const Standard_Real ymax) ;
  
  Standard_EXPORT   void Bounds (Standard_Real& xmin, Standard_Real& xmax, Standard_Real& ymin, Standard_Real& ymax)  const;
  
      Standard_Boolean Visible()  const;
  
      void Visible (const Standard_Boolean V) ;
  
      Standard_Boolean Protected()  const;
  
      void Protected (const Standard_Boolean P) ;
  
      Standard_CString Name()  const;
  
    virtual   void Name (const Standard_CString N) ;




  DEFINE_STANDARD_RTTI(Draw_Drawable3D)

protected:

  
  Standard_EXPORT Draw_Drawable3D();



private: 


  Standard_Real myXmin;
  Standard_Real myXmax;
  Standard_Real myYmin;
  Standard_Real myYmax;
  Standard_Boolean isVisible;
  Standard_Boolean isProtected;
  Standard_CString myName;


};


#include <Viewer/Draw/Draw_Drawable3D.lxx>





#endif // _Draw_Drawable3D_HeaderFile
