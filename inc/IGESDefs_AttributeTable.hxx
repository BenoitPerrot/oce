// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_AttributeTable_HeaderFile
#define _IGESDefs_AttributeTable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDefs_AttributeTable.hxx>

#include <Handle_TColStd_HArray2OfTransient.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Handle_IGESDefs_AttributeDef.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColStd_HArray2OfTransient;
class Standard_OutOfRange;
class Standard_NullObject;
class IGESDefs_AttributeDef;
class Standard_Transient;
class TCollection_HAsciiString;
class IGESData_IGESEntity;


//! defines IGES Attribute Table, Type <422> Form <0, 1>
//! in package IGESDefs
//! This class is used to represent an occurence of
//! Attribute Table. This Class may be independent
//! or dependent or pointed at by other Entities.
class IGESDefs_AttributeTable : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDefs_AttributeTable();
  
  //! This method is used to set the fields of the class
  //! AttributeTable
  //! - attributes : Attribute instances, created as
  //! (1,NbAttributes,1,NbRows)
  //! - NbRows = 1 is a particular case (Form 0)
  Standard_EXPORT   void Init (const Handle(TColStd_HArray2OfTransient)& attributes) ;
  
  //! Sets a Definition as Structure information
  //! (works by calling InitMisc)
  Standard_EXPORT   void SetDefinition (const Handle(IGESDefs_AttributeDef)& def) ;
  
  //! Return the Structure information in Directory Entry,
  //! casted as an AttributeDef
  Standard_EXPORT   Handle(IGESDefs_AttributeDef) Definition()  const;
  
  //! returns Number of Rows. Remark that it is always 1 if Form = 0
  //! It means that the list of Attributes (by their number, and for each
  //! one its type and ValueCount) is repeated <NbRows> times
  Standard_EXPORT   Standard_Integer NbRows()  const;
  
  //! returns Number of Attributes
  Standard_EXPORT   Standard_Integer NbAttributes()  const;
  
  //! returns the Type of an Attribute, given its No. : it is read in the
  //! Definition.
  //! (1 : Integer, 2 : Real, 3 : String, 4 : Entity, 6 : Logical)
  Standard_EXPORT   Standard_Integer DataType (const Standard_Integer Atnum)  const;
  
  //! returns the Count of Value for an Attribute, given its No. :
  //! it is read in the Definition.
  Standard_EXPORT   Standard_Integer ValueCount (const Standard_Integer Atnum)  const;
  
  Standard_EXPORT   Handle(Standard_Transient) AttributeList (const Standard_Integer Attribnum, const Standard_Integer Rownum)  const;
  
  //! Returns Attribute Value <AtNum, Rownum, rank ValNum> as an Integer
  //! Error if Indices out of Range, or no Value defined, or not an Integer
  Standard_EXPORT   Standard_Integer AttributeAsInteger (const Standard_Integer AtNum, const Standard_Integer Rownum, const Standard_Integer ValNum)  const;
  
  //! Returns Attribute Value <AtNum, Rownum, rank ValNum> as a Real
  //! Error if Indices out of Range, or no Value defined, or not a Real
  Standard_EXPORT   Standard_Real AttributeAsReal (const Standard_Integer AtNum, const Standard_Integer Rownum, const Standard_Integer ValNum)  const;
  
  //! Returns Attribute Value <AtNum, Rownum, rank ValNum> as an Integer
  Standard_EXPORT   Handle(TCollection_HAsciiString) AttributeAsString (const Standard_Integer AtNum, const Standard_Integer Rownum, const Standard_Integer ValNum)  const;
  
  //! Returns Attribute Value <AtNum, Rownum, rank ValNum> as an Entity
  //! Error if Indices out of Range, or no Value defined, or not an Entity
  Standard_EXPORT   Handle(IGESData_IGESEntity) AttributeAsEntity (const Standard_Integer AtNum, const Standard_Integer Rownum, const Standard_Integer ValNum)  const;
  
  //! Returns Attribute Value <AtNum, Rownum, rank ValNum> as a Boolean
  //! Error if Indices out of Range, or no Value defined, or not a Logical
  Standard_EXPORT   Standard_Boolean AttributeAsLogical (const Standard_Integer AtNum, const Standard_Integer Rownum, const Standard_Integer ValNum)  const;




  DEFINE_STANDARD_RTTI(IGESDefs_AttributeTable)

protected:




private: 


  Handle(TColStd_HArray2OfTransient) theAttributes;


};







#endif // _IGESDefs_AttributeTable_HeaderFile
