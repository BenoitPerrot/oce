// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_Radius_HeaderFile
#define _DrawDim_Radius_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_DrawDim_Radius.hxx>

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <DrawDim_Dimension.hxx>
class TopoDS_Face;
class Draw_Display;



class DrawDim_Radius : public DrawDim_Dimension
{

public:

  
  Standard_EXPORT DrawDim_Radius(const TopoDS_Face& cylinder);
  
  Standard_EXPORT  const  TopoDS_Face& Cylinder()  const;
  
  Standard_EXPORT   void Cylinder (const TopoDS_Face& face) ;
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(DrawDim_Radius)

protected:




private: 


  TopoDS_Face myCylinder;


};







#endif // _DrawDim_Radius_HeaderFile
