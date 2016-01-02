// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_SensitiveEntity_HeaderFile
#define _SelectBasics_SensitiveEntity_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/SelectBasics/Handle_SelectBasics_SensitiveEntity.hxx>

#include <Visualization/SelectBasics/Handle_SelectBasics_EntityOwner.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/SelectBasics/SelectBasics_PickArgs.hxx>
#include <Visualization/SelectBasics/SelectBasics_ListOfBox2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class SelectBasics_EntityOwner;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;


//! root class ; the inheriting classes will be able to give
//! sensitive Areas for the dynamic selection algorithms
class SelectBasics_SensitiveEntity : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Set (const Handle(SelectBasics_EntityOwner)& TheOwnerId) ;
  
  Standard_EXPORT  const  Handle(SelectBasics_EntityOwner)& OwnerId()  const;
  
  //! to be implemented specifically by each type of
  //! sensitive  primitive .
  Standard_EXPORT virtual   void Areas (SelectBasics_ListOfBox2d& aresult)  = 0;
  
  //! Checks whether the sensitive entity matches the picking detection
  //! area (close to the picking line). This method takes into account depth
  //! limits produced by abstract view: far/near planes, clippings.
  //! Please port existing implementations of your picking detection, which
  //! were done at Matches (X, Y, Tol, DMin) method to this one, introducing
  //! the depth checks. Please note that the previous method is suppressed
  //! and the virtual implementations are not used by OCC selection framework.
  //! The porting procedure for simple sensitives (or if you are not interested
  //! in implementing full scale depth checks) can be simplified to writing the
  //! following code snippet:
  //! @code
  //! { // example code for porting descendants of Select3D_SensitiveEntity
  //!
  //! // invoke implementation of obsolete matches method (if implemented)...
  //! if (!Matches (thePickArgs.X(), thePickArgs.Y(), thePickArgs.Tolerance(), theMatchDMin))
  //! return Standard_False;
  //!
  //! // invoke your implementation of computing depth (if implemented)...
  //! Standard_Real aDetectDepth = ComputeDepth (thePickArgs.PickLine());
  //!
  //! return !thePickArgs.IsClipped(aDetectDepth);
  //! }
  //! @endcode
  //! @param thePickArgs [in] the picking arguments.
  //! @param theMatchDMin [out] the minimum distance on xy plane from point
  //! of picking to center of gravity of the detected sub-part of sensitive
  //! entity or the whole sensitive (e.g. used for resolving selection of
  //! coinciding circles, selection will be set to the one whose center is
  //! closest to the picking point).
  //! @param theMatchDepth [out] the minimum detected depth: depth of the
  //! closest detected sub-part of sensitive entity (or the whole sensitive).
  //! @return True if the sensitive matches the detection area.
  //! This method is an entry point for picking detection framework.
  //! The method is triggered when it is required to compose list of
  //! detected sensitive entities. The sensitives are filtered out from
  //! detection result if returned value is False. The passed entities are
  //! then can be sorted by "theDetectDist", "theDetectDepth" parameters.
  Standard_EXPORT virtual   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth)  = 0;
  
  //! returns True if the box (Xmin,YMin)------(Xmax,Ymax)
  //! contains the SensitiveEntity.
  //! Necessary for selection using elastic boxes,or segments.
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol)  = 0;
  
  //! returns True if the polyline xi,yi
  //! contains the SensitiveEntity.
  //! Necessary for selection using polyline selection
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol)  = 0;
  
  Standard_EXPORT virtual   Standard_Boolean NeedsConversion()  const = 0;
  
  //! returns True if able to give 3D information
  //! (Depth,...). See Select3D
  Standard_EXPORT virtual   Standard_Boolean Is3D()  const = 0;
  
  //! returns the max number of boxes the entity is able to give
  //! at a time
  Standard_EXPORT virtual   Standard_Integer MaxBoxes()  const = 0;
  
      void SetSensitivityFactor (const Standard_ShortReal aFactor) ;
  
  //! allows a better sensitivity for
  //! a specific entity in selection algorithms
  //! useful for small sized entities.
      Standard_ShortReal SensitivityFactor()  const;




  DEFINE_STANDARD_RTTI(SelectBasics_SensitiveEntity)

protected:

  
  Standard_EXPORT SelectBasics_SensitiveEntity(const Handle(SelectBasics_EntityOwner)& OwnerId, const Standard_ShortReal aSensitivityFactor = 1);

  Handle(SelectBasics_EntityOwner) myOwnerId;


private: 


  Standard_ShortReal mySFactor;


};


#include <Visualization/SelectBasics/SelectBasics_SensitiveEntity.lxx>





#endif // _SelectBasics_SensitiveEntity_HeaderFile
