// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_TSolid_HeaderFile
#define _TopoDS_TSolid_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopoDS_TSolid.hxx>

#include <TopoDS_TShape.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Handle_TopoDS_TShape.hxx>
class TopoDS_TShape;


//! A Topological part of 3D space, bounded by shells,
//! edges and vertices.
class TopoDS_TSolid : public TopoDS_TShape
{

public:

  
  //! Creates an empty TSolid.
    TopoDS_TSolid();
  
  //! returns SOLID.
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;
  
  //! Returns an empty TSolid.
  Standard_EXPORT   Handle(TopoDS_TShape) EmptyCopy()  const;




  DEFINE_STANDARD_RTTI(TopoDS_TSolid)

protected:




private: 




};


#include <TopoDS_TSolid.lxx>





#endif // _TopoDS_TSolid_HeaderFile
