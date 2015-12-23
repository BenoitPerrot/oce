// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Expression_HeaderFile
#define _TDataStd_Expression_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_Expression.hxx>

#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/TDF/TDF_AttributeList.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TCollection_ExtendedString;
class TDF_AttributeList;
class TDF_Attribute;
class TDF_RelocationTable;


//! Expression attribute.
//! ====================
//!
//! * Data Structure  of the Expression   is stored in a
//! string and references to variables used by the string
//!
//! Warning:  To be consistent,  each  Variable  referenced by  the
//! expression must have its equivalent in the string
class TDataStd_Expression : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Find, or create, an Expression attribute.
  //! Expressionmethods
  //! ============
  Standard_EXPORT static   Handle(TDataStd_Expression) Set (const TDF_Label& label) ;
  
  Standard_EXPORT TDataStd_Expression();
  
  //! build and return the expression name
  Standard_EXPORT   TCollection_ExtendedString Name()  const;
  
  Standard_EXPORT   void SetExpression (const TCollection_ExtendedString& E) ;
  
  Standard_EXPORT  const  TCollection_ExtendedString& GetExpression()  const;
  
  Standard_EXPORT   TDF_AttributeList& GetVariables() ;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_Expression)

protected:




private: 


  TCollection_ExtendedString myExpression;
  TDF_AttributeList myVariables;


};







#endif // _TDataStd_Expression_HeaderFile
