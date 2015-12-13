// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_IdenticPresentation_HeaderFile
#define _DsgPrs_IdenticPresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Drawer.hxx>
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Ax2;
class gp_Elips;



class DsgPrs_IdenticPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! draws a line between <aPntAttach> and
  //! <aPntOffset>.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Pnt& aPntAttach, const gp_Pnt& aPntOffset) ;
  
  //! draws the 'identic' presentation by
  //! drawing a line between <aFAttach> and
  //! <aSAttach> , and a linkimg segment
  //! between <aPntOffset> and its projection
  //! on the precedent line.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Pnt& aFAttach, const gp_Pnt& aSAttach, const gp_Pnt& aPntOffset) ;
  
  //! draws the 'identic' presentation in the case of
  //! circles : draws an arc of circle between
  //! <aFAttach> and <aSAttach> of center <aCenter>
  //! and of radius dist(aCenter, aFAttach), and
  //! draws a segment between <aPntOffset> and
  //! its projection on the arc.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Ax2& aAx2, const gp_Pnt& aCenter, const gp_Pnt& aFAttach, const gp_Pnt& aSAttach, const gp_Pnt& aPntOffset) ;
  
  //! draws the 'identic' presentation in the case of
  //! circles : draws an arc of circle between
  //! <aFAttach> and <aSAttach> of center <aCenter>
  //! and of radius dist(aCenter, aFAttach), and
  //! draws a segment between <aPntOffset> and <aPntOnCirc>
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Ax2& aAx2, const gp_Pnt& aCenter, const gp_Pnt& aFAttach, const gp_Pnt& aSAttach, const gp_Pnt& aPntOffset, const gp_Pnt& aPntOnCirc) ;
  
  //! draws the 'identic' presentation in the case of
  //! ellipses: draws an arc of the anEllipse
  //! between <aFAttach> and <aSAttach> and
  //! draws a segment between <aPntOffset> and <aPntOnElli>
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const TCollection_ExtendedString& aText, const gp_Elips& anEllipse, const gp_Pnt& aFAttach, const gp_Pnt& aSAttach, const gp_Pnt& aPntOffset, const gp_Pnt& aPntOnElli) ;




protected:





private:





};







#endif // _DsgPrs_IdenticPresentation_HeaderFile
