// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_LevelFunction_HeaderFile
#define _IGESAppli_LevelFunction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_LevelFunction.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;


//! defines LevelFunction, Type <406> Form <3>
//! in package IGESAppli
//! Used to transfer the meaning or intended use of a level
//! in the sending system
class IGESAppli_LevelFunction : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_LevelFunction();
  
  //! This method is used to set the fields of the class
  //! LevelFunction
  //! - nbPropVal    : Number of Properties, always = 2
  //! - aCode        : Function Description code
  //! default = 0
  //! - aFuncDescrip : Function Description
  //! default = null string
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Standard_Integer aCode, const Handle(TCollection_HAsciiString)& aFuncDescrip) ;
  
  //! is always 2
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the function description code . Default = 0
  Standard_EXPORT   Standard_Integer FuncDescriptionCode()  const;
  
  //! returns the function description
  //! Default = null string
  Standard_EXPORT   Handle(TCollection_HAsciiString) FuncDescription()  const;




  DEFINE_STANDARD_RTTI(IGESAppli_LevelFunction)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Integer theFuncDescripCode;
  Handle(TCollection_HAsciiString) theFuncDescrip;


};







#endif // _IGESAppli_LevelFunction_HeaderFile
