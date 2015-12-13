// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_GeneralModifier_HeaderFile
#define _IFSelect_GeneralModifier_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_GeneralModifier.hxx>

#include <Handle_IFSelect_Selection.hxx>
#include <Handle_IFSelect_Dispatch.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class IFSelect_Selection;
class IFSelect_Dispatch;
class TCollection_AsciiString;


//! This class gives a frame for Actions which modify the effect
//! of a Dispatch, i.e. :
//! By Selections and Dispatches, an original Model can be
//! splitted into one or more "target" Models : these Models
//! contain Entities copied from the original one (that is, a
//! part of it). Basically, these dispatched Entities are copied
//! as identical to their original counterparts. Also the copied
//! Models reproduce the Header of the original one.
//!
//! Modifiers allow to change this copied content : this is the
//! way to be used for any kind of alterations, adaptations ...
//! They are exploited by a ModelCopier, which firstly performs
//! the copy operation described by Dispatches, then invokes the
//! Modifiers to work on the result.
//!
//! Each GeneralModifier can be attached to :
//! - all the Models produced
//! - a Dispatch (it will be applied to all the Models obtained
//! from this Dispatch) designated by its Ident in a ShareOut
//! - in addition, to a Selection (facultative) : this adds a
//! criterium, the Modifier is invoked on a produced Model only
//! if this Model contains an Entity copied from one of the
//! Entities designated by this Selection.
//! (for special Modifiers from IFAdapt, while they must work on
//! definite Entities, this Selection is mandatory to run)
//!
//! Remark : this class has no action attached, it only provides
//! a frame to work on criteria. Then, sub-classes will define
//! their kind of action, which can be applied at a precise step
//! of the production of a File : see Modifier, and in the
//! package IFAdapt, EntityModifier and EntityCopier
class IFSelect_GeneralModifier : public MMgt_TShared
{

public:

  
  //! Returns True if this modifier may change the graph of
  //! dependences (aknowledged at creation time)
  Standard_EXPORT   Standard_Boolean MayChangeGraph()  const;
  
  //! Attaches to a Dispatch. If <disp> is Null, Resets it
  //! (to apply the Modifier on every Dispatch)
  Standard_EXPORT   void SetDispatch (const Handle(IFSelect_Dispatch)& disp) ;
  
  //! Returns the Dispatch to be matched, Null if not set
  Standard_EXPORT   Handle(IFSelect_Dispatch) Dispatch()  const;
  
  //! Returns True if a Model obtained from the Dispatch <disp>
  //! is to be treated (apart from the Selection criterium)
  //! If Dispatch(me) is Null, returns True. Else, checks <disp>
  Standard_EXPORT   Standard_Boolean Applies (const Handle(IFSelect_Dispatch)& disp)  const;
  
  //! Sets a Selection : a Model is treated if it contains one or
  //! more Entities designated by the Selection
  Standard_EXPORT   void SetSelection (const Handle(IFSelect_Selection)& sel) ;
  
  //! Resets the Selection : this criterium is not longer active
  Standard_EXPORT   void ResetSelection() ;
  
  //! Returns True if a Selection is set as an additionnal criterium
  Standard_EXPORT   Standard_Boolean HasSelection()  const;
  
  //! Returns the Selection, or a Null Handle if not set
  Standard_EXPORT   Handle(IFSelect_Selection) Selection()  const;
  
  //! Returns a short text which defines the operation performed
  Standard_EXPORT virtual   TCollection_AsciiString Label()  const = 0;




  DEFINE_STANDARD_RTTI(IFSelect_GeneralModifier)

protected:

  
  //! Sets the Modifier criteria to default Values
  //! (i.e. "always applies")
  //! <maychangegraph> must be provided at creation time, to :
  //! - False if this GeneralModifier surely lets the graph of
  //! dependencies unchanged (NO edition of any reference, BUT
  //! also NO entity added or replaced or removed)
  //! - True if there is a possibility of changing the graph of
  //! dependencies when this modifier is applied
  Standard_EXPORT IFSelect_GeneralModifier(const Standard_Boolean maychangegraph);



private: 


  Handle(IFSelect_Selection) thesel;
  Handle(IFSelect_Dispatch) thedisp;
  Standard_Boolean thechgr;


};







#endif // _IFSelect_GeneralModifier_HeaderFile
