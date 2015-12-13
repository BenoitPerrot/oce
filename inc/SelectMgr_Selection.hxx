// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_Selection_HeaderFile
#define _SelectMgr_Selection_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_SelectMgr_Selection.hxx>

#include <SelectBasics_ListOfSensitive.hxx>
#include <SelectBasics_ListIteratorOfListOfSensitive.hxx>
#include <Standard_Integer.hxx>
#include <SelectMgr_TypeOfUpdate.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_SelectBasics_SensitiveEntity.hxx>
#include <Standard_Boolean.hxx>
class Standard_NullObject;
class SelectBasics_SensitiveEntity;


//! Represents the state of a given selection mode for a
//! Selectable Object. Contains all the sensitive entities available for this mode.
//! An interactive object can have an indefinite number of
//! modes of selection, each representing a
//! "decomposition" into sensitive primitives; each
//! primitive has an Owner (SelectMgr_EntityOwner)
//! which allows us to identify the exact entity which has
//! been detected. Each Selection mode is identified by
//! an index. The set of sensitive primitives which
//! correspond to a given mode is stocked in a
//! SelectMgr_Selection object. By Convention, the
//! default selection mode which allows us to grasp the
//! Interactive object in its entirety will be mode 0.
//! AIS_Trihedron : 4 selection modes
//! -   mode 0 : selection of a trihedron
//! -   mode 1 : selection of the origin of the trihedron
//! -   mode 2 : selection of the axes
//! -   mode 3 : selection of the planes XOY, YOZ, XOZ
//! when you activate one of modes 1 2 3 4 , you pick AIS objects of type:
//! -   AIS_Point
//! -   AIS_Axis (and information on the type of axis)
//! -   AIS_Plane (and information on the type of plane).
//! AIS_PlaneTrihedron offers 3 selection modes:
//! -   mode 0 : selection of the whole trihedron
//! -   mode 1 : selection of the origin of the trihedron
//! -   mode 2 : selection of the axes - same remarks as for the Trihedron.
//! AIS_Shape : 7 maximum selection modes, depending
//! on the complexity of the shape :
//! -   mode 0 : selection of the AIS_Shape
//! -   mode 1 : selection of the vertices
//! -   mode 2 : selection of the edges
//! -   mode 3 : selection of the wires
//! -   mode 4 : selection of the faces
//! -   mode 5 : selection of the shells
//! -   mode 6 :   selection of the constituent solids.
class SelectMgr_Selection : public MMgt_TShared
{

public:

  
  //! Constructs a selection object defined by the selection mode IdMode.
  //! The default setting 0 is the selection mode for a shape in its entirety.
  Standard_EXPORT SelectMgr_Selection(const Standard_Integer IdMode = 0);
  
  Standard_EXPORT   void Destroy() ;
~SelectMgr_Selection()
{
  Destroy();
}
  
  //! Adds the sensitive primitive aprimitive to the list of
  //! stored entities in this object.
  //! Raises NullObject if the primitive is a null handle.
  Standard_EXPORT   void Add (const Handle(SelectBasics_SensitiveEntity)& aprimitive) ;
  
  //! empties the selection from all the stored entities
  Standard_EXPORT   void Clear() ;
  
  //! returns true if no sensitive entity is stored.
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  //! returns the selection mode represented by this selection
      Standard_Integer Mode()  const;
  
  //! Begins an iteration scanning for sensitive primitives.
      void Init() ;
  
  //! Continues the iteration scanning for sensitive
  //! primitives with the mode defined in this framework.
      Standard_Boolean More()  const;
  
  //! Returns the next sensitive primitive found in the
  //! iteration. This is a scan for entities with the mode
  //! defined in this framework.
      void Next() ;
  
  //! Returns any sensitive primitive in this framework.
     const  Handle(SelectBasics_SensitiveEntity)& Sensitive()  const;
  
  //! Returns the flag UpdateFlag.
  //! This flage gives the update status of this framework
  //! in a ViewerSelector object:
  //! -   full
  //! -   partial, or
  //! -   none.
      SelectMgr_TypeOfUpdate UpdateStatus()  const;
  
      void UpdateStatus (const SelectMgr_TypeOfUpdate UpdateFlag) ;



  DEFINE_STANDARD_RTTI(SelectMgr_Selection)

protected:




private: 


  SelectBasics_ListOfSensitive myentities;
  SelectBasics_ListIteratorOfListOfSensitive myit;
  Standard_Integer myMode;
  SelectMgr_TypeOfUpdate myUpdateStatus;


};


#include <SelectMgr_Selection.lxx>





#endif // _SelectMgr_Selection_HeaderFile
