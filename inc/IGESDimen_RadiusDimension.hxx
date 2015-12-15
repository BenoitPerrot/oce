// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_RadiusDimension_HeaderFile
#define _IGESDimen_RadiusDimension_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_RadiusDimension.hxx>

#include <Handle_IGESDimen_GeneralNote.hxx>
#include <Handle_IGESDimen_LeaderArrow.hxx>
#include <Mathematics/Primitives/gp_XY.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class IGESDimen_GeneralNote;
class IGESDimen_LeaderArrow;
class gp_XY;
class gp_Pnt2d;
class gp_Pnt;


//! Defines IGES Radius Dimension, type <222> Form <0, 1>,
//! in package IGESDimen.
//! A Radius Dimension Entity consists of a General Note, a
//! leader, and an arc center point. A second form of this
//! entity accounts for the occasional need to have two
//! leader entities referenced.
class IGESDimen_RadiusDimension : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_RadiusDimension();
  
  Standard_EXPORT   void Init (const Handle(IGESDimen_GeneralNote)& aNote, const Handle(IGESDimen_LeaderArrow)& anArrow, const gp_XY& arcCenter, const Handle(IGESDimen_LeaderArrow)& anotherArrow) ;
  
  //! Allows to change Form Number
  //! (1 admits null arrow)
  Standard_EXPORT   void InitForm (const Standard_Integer form) ;
  
  //! returns the General Note entity
  Standard_EXPORT   Handle(IGESDimen_GeneralNote) Note()  const;
  
  //! returns the Leader Arrow entity
  Standard_EXPORT   Handle(IGESDimen_LeaderArrow) Leader()  const;
  
  //! returns the coordinates of the Arc Center
  Standard_EXPORT   gp_Pnt2d Center()  const;
  
  //! returns the coordinates of the Arc Center after Transformation
  //! (Z coord taken from ZDepth of Leader Entity)
  Standard_EXPORT   gp_Pnt TransformedCenter()  const;
  
  //! returns True if form is 1, False if 0
  Standard_EXPORT   Standard_Boolean HasLeader2()  const;
  
  //! returns Null handle if Form is 0
  Standard_EXPORT   Handle(IGESDimen_LeaderArrow) Leader2()  const;




  DEFINE_STANDARD_RTTI(IGESDimen_RadiusDimension)

protected:




private: 


  Handle(IGESDimen_GeneralNote) theNote;
  Handle(IGESDimen_LeaderArrow) theLeaderArrow;
  gp_XY theCenter;
  Handle(IGESDimen_LeaderArrow) theLeader2;


};







#endif // _IGESDimen_RadiusDimension_HeaderFile
