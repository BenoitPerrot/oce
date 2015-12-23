// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_HideData_HeaderFile
#define _DBRep_HideData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/HLRBRep/HLRBRep_ListOfBPoint.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class gp_Trsf;
class TopoDS_Shape;
class Draw_Display;
class Draw_Color;


//! This  class stores all the informations concerning
//! hidden lines on a view.
//!
//! * View number
//! * Matrix of projection
//! * Type of projection, focal
//! * Arrays of 3d points
//!
//! A drawable shape contains a  list of such  objects
//! to store  the  hidden lines  for  each view.   The
//! IsSame method is  used  to check if   hidden lines
//! must be recompiled.
class DBRep_HideData 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT DBRep_HideData();
  
  //! ViewId is the view number
  //! TProj the projection
  //! Focal <= 0 means parallel projection
  //! Alg : the hidden lines
  Standard_EXPORT   void Set (const Standard_Integer ViewId, const gp_Trsf& TProj, const Standard_Real Focal, const TopoDS_Shape& S, const Standard_Real ang) ;
  
      Standard_Integer ViewId()  const;
  
      Standard_Real Angle()  const;
  
  //! Returns True if the projection is the same
  Standard_EXPORT   Standard_Boolean IsSame (const gp_Trsf& TProj, const Standard_Real Focla)  const;
  
  Standard_EXPORT   void DrawOn (Draw_Display& D, const Standard_Boolean withRg1, const Standard_Boolean withRgN, const Standard_Boolean withHid, const Draw_Color& VisCol, const Draw_Color& HidCol) ;
  
  //! Returns the subshape touched by the last pick.
  Standard_EXPORT  const  TopoDS_Shape& LastPick()  const;




protected:





private:



  Standard_Integer myView;
  gp_Trsf myTrsf;
  Standard_Real myFocal;
  HLRBRep_ListOfBPoint myBiPntVis;
  HLRBRep_ListOfBPoint myBiPntHid;
  TopoDS_Shape myPickShap;
  Standard_Real myAngle;


};


#include <DBRep_HideData.lxx>





#endif // _DBRep_HideData_HeaderFile
