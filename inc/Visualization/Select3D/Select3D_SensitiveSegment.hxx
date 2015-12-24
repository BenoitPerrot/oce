// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveSegment_HeaderFile
#define _Select3D_SensitiveSegment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/Select3D/Handle_Select3D_SensitiveSegment.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/Select3D/Select3D_Pnt.hxx>
#include <Visualization/Select3D/Select3D_Pnt2d.hxx>
#include <Visualization/Select3D/Select3D_SensitiveEntity.hxx>
#include <Visualization/SelectBasics/Handle_SelectBasics_EntityOwner.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Visualization/Select3D/Handle_Select3D_Projector.hxx>
#include <Visualization/Select3D/Handle_Select3D_SensitiveEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/SelectBasics/SelectBasics_PickArgs.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class SelectBasics_EntityOwner;
class gp_Pnt;
class Select3D_Projector;
class SelectBasics_ListOfBox2d;
class Select3D_SensitiveEntity;
class TopLoc_Location;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class gp_Lin;


//! A framework to define sensitive zones along a segment
//! One gives the 3D start and end point;
//! the maximum number of 2D boxes given
//! by this entity may be set by the user
//! if the projected segment is
//! vertical or horizontal, one needs only 1 box.
//! for a pi/4 angle -> MaxNumber 2D boxes
class Select3D_SensitiveSegment : public Select3D_SensitiveEntity
{

public:

  
  //! Constructs the sensitive segment object defined by
  //! the owner OwnerId, the points FirstP, LastP and the
  //! maximum number of sensitive bounding boxes MaxRect.
  Standard_EXPORT Select3D_SensitiveSegment(const Handle(SelectBasics_EntityOwner)& OwnerId, const gp_Pnt& FirstP, const gp_Pnt& LastP, const Standard_Integer MaxRect = 1);
  
  //! Sets the maximum number of sensitive rectangles MaxRect.
      void Set (const Standard_Integer MaxRect) ;
  
  //! changes the start Point of the Segment;
      void StartPoint (const gp_Pnt& aPt) ;
  
  //! changes the end point of the segment
      void EndPoint (const gp_Pnt& aPt) ;
  
  //! gives the 3D start Point of the Segment
      gp_Pnt StartPoint()  const;
  
  //! gives the 3D End Point of the Segment
      gp_Pnt EndPoint()  const;
  
  //! gives the 3D start Point of the Segment
      gp_Pnt2d StartPoint2d()  const;
  
  //! gives the 3D End Point of the Segment
      gp_Pnt2d EndPoint2d()  const;
  
  //! projection of the sensitive primitive in order to
  //! get 2D boxes for the Sort Algorithm
  Standard_EXPORT virtual   void Project (const Handle(Select3D_Projector)& aProjector) ;
  
  //! gives the 2D boxes which represent the segment in the
  //! selection process...
  Standard_EXPORT   void Areas (SelectBasics_ListOfBox2d& boxes) ;
  
  Standard_EXPORT   Handle(Select3D_SensitiveEntity) GetConnected (const TopLoc_Location& aLocation) ;
  
  //! Checks whether the sensitive entity matches the picking
  //! detection area (close to the picking line).
  //! For details please refer to base class declaration.
  Standard_EXPORT   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  Standard_EXPORT   Standard_Real ComputeDepth (const gp_Lin& EyeLine)  const;
  
  //! returns <mymaxrect>
      Standard_Integer MaxBoxes()  const;
  
  Standard_EXPORT virtual   void Dump (Standard_OStream& S, const Standard_Boolean FullDump = Standard_True)  const;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveSegment)

protected:




private: 


  Standard_Integer mymaxrect;
  Select3D_Pnt mystart;
  Select3D_Pnt myend;
  Select3D_Pnt2d myprojstart;
  Select3D_Pnt2d myprojend;


};


#include <Visualization/Select3D/Select3D_SensitiveSegment.lxx>





#endif // _Select3D_SensitiveSegment_HeaderFile
