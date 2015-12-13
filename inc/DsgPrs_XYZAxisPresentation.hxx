// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_XYZAxisPresentation_HeaderFile
#define _DsgPrs_XYZAxisPresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_LineAspect.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_Prs3d_ArrowAspect.hxx>
#include <Handle_Prs3d_TextAspect.hxx>
class Prs3d_Presentation;
class Prs3d_LineAspect;
class gp_Dir;
class gp_Pnt;
class Prs3d_ArrowAspect;
class Prs3d_TextAspect;


//! A framework for displaying the axes of an XYZ trihedron.
class DsgPrs_XYZAxisPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Draws each axis of a trihedron displayed in the
  //! presentation aPresentation and with lines shown by
  //! the values of aLineAspect. Each axis is defined by:
  //! -   the first and last points aPfirst and aPlast
  //! -   the direction aDir and
  //! -   the value aVal which provides a value for length.
  //! The value for length is provided so that the trihedron
  //! can vary in length relative to the scale of shape display.
  //! Each axis will be identified as X, Y, or Z by the text aText.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_LineAspect)& anLineAspect, const gp_Dir& aDir, const Standard_Real aVal, const Standard_CString aText, const gp_Pnt& aPfirst, const gp_Pnt& aPlast) ;
  
  //! draws the presentation X ,Y ,Z axis
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_LineAspect)& aLineAspect, const Handle(Prs3d_ArrowAspect)& anArrowAspect, const Handle(Prs3d_TextAspect)& aTextAspect, const gp_Dir& aDir, const Standard_Real aVal, const Standard_CString aText, const gp_Pnt& aPfirst, const gp_Pnt& aPlast) ;




protected:





private:





};







#endif // _DsgPrs_XYZAxisPresentation_HeaderFile
