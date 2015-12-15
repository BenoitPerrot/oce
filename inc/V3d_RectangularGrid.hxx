// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_RectangularGrid_HeaderFile
#define _V3d_RectangularGrid_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_V3d_RectangularGrid.hxx>

#include <Handle_Graphic3d_Structure.hxx>
#include <Handle_Graphic3d_Group.hxx>
#include <Mathematics/Primitives/gp_Ax3.hxx>
#include <V3d_ViewerPointer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Aspect_GridDrawMode.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Aspect_RectangularGrid.hxx>
class Graphic3d_Structure;
class Graphic3d_Group;
class Quantity_Color;



class V3d_RectangularGrid : public Aspect_RectangularGrid
{

public:

  
  Standard_EXPORT V3d_RectangularGrid(const V3d_ViewerPointer& aViewer, const Quantity_Color& aColor, const Quantity_Color& aTenthColor);
  
  Standard_EXPORT   void SetColors (const Quantity_Color& aColor, const Quantity_Color& aTenthColor) ;
  
  Standard_EXPORT   void Display() ;
  
  Standard_EXPORT   void Erase()  const;
  
  Standard_EXPORT   Standard_Boolean IsDisplayed()  const;
  
  Standard_EXPORT   void GraphicValues (Standard_Real& XSize, Standard_Real& YSize, Standard_Real& OffSet)  const;
  
  Standard_EXPORT   void SetGraphicValues (const Standard_Real XSize, const Standard_Real YSize, const Standard_Real OffSet) ;




  DEFINE_STANDARD_RTTI(V3d_RectangularGrid)

protected:

  
  Standard_EXPORT   void UpdateDisplay() ;



private: 

  
  Standard_EXPORT   void DefineLines() ;
  
  Standard_EXPORT   void DefinePoints() ;

  Handle(Graphic3d_Structure) myStructure;
  Handle(Graphic3d_Group) myGroup;
  gp_Ax3 myCurViewPlane;
  V3d_ViewerPointer myViewer;
  Standard_Boolean myCurAreDefined;
  Aspect_GridDrawMode myCurDrawMode;
  Standard_Real myCurXo;
  Standard_Real myCurYo;
  Standard_Real myCurAngle;
  Standard_Real myCurXStep;
  Standard_Real myCurYStep;
  Standard_Real myXSize;
  Standard_Real myYSize;
  Standard_Real myOffSet;


};







#endif // _V3d_RectangularGrid_HeaderFile
