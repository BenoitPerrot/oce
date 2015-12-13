// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_OffsetPresentation_HeaderFile
#define _DsgPrs_OffsetPresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Drawer.hxx>
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Dir;


//! A framework to define display of offsets.
class DsgPrs_OffsetPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines the display of elements showing offset shapes.
  //! These include the two points of attachment
  //! AttachmentPoint1 and AttachmentPoint1, the two
  //! directions aDirection and aDirection2, and the offset point OffsetPoint.
  //! These arguments are added to the presentation
  //! object aPresentation. Their display attributes are
  //! defined by the attribute manager aDrawer.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Pnt& AttachmentPoint1, const gp_Pnt& AttachmentPoint2, const gp_Dir& aDirection, const gp_Dir& aDirection2, const gp_Pnt& OffsetPoint) ;
  
  //! draws the representation of axes alignement Constraint
  //! between the point AttachmentPoint1 and the
  //! point AttachmentPoint2, along direction
  //! aDirection, using the offset point OffsetPoint.
  Standard_EXPORT static   void AddAxes (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Pnt& AttachmentPoint1, const gp_Pnt& AttachmentPoint2, const gp_Dir& aDirection, const gp_Dir& aDirection2, const gp_Pnt& OffsetPoint) ;




protected:





private:





};







#endif // _DsgPrs_OffsetPresentation_HeaderFile
