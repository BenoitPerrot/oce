// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TCompound1_HeaderFile
#define _PTopoDS_TCompound1_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PTopoDS/Handle_PTopoDS_TCompound1.hxx>

#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <OCAF/PTopoDS/PTopoDS_TShape1.hxx>


class PTopoDS_TCompound1 : public PTopoDS_TShape1
{

public:

  
  //! the new TCompound1 is empty.
  Standard_EXPORT PTopoDS_TCompound1();
  
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;

PTopoDS_TCompound1(const Storage_stCONSTclCOM& a) : PTopoDS_TShape1(a)
{
  
}



  DEFINE_STANDARD_RTTI(PTopoDS_TCompound1)

protected:




private: 




};







#endif // _PTopoDS_TCompound1_HeaderFile
