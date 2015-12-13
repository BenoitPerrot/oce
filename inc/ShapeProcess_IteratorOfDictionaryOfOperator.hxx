// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeProcess_IteratorOfDictionaryOfOperator_HeaderFile
#define _ShapeProcess_IteratorOfDictionaryOfOperator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_ShapeProcess_DictionaryOfOperator.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Handle_ShapeProcess_StackItemOfDictionaryOfOperator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_ShapeProcess_Operator.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class ShapeProcess_DictionaryOfOperator;
class ShapeProcess_StackItemOfDictionaryOfOperator;
class Standard_NoSuchObject;
class ShapeProcess_Operator;
class TCollection_AsciiString;



class ShapeProcess_IteratorOfDictionaryOfOperator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeProcess_IteratorOfDictionaryOfOperator(const Handle(ShapeProcess_DictionaryOfOperator)& acell);
  
  Standard_EXPORT ShapeProcess_IteratorOfDictionaryOfOperator(const Handle(ShapeProcess_DictionaryOfOperator)& acell, const Standard_CString basename);
  
  Standard_EXPORT ShapeProcess_IteratorOfDictionaryOfOperator(const Handle(ShapeProcess_DictionaryOfOperator)& acell, const TCollection_AsciiString& basename);
  
  Standard_EXPORT   void Start() ;
  
  Standard_EXPORT   Standard_Boolean More() ;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT  const  Handle(ShapeProcess_Operator)& Value()  const;
  
  Standard_EXPORT   TCollection_AsciiString Name()  const;




protected:





private:

  
  Standard_EXPORT   void AppendStack (const Handle(ShapeProcess_DictionaryOfOperator)& val) ;


  Handle(ShapeProcess_DictionaryOfOperator) thebase;
  TCollection_AsciiString thename;
  Handle(ShapeProcess_StackItemOfDictionaryOfOperator) thelast;
  Standard_Integer thenb;
  Standard_Boolean themore;
  Standard_Boolean theinit;
  Standard_Boolean thenext;


};







#endif // _ShapeProcess_IteratorOfDictionaryOfOperator_HeaderFile
