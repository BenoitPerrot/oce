// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_Group_HeaderFile
#define _IGESBasic_Group_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_Group.hxx>

#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_Standard_Transient.hxx>
class IGESData_HArray1OfIGESEntity;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class Standard_Transient;


//! defines Group, Type <402> Form <1>
//! in package IGESBasic
//! The Group Associativity allows a collection of a set
//! of entities to be maintained as a single, logical
//! entity
//!
//! Group, OrderedGroup, GroupWithoutBackP, OrderedGroupWithoutBackP
//! share the same definition (class Group), form number changes
//!
//! non Ordered, non WithoutBackP : form  1
//! non Ordered,     WithoutBackP : form  7
//! Ordered, non WithoutBackP : form 14
//! Ordered,     WithoutBackP : form 15
class IGESBasic_Group : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESBasic_Group();
  
  //! Creates a Group with a predefined count of items
  //! (which all start as null)
  Standard_EXPORT IGESBasic_Group(const Standard_Integer nb);
  
  //! This method is used to set the fields of the class Group
  //! - allEntities : Used to store pointers to members of
  //! the Group.
  Standard_EXPORT   void Init (const Handle(IGESData_HArray1OfIGESEntity)& allEntities) ;
  
  //! Sets a Group to be, or not to be  Ordered (according mode)
  Standard_EXPORT   void SetOrdered (const Standard_Boolean mode) ;
  
  //! Sets a Group to be, or not to be  WithoutBackP
  Standard_EXPORT   void SetWithoutBackP (const Standard_Boolean mode) ;
  
  //! Returns True if <me> is Ordered
  Standard_EXPORT   Standard_Boolean IsOrdered()  const;
  
  //! Returns True if <me> is WithoutBackP
  Standard_EXPORT   Standard_Boolean IsWithoutBackP()  const;
  
  //! Enforce a new value for the type and form
  Standard_EXPORT   void SetUser (const Standard_Integer type, const Standard_Integer form) ;
  
  //! Changes the count of item
  //! If greater, new items are null
  //! If lower, old items are lost
  Standard_EXPORT   void SetNb (const Standard_Integer nb) ;
  
  //! returns the number of IGESEntities in the Group
  Standard_EXPORT   Standard_Integer NbEntities()  const;
  
  //! returns the specific entity from the Group
  Standard_EXPORT   Handle(IGESData_IGESEntity) Entity (const Standard_Integer Index)  const;
  
  //! returns the specific entity from the Group
  Standard_EXPORT   Handle(Standard_Transient) Value (const Standard_Integer Index)  const;
  
  //! Sets a new value for item <Index>
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(IGESData_IGESEntity)& ent) ;




  DEFINE_STANDARD_RTTI(IGESBasic_Group)

protected:




private: 


  Handle(IGESData_HArray1OfIGESEntity) theEntities;


};







#endif // _IGESBasic_Group_HeaderFile
