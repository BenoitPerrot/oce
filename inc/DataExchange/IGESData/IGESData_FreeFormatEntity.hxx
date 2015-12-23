// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_FreeFormatEntity_HeaderFile
#define _IGESData_FreeFormatEntity_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESData_FreeFormatEntity.hxx>

#include <Handle_TColStd_HSequenceOfInteger.hxx>
#include <DataExchange/IGESData/IGESData_UndefinedEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Interface/Interface_ParamType.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
class TColStd_HSequenceOfInteger;
class Standard_OutOfRange;
class Interface_InterfaceError;
class IGESData_IGESEntity;
class TCollection_HAsciiString;
class IGESData_HArray1OfIGESEntity;
class IGESData_IGESWriter;


//! This class allows to create IGES Entities in a literal form :
//! their definition is free, but they are not recognized as
//! instances of specific classes.
//!
//! This is a way to define test files without having to create
//! and fill specific classes of Entities, or creating an IGES
//! File ex nihilo, with respect for all format constraints
//! (such a way is very difficult to run and to master).
//!
//! This class has the same content as an UndefinedEntity, only
//! it gives way to act on its content
class IGESData_FreeFormatEntity : public IGESData_UndefinedEntity
{

public:

  
  //! Creates a completely empty FreeFormatEntity
  Standard_EXPORT IGESData_FreeFormatEntity();
  
  //! Sets Type Number to a new Value, and Form Number to Zero
  Standard_EXPORT   void SetTypeNumber (const Standard_Integer typenum) ;
  
  //! Sets Form Number to a new Value (to called after SetTypeNumber)
  Standard_EXPORT   void SetFormNumber (const Standard_Integer formnum) ;
  
  //! Gives count of recorded parameters
  Standard_EXPORT   Standard_Integer NbParams()  const;
  
  //! Returns data of a Parameter : its type, and the entity if it
  //! designates en entity ("ent") or its literal value else ("str")
  //! Returned value (Boolean) : True if it is an Entity, False else
  Standard_EXPORT   Standard_Boolean ParamData (const Standard_Integer num, Interface_ParamType& ptype, Handle(IGESData_IGESEntity)& ent, Handle(TCollection_HAsciiString)& val)  const;
  
  //! Returns the ParamType of a Param, given its rank
  //! Error if num is not between 1 and NbParams
  Standard_EXPORT   Interface_ParamType ParamType (const Standard_Integer num)  const;
  
  //! Returns True if a Parameter is recorded as an entity
  //! Error if num is not between 1 and NbParams
  Standard_EXPORT   Standard_Boolean IsParamEntity (const Standard_Integer num)  const;
  
  //! Returns Entity corresponding to a Param, given its rank
  //! Error if out of range or if Param num does not designate
  //! an Entity
  Standard_EXPORT   Handle(IGESData_IGESEntity) ParamEntity (const Standard_Integer num)  const;
  
  //! Returns True if <num> is noted as for a "Negative Pointer"
  //! (see AddEntity for details). Senseful only if IsParamEntity
  //! answers True for <num>, else returns False.
  Standard_EXPORT   Standard_Boolean IsNegativePointer (const Standard_Integer num)  const;
  
  //! Returns litteral value of a Parameter, given its rank
  //! Error if num is out of range, or if Parameter is not literal
  Standard_EXPORT   Handle(TCollection_HAsciiString) ParamValue (const Standard_Integer num)  const;
  
  //! Returns the complete list of Ramks of Parameters which have
  //! been noted as Negative Pointers
  //! Warning : It is returned as a Null Handle if none was noted
  Standard_EXPORT   Handle(TColStd_HSequenceOfInteger) NegativePointers()  const;
  
  //! Adds a literal Parameter to the list (as such)
  Standard_EXPORT   void AddLiteral (const Interface_ParamType ptype, const Handle(TCollection_HAsciiString)& val) ;
  
  //! Adds a literal Parameter to the list (builds an HAsciiString)
  Standard_EXPORT   void AddLiteral (const Interface_ParamType ptype, const Standard_CString val) ;
  
  //! Adds a Parameter which references an Entity. If the Entity is
  //! Null, the added parameter will define a "Null Pointer" (0)
  //! If <negative> is given True, this will command Sending to File
  //! (see IGESWriter) to produce a "Negative Pointer"
  //! (Default is False)
  Standard_EXPORT   void AddEntity (const Interface_ParamType ptype, const Handle(IGESData_IGESEntity)& ent, const Standard_Boolean negative = Standard_False) ;
  
  //! Adds a set of Entities, given as a HArray1OfIGESEntity
  //! Causes creation of : an Integer Parameter which gives count
  //! of Entities, then the list of Entities of the Array
  //! Error if an Entity is not an IGESEntity
  //! All these Entities will be interpreted as "Positive Pointers"
  //! by IGESWriter
  Standard_EXPORT   void AddEntities (const Handle(IGESData_HArray1OfIGESEntity)& ents) ;
  
  //! Adds a list of Ranks of Parameters to be noted as Negative
  //! Pointers (this will be taken into account for Parameters
  //! which are Entities)
  Standard_EXPORT   void AddNegativePointers (const Handle(TColStd_HSequenceOfInteger)& list) ;
  
  //! Clears all informations about Negative Pointers, hence every
  //! Entity kind Parameter will be send normally, as Positive
  Standard_EXPORT   void ClearNegativePointers() ;
  
  //! WriteOwnParams is redefined for FreeFormatEntity to take
  //! into account the supplementary information "Negative Pointer"
  Standard_EXPORT virtual   void WriteOwnParams (IGESData_IGESWriter& IW)  const;




  DEFINE_STANDARD_RTTI(IGESData_FreeFormatEntity)

protected:




private: 


  Handle(TColStd_HSequenceOfInteger) thenegptrs;


};







#endif // _IGESData_FreeFormatEntity_HeaderFile
