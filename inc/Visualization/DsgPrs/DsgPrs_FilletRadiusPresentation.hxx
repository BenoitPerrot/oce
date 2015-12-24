// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_FilletRadiusPresentation_HeaderFile
#define _DsgPrs_FilletRadiusPresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Visualization/Prs3d/Handle_Prs3d_Presentation.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_Drawer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Visualization/DsgPrs/DsgPrs_ArrowSide.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Geom/Handle_Geom_TrimmedCurve.hxx>
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Dir;
class Geom_TrimmedCurve;


//! A framework for displaying radii of fillets.
class DsgPrs_FilletRadiusPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adds a display of the radius of a fillet to the
  //! presentation aPresentation. The display ttributes
  //! defined by the attribute manager aDrawer. the value
  //! specifies the length of the radius.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const Standard_Real thevalue, const TCollection_ExtendedString& aText, const gp_Pnt& aPosition, const gp_Dir& aNormalDir, const gp_Pnt& aBasePnt, const gp_Pnt& aFirstPoint, const gp_Pnt& aSecondPoint, const gp_Pnt& aCenter, const DsgPrs_ArrowSide ArrowPrs, const Standard_Boolean drawRevers, gp_Pnt& DrawPosition, gp_Pnt& EndOfArrow, Handle(Geom_TrimmedCurve)& TrimCurve, Standard_Boolean& HasCircle) ;




protected:





private:





};







#endif // _DsgPrs_FilletRadiusPresentation_HeaderFile
