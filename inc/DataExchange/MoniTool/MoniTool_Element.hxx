// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_Element_HeaderFile
#define _MoniTool_Element_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/MoniTool/Handle_MoniTool_Element.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/MoniTool/MoniTool_AttrList.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class Standard_Type;
class MoniTool_AttrList;


//! a Element allows to map any kind of object as a Key for a Map.
//! This works by defining, for a Hash Code, that of the real Key,
//! not of the Element which acts only as an intermediate.
//! When a Map asks for the HashCode of a Element, this one returns
//! the code it has determined at creation time
class MoniTool_Element : public MMgt_TShared
{

public:

  
  //! Returns the HashCode which has been stored by SetHashCode
  //! (remark that HashCode could be deferred then be defined by
  //! sub-classes, the result is the same)
  Standard_EXPORT   Standard_Integer GetHashCode()  const;
  
  //! Specific testof equallity : to be defined by each sub-class,
  //! must be False if Elements have not the same true Type, else
  //! their contents must be compared
  Standard_EXPORT virtual   Standard_Boolean Equates (const Handle(MoniTool_Element)& other)  const = 0;
  
  //! Returns the Type of the Value. By default, returns the
  //! DynamicType of <me>, but can be redefined
  Standard_EXPORT virtual   Handle(Standard_Type) ValueType()  const;
  
  //! Returns the name of the Type of the Value. Default is name
  //! of ValueType, unless it is for a non-handled object
  Standard_EXPORT virtual   Standard_CString ValueTypeName()  const;
  
  //! Returns (readonly) the Attribute List
  Standard_EXPORT  const  MoniTool_AttrList& ListAttr()  const;
  
  //! Returns (modifiable) the Attribute List
  Standard_EXPORT   MoniTool_AttrList& ChangeAttr() ;




  DEFINE_STANDARD_RTTI(MoniTool_Element)

protected:

  
  //! Stores the HashCode which corresponds to the Value given to
  //! create the Mapper
  Standard_EXPORT   void SetHashCode (const Standard_Integer code) ;



private: 


  Standard_Integer thecode;
  MoniTool_AttrList theattrib;


};







#endif // _MoniTool_Element_HeaderFile
