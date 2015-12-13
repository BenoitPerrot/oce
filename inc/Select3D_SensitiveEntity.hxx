// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveEntity_HeaderFile
#define _Select3D_SensitiveEntity_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Select3D_SensitiveEntity.hxx>

#include <SelectBasics_SensitiveEntity.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Select3D_Projector.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class SelectBasics_EntityOwner;
class Select3D_Projector;
class TopLoc_Location;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;


//! Abstract framework to define 3D sensitive entities.
//! As the selection process uses the principle of a
//! projection of 3D shapes onto a 2D view where
//! nearness to a rectangle determines whether a shape
//! is picked or not, all 3D shapes need to be converted
//! into 2D ones in order to be selected.
class Select3D_SensitiveEntity : public SelectBasics_SensitiveEntity
{

public:

  
  //! Returns true if this framework needs conversion.
      Standard_Boolean NeedsConversion()  const;
  
  //! Returns true if this framework provides 3D information.
  Standard_EXPORT   Standard_Boolean Is3D()  const;
  
  //! In classes inheriting this framework, you must
  //! redefine this function in order to get a sensitive 2D
  //! rectangle from a 3D entity. This rectangle is the
  //! sensitive zone which makes the 3D entity selectable.
  Standard_EXPORT virtual   void Project (const Handle(Select3D_Projector)& aProjector)  = 0;
  
  //! Returns the max number of sensitive areas returned
  //! by this class is 1 by default.
  //! Else on must redefine this method.
  Standard_EXPORT virtual   Standard_Integer MaxBoxes()  const;
  
  //! Originally this method intended to return sensitive
  //! entity with new location aLocation, but currently sensitive
  //! entities do not hold a location, instead HasLocation() and
  //! Location() methods call corresponding entity owner's methods.
  //! Thus all entities returned by GetConnected() share the same
  //! location propagated from corresponding selectable object.
  //! You must redefine this function for any type of
  //! sensitive entity which can accept another connected
  //! sensitive entity.//can be connected to another sensitive entity.
  Standard_EXPORT virtual   Handle(Select3D_SensitiveEntity) GetConnected (const TopLoc_Location& aLocation) ;
  
  //! Matches the box defined by the coordinates Xmin,
  //! Ymin, Xmax, Ymax with the entity found at that point
  //! within the tolerance aTol.
  //! Xmin, YMin define the minimum point in the lower left
  //! hand corner of the box, and   XMax, YMax define the
  //! maximum point in the upper right hand corner of the box.
  //! You must redefine this function for every inheriting entity.
  //! You will have to call this framework inside the redefined function.
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  //! prevents from hiding virtual methods...
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  //! Returns true if this framework has a location defined.
  Standard_EXPORT virtual   Standard_Boolean HasLocation()  const;
  
  Standard_EXPORT virtual  const  TopLoc_Location Location()  const;
  
  //! sets the location to Identity
  Standard_EXPORT virtual   void ResetLocation() ;
  
  Standard_EXPORT virtual   void SetLocation (const TopLoc_Location& aLoc) ;
  
  //! 2 options :
  //! <FullDump> = False -> general information
  //! <FullDump> = True  -> whole informtion 3D +2d ...
  Standard_EXPORT virtual   void Dump (Standard_OStream& S, const Standard_Boolean FullDump = Standard_True)  const;
  
  Standard_EXPORT static   void DumpBox (Standard_OStream& S, const Bnd_Box2d& abox) ;
  
  Standard_EXPORT   void UpdateLocation (const TopLoc_Location& aLoc) ;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveEntity)

protected:

  
  Standard_EXPORT Select3D_SensitiveEntity(const Handle(SelectBasics_EntityOwner)& OwnerId);



private: 




};


#include <Select3D_SensitiveEntity.lxx>





#endif // _Select3D_SensitiveEntity_HeaderFile
