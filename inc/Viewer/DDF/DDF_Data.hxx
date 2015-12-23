// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_Data_HeaderFile
#define _DDF_Data_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_DDF_Data.hxx>

#include <Handle_TDF_Data.hxx>
#include <Viewer/Draw/Draw_Drawable3D.hxx>
#include <Handle_Draw_Drawable3D.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
class TDF_Data;
class Draw_Display;
class Draw_Drawable3D;


//! Encapsulates a data framework from TDF in a drawable object
class DDF_Data : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT DDF_Data(const Handle(TDF_Data)& aDF);
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;
  
  Standard_EXPORT virtual   void Dump (Standard_OStream& S)  const;
  
  Standard_EXPORT   void DataFramework (const Handle(TDF_Data)& aDF) ;
  
  Standard_EXPORT   Handle(TDF_Data) DataFramework()  const;
  
  Standard_EXPORT virtual   void Whatis (Draw_Interpretor& I)  const;




  DEFINE_STANDARD_RTTI(DDF_Data)

protected:




private: 


  Handle(TDF_Data) myDF;


};







#endif // _DDF_Data_HeaderFile
