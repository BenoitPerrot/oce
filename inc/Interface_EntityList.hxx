// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_EntityList_HeaderFile
#define _Interface_EntityList_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Standard_Type.hxx>
class Standard_Transient;
class Standard_OutOfRange;
class Interface_InterfaceError;
class Standard_NullObject;
class Interface_EntityIterator;
class Standard_Type;


//! This class defines a list of Entities (Transient Objects),
//! it can be used as a field of other Transient classes, with
//! these features :
//! - oriented to define a little list, that is, slower than an
//! Array or a Map of Entities for a big count (about 100 and
//! over), but faster than a Sequence
//! - allows to work as a Sequence, limited to Clear, Append,
//! Remove, Access to an Item identified by its rank in the list
//! - space saving, compared to a Sequence, especially for little
//! amounts; better than an Array for a very little amount (less
//! than 10) but less good for a greater amount
//!
//! Works in conjunction with EntityCluster
//! An EntityList gives access to a list of Entity Clusters, which
//! are chained (in one sense : Single List)
//! Remark : a new Item may not be Null, because this is the
//! criterium used for "End of List"
class Interface_EntityList 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a List as beeing empty
  Standard_EXPORT Interface_EntityList();
  
  //! Clears the List
  Standard_EXPORT   void Clear() ;
  
  //! Appends an Entity, that is to the END of the list
  //! (keeps order, but works slowerly than Add, see below)
  Standard_EXPORT   void Append (const Handle(Standard_Transient)& ent) ;
  
  //! Adds an Entity to the list, that is, with NO REGARD about the
  //! order (faster than Append if count becomes greater than 10)
  Standard_EXPORT   void Add (const Handle(Standard_Transient)& ent) ;
  
  //! Removes an Entity from the list, if it is there
  Standard_EXPORT   void Remove (const Handle(Standard_Transient)& ent) ;
  
  //! Removes an Entity from the list, given its rank
  Standard_EXPORT   void Remove (const Standard_Integer num) ;
  
  //! Returns True if the list is empty
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  //! Returns count of recorded Entities
  Standard_EXPORT   Standard_Integer NbEntities()  const;
  
  //! Returns an Item given its number. Beware about the way the
  //! list was filled (see above, Add and Append)
  Standard_EXPORT  const  Handle(Standard_Transient)& Value (const Standard_Integer num)  const;
  
  //! Returns an Item given its number. Beware about the way the
  //! list was filled (see above, Add and Append)
  Standard_EXPORT   void SetValue (const Standard_Integer num, const Handle(Standard_Transient)& ent) ;
  
  //! fills an Iterator with the content of the list
  //! (normal way to consult a list which has been filled with Add)
  Standard_EXPORT   void FillIterator (Interface_EntityIterator& iter)  const;
  
  //! Returns count of Entities of a given Type (0 : none)
  Standard_EXPORT   Standard_Integer NbTypedEntities (const Handle(Standard_Type)& atype)  const;
  
  //! Returns the Entity which is of a given type.
  //! If num = 0 (D), there must be ONE AND ONLY ONE
  //! If num > 0, returns the num-th entity of this type
  Standard_EXPORT   Handle(Standard_Transient) TypedEntity (const Handle(Standard_Type)& atype, const Standard_Integer num = 0)  const;




protected:





private:



  Handle(Standard_Transient) theval;


};







#endif // _Interface_EntityList_HeaderFile
