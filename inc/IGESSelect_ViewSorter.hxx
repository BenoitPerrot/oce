// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_ViewSorter_HeaderFile
#define _IGESSelect_ViewSorter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_ViewSorter.hxx>

#include <Handle_IGESData_IGESModel.hxx>
#include <TColStd_IndexedMapOfTransient.hxx>
#include <TColStd_SequenceOfInteger.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IFSelect_PacketList.hxx>
class IGESData_IGESModel;
class Standard_Transient;
class IGESData_IGESEntity;
class TColStd_HSequenceOfTransient;
class Interface_InterfaceModel;
class Interface_Graph;
class IFSelect_PacketList;


//! Sorts IGES Entities on the views and drawings.
//! In a first step, it splits a set of entities according the
//! different views they are attached to.
//! Then, packets according single views (+ drawing frames), or
//! according drawings (which refer to the views) can be determined
//!
//! It is a TShared, hence it can be a workomg field of a non-
//! mutable object (a Dispatch for instance)
class IGESSelect_ViewSorter : public MMgt_TShared
{

public:

  
  //! Creates a ViewSorter, empty. SetModel remains to be called
  Standard_EXPORT IGESSelect_ViewSorter();
  
  //! Sets the Model (for PacketList)
  Standard_EXPORT   void SetModel (const Handle(IGESData_IGESModel)& model) ;
  
  //! Clears recorded data
  Standard_EXPORT   void Clear() ;
  
  //! Adds an item according its type : AddEntity,AddList,AddModel
  Standard_EXPORT   Standard_Boolean Add (const Handle(Standard_Transient)& ent) ;
  
  //! Adds an IGES entity. Records the view it is attached to.
  //! Records directly <ent> if it is a ViewKindEntity or a Drawing
  //! Returns True if added, False if already in the map
  Standard_EXPORT   Standard_Boolean AddEntity (const Handle(IGESData_IGESEntity)& igesent) ;
  
  //! Adds a list of entities by adding each of the items
  Standard_EXPORT   void AddList (const Handle(TColStd_HSequenceOfTransient)& list) ;
  
  //! Adds all the entities contained in a Model
  Standard_EXPORT   void AddModel (const Handle(Interface_InterfaceModel)& model) ;
  
  //! Returns the count of already recorded
  Standard_EXPORT   Standard_Integer NbEntities()  const;
  
  //! Prepares the result to keep only sets attached to Single Views
  //! If <alsoframes> is given True, it keeps also the Drawings as
  //! specific sets, in order to get their frames.
  //! Entities attached to no single view are put in Remaining List.
  //!
  //! Result can then be read by the methods NbSets,SetItem,SetList,
  //! RemainingList(final = True)
  Standard_EXPORT   void SortSingleViews (const Standard_Boolean alsoframes) ;
  
  //! Prepares the result to the sets attached to Drawings :
  //! All the single views referenced by a Drawing become bound to
  //! the set for this Drawing
  //!
  //! Entities or Views which correspond to no Drawing are put into
  //! the Remaining List.
  //!
  //! Result can then be read by the methods NbSets,SetItem,SetList,
  //! RemainingList(final = True)
  Standard_EXPORT   void SortDrawings (const Interface_Graph& G) ;
  
  //! Returns the count of sets recorded, one per distinct item.
  //! The Remaining List is not counted.
  //! If <final> is False, the sets are attached to distinct views
  //! determined by the method Add.
  //! If <final> is True, they are the sets determined by the last
  //! call to, either SortSingleViews, or SortDrawings.
  //!
  //! Warning : Drawings directly recorded are also counted as sets, because
  //! of their Frame (which is made of Annotations)
  Standard_EXPORT   Standard_Integer NbSets (const Standard_Boolean final)  const;
  
  //! Returns the Item which is attached to a set of entities
  //! For <final> and definition of sets, see method NbSets.
  //! This item can be a kind of View or a Drawing
  Standard_EXPORT   Handle(IGESData_IGESEntity) SetItem (const Standard_Integer num, const Standard_Boolean final)  const;
  
  //! Returns the complete content of the determined Sets, which
  //! include Duplicated and Remaining (duplication 0) lists
  //! For <final> and definition of sets, see method NbSets.
  Standard_EXPORT   Handle(IFSelect_PacketList) Sets (const Standard_Boolean final)  const;




  DEFINE_STANDARD_RTTI(IGESSelect_ViewSorter)

protected:




private: 


  Handle(IGESData_IGESModel) themodel;
  TColStd_IndexedMapOfTransient themap;
  TColStd_IndexedMapOfTransient theitems;
  TColStd_IndexedMapOfTransient thefinals;
  TColStd_SequenceOfInteger theinditem;
  TColStd_SequenceOfInteger theindfin;


};







#endif // _IGESSelect_ViewSorter_HeaderFile
