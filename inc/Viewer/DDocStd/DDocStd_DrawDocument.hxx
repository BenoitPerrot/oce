// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDocStd_DrawDocument_HeaderFile
#define _DDocStd_DrawDocument_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_DDocStd_DrawDocument.hxx>

#include <Handle_TDocStd_Document.hxx>
#include <Viewer/DDF/DDF_Data.hxx>
#include <Handle_Draw_Drawable3D.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
class TDocStd_Document;
class Draw_Display;
class Draw_Drawable3D;


//! draw variable for TDocStd_Document.
//! ==================================
class DDocStd_DrawDocument : public DDF_Data
{

public:

  
  Standard_EXPORT static   Handle(DDocStd_DrawDocument) Find (const Handle(TDocStd_Document)& Doc) ;
  
  Standard_EXPORT DDocStd_DrawDocument(const Handle(TDocStd_Document)& Doc);
  
  Standard_EXPORT   Handle(TDocStd_Document) GetDocument()  const;
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;
  
  Standard_EXPORT virtual   void Dump (Standard_OStream& S)  const;
  
  Standard_EXPORT virtual   void Whatis (Draw_Interpretor& I)  const;




  DEFINE_STANDARD_RTTI(DDocStd_DrawDocument)

protected:




private: 


  Handle(TDocStd_Document) myDocument;


};







#endif // _DDocStd_DrawDocument_HeaderFile
