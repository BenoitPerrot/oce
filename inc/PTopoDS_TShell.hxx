// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TShell_HeaderFile
#define _PTopoDS_TShell_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PTopoDS_TShell.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <PTopoDS_TShape.hxx>


class PTopoDS_TShell : public PTopoDS_TShape
{

public:

  
  Standard_EXPORT PTopoDS_TShell();
  
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;

PTopoDS_TShell(const Storage_stCONSTclCOM& a) : PTopoDS_TShape(a)
{
  
}



  DEFINE_STANDARD_RTTI(PTopoDS_TShell)

protected:




private: 




};







#endif // _PTopoDS_TShell_HeaderFile
