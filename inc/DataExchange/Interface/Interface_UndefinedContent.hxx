// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_UndefinedContent_HeaderFile
#define _Interface_UndefinedContent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/Interface/Handle_Interface_UndefinedContent.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfInteger.hxx>
#include <DataExchange/Interface/Handle_Interface_HArray1OfHAsciiString.hxx>
#include <DataExchange/Interface/Interface_EntityList.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Interface/Interface_ParamType.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
class TColStd_HArray1OfInteger;
class Interface_HArray1OfHAsciiString;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Interface_InterfaceMismatch;
class Interface_InterfaceError;
class Standard_Transient;
class TCollection_HAsciiString;
class Interface_EntityList;
class Interface_CopyTool;


//! Defines resources for an "Undefined Entity" : such an Entity
//! is used to describe an Entity which complies with the Norm,
//! but of an Unknown Type : hence it is kept under a literal
//! form (avoiding to loose data). UndefinedContent offers a way
//! to store a list of Parameters, as literals or references to
//! other Entities
//!
//! Each Interface must provide one "UndefinedEntity", which must
//! have same basic description as all its types of entities :
//! the best way would be double inheritance : on the Entity Root
//! of the Norm and on an general "UndefinedEntity"
//!
//! While it is not possible to do so, the UndefinedEntity of each
//! Interface can define its own UndefinedEntity by INCLUDING
//! (in a field) this UndefinedContent
//!
//! Hence, for that UndefinedEntity, define a Constructor which
//! creates this UndefinedContent, plus access methods to it
//! (or to its data, calling methods defined here).
//!
//! Finally, the Protocols of each norm have to Create and
//! Recognize Unknown Entities of this norm
class Interface_UndefinedContent : public MMgt_TShared
{

public:

  
  //! Defines an empty UndefinedContent
  Standard_EXPORT Interface_UndefinedContent();
  
  //! Gives count of recorded parameters
  Standard_EXPORT   Standard_Integer NbParams()  const;
  
  //! Gives count of Literal Parameters
  Standard_EXPORT   Standard_Integer NbLiterals()  const;
  
  //! Returns data of a Parameter : its type, and the entity if it
  //! designates en entity ("ent") or its literal value else ("str")
  //! Returned value (Boolean) : True if it is an Entity, False else
  Standard_EXPORT   Standard_Boolean ParamData (const Standard_Integer num, Interface_ParamType& ptype, Handle(Standard_Transient)& ent, Handle(TCollection_HAsciiString)& val)  const;
  
  //! Returns the ParamType of a Param, given its rank
  //! Error if num is not between 1 and NbParams
  Standard_EXPORT   Interface_ParamType ParamType (const Standard_Integer num)  const;
  
  //! Returns True if a Parameter is recorded as an entity
  //! Error if num is not between 1 and NbParams
  Standard_EXPORT   Standard_Boolean IsParamEntity (const Standard_Integer num)  const;
  
  //! Returns Entity corresponding to a Param, given its rank
  Standard_EXPORT   Handle(Standard_Transient) ParamEntity (const Standard_Integer num)  const;
  
  //! Returns litteral value of a Parameter, given its rank
  Standard_EXPORT   Handle(TCollection_HAsciiString) ParamValue (const Standard_Integer num)  const;
  
  //! Manages reservation for parameters (internal use)
  //! (nb : total count of parameters, nblit : count of literals)
  Standard_EXPORT   void Reservate (const Standard_Integer nb, const Standard_Integer nblit) ;
  
  //! Adds a literal Parameter to the list
  Standard_EXPORT   void AddLiteral (const Interface_ParamType ptype, const Handle(TCollection_HAsciiString)& val) ;
  
  //! Adds a Parameter which references an Entity
  Standard_EXPORT   void AddEntity (const Interface_ParamType ptype, const Handle(Standard_Transient)& ent) ;
  
  //! Removes a Parameter given its rank
  Standard_EXPORT   void RemoveParam (const Standard_Integer num) ;
  
  //! Sets a new value for the Parameter <num>, to a literal value
  //! (if it referenced formerly an Entity, this Entity is removed)
  Standard_EXPORT   void SetLiteral (const Standard_Integer num, const Interface_ParamType ptype, const Handle(TCollection_HAsciiString)& val) ;
  
  //! Sets a new value for the Parameter <num>, to reference an
  //! Entity. To simply change the Entity, see the variant below
  Standard_EXPORT   void SetEntity (const Standard_Integer num, const Interface_ParamType ptype, const Handle(Standard_Transient)& ent) ;
  
  //! Changes the Entity referenced by the Parameter <num>
  //! (with same ParamType)
  Standard_EXPORT   void SetEntity (const Standard_Integer num, const Handle(Standard_Transient)& ent) ;
  
  //! Returns globally the list of param entities. Note that it can
  //! be used as shared entity list for the UndefinedEntity
  Standard_EXPORT   Interface_EntityList EntityList()  const;
  
  //! Copies contents of undefined entities; deigned to be called by
  //! GetFromAnother method from Undefined entity of each Interface
  //! (the basic operation is the same regardless the norm)
  Standard_EXPORT   void GetFromAnother (const Handle(Interface_UndefinedContent)& other, Interface_CopyTool& TC) ;




  DEFINE_STANDARD_RTTI(Interface_UndefinedContent)

protected:




private: 


  Standard_Integer thenbparams;
  Standard_Integer thenbstr;
  Handle(TColStd_HArray1OfInteger) theparams;
  Handle(Interface_HArray1OfHAsciiString) thevalues;
  Interface_EntityList theentities;


};







#endif // _Interface_UndefinedContent_HeaderFile
