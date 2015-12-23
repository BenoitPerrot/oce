// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveWire_HeaderFile
#define _Select3D_SensitiveWire_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Select3D_SensitiveWire.hxx>

#include <Visualization/Select3D/Select3D_SensitiveEntitySequence.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/Select3D/Select3D_SensitiveEntity.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Handle_Select3D_SensitiveEntity.hxx>
#include <Handle_Select3D_Projector.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/SelectBasics/SelectBasics_PickArgs.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class SelectBasics_EntityOwner;
class Select3D_SensitiveEntity;
class Select3D_Projector;
class SelectBasics_ListOfBox2d;
class TopLoc_Location;
class Select3D_SensitiveEntitySequence;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;


//! A framework to define selection of a wire owner by an
//! elastic wire band.
class Select3D_SensitiveWire : public Select3D_SensitiveEntity
{

public:

  
  //! Constructs a sensitive wire object defined by the
  //! owner OwnerId, and the maximum number of
  //! sensitive rectangles MaxRect.
  Standard_EXPORT Select3D_SensitiveWire(const Handle(SelectBasics_EntityOwner)& OwnerId, const Standard_Integer MaxRect = 1);
  
  //! Adds the sensitive entity aSensitive to this framework.
  Standard_EXPORT   void Add (const Handle(Select3D_SensitiveEntity)& aSensitive) ;
  
  //! projection of the sensitive primitive in order to
  //! get 2D boxes for the Sort Algorithm
  Standard_EXPORT   void Project (const Handle(Select3D_Projector)& aProjector) ;
  
  //! gives the 2D boxes which represent the segment in the
  //! selection process...
  Standard_EXPORT   void Areas (SelectBasics_ListOfBox2d& boxes) ;
  
  Standard_EXPORT   Handle(Select3D_SensitiveEntity) GetConnected (const TopLoc_Location& aLocation) ;
  
  //! returns the sensitive edges stored in this wire
  Standard_EXPORT   void GetEdges (Select3D_SensitiveEntitySequence& theEdges) ;
  
  //! propagation of location on all the sensitive inside...
  Standard_EXPORT   void SetLocation (const TopLoc_Location& aLoc) ;
  
  //! propagation of location on all the sensitive inside...
  Standard_EXPORT   void ResetLocation() ;
  
  //! Checks whether the sensitive entity matches the picking
  //! detection area (close to the picking line).
  //! For details please refer to base class declaration.
  Standard_EXPORT   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  //! returns <mymaxrect>
  Standard_EXPORT   Standard_Integer MaxBoxes()  const;
  
  Standard_EXPORT virtual   void Dump (Standard_OStream& S, const Standard_Boolean FullDump = Standard_True)  const;
  
  //! Sets the owner for all entities in wire
  Standard_EXPORT   void Set (const Handle(SelectBasics_EntityOwner)& TheOwnerId) ;
  
  //! returns <mymaxrect>
  Standard_EXPORT   Handle(Select3D_SensitiveEntity) GetLastDetected()  const;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveWire)

protected:




private: 


  Select3D_SensitiveEntitySequence mysensitive;
  Standard_Integer myDetectedIndex;


};







#endif // _Select3D_SensitiveWire_HeaderFile
