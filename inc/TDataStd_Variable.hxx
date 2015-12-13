// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Variable_HeaderFile
#define _TDataStd_Variable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_Variable.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TCollection_AsciiString.hxx>
#include <TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <TDataStd_RealEnum.hxx>
#include <Handle_TDataStd_Real.hxx>
#include <Handle_TDataStd_Expression.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Handle_TDF_DataSet.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TCollection_ExtendedString;
class TDataStd_Real;
class TDataStd_Expression;
class TCollection_AsciiString;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! Variable attribute.
//! ==================
//!
//! * A variable is  associated to a TDataStd_Real (which
//! contains its    current  value) and  a   TDataStd_Name
//! attribute (which  contains  its name).  It  contains a
//! constant flag, and a Unit
//!
//! * An  expression may  be assigned  to a variable.   In
//! thatcase the expression  is handled by the  associated
//! Expression Attribute  and the Variable returns True to
//! the method <IsAssigned>.
class TDataStd_Variable : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Find, or create, a  Variable attribute.
  //! Real methods
  //! ============
  Standard_EXPORT static   Handle(TDataStd_Variable) Set (const TDF_Label& label) ;
  
  Standard_EXPORT TDataStd_Variable();
  
  //! set or change the name  of the variable, in myUnknown
  //! and my associated Name attribute.
  Standard_EXPORT   void Name (const TCollection_ExtendedString& string) ;
  
  //! returns    string   stored  in   the  associated  Name
  //! attribute.
  Standard_EXPORT  const  TCollection_ExtendedString& Name()  const;
  
  //! retrieve or create  the associated real attribute  and
  //! set the  value  <value>.   if creation, dimension   is
  //! written.
  Standard_EXPORT   void Set (const Standard_Real value, const TDataStd_RealEnum dimension = TDataStd_SCALAR)  const;
  
  //! returns True if a Real attribute is associated.
  Standard_EXPORT   Standard_Boolean IsValued()  const;
  
  //! returns value stored in associated Real attribute.
  Standard_EXPORT   Standard_Real Get()  const;
  
  //! returns associated Real attribute.
  Standard_EXPORT   Handle(TDataStd_Real) Real()  const;
  
  //! returns True if an Expression attribute is associated.
  //! create(if doesn't exist), set and returns the assigned
  //! expression attribute.
  Standard_EXPORT   Standard_Boolean IsAssigned()  const;
  
  //! create(if  doesn't exist)  and  returns  the  assigned
  //! expression  attribute. fill it after.
  Standard_EXPORT   Handle(TDataStd_Expression) Assign()  const;
  
  //! if <me> is  assigned delete the associated  expression
  //! attribute.
  Standard_EXPORT   void Desassign()  const;
  
  //! if <me>  is  assigned, returns  associated  Expression
  //! attribute.
  Standard_EXPORT   Handle(TDataStd_Expression) Expression()  const;
  
  //! shortcut for <Real()->IsCaptured()>
  Standard_EXPORT   Standard_Boolean IsCaptured()  const;
  
  //! A constant value is not modified by regeneration.
  Standard_EXPORT   Standard_Boolean IsConstant()  const;
  
  Standard_EXPORT   void Unit (const TCollection_AsciiString& unit) ;
  
  //! to read/write fields
  //! ===================
  Standard_EXPORT  const  TCollection_AsciiString& Unit()  const;
  
  //! if  <status> is   True, this  variable  will not   be
  //! modified by the solver.
  Standard_EXPORT   void Constant (const Standard_Boolean status) ;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  //! to export reference to the associated Name attribute.
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& DS)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_Variable)

protected:




private: 


  Standard_Boolean isConstant;
  TCollection_AsciiString myUnit;


};







#endif // _TDataStd_Variable_HeaderFile
