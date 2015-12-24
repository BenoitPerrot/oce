// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_RelationIterator_HeaderFile
#define _Expr_RelationIterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Expressions/Expr_Array1OfSingleRelation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Expressions/Handle_Expr_GeneralRelation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Expressions/Handle_Expr_SingleRelation.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Expr_GeneralRelation;
class Expr_SingleRelation;


//! Iterates on every basic relation contained in
//! a GeneralRelation.
class Expr_RelationIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Expr_RelationIterator(const Handle(Expr_GeneralRelation)& rel);
  
  //! Returns False if no other relation remains.
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  //! Returns current basic relation.
  //! Exception is raised if no more relation remains.
  Standard_EXPORT   Handle(Expr_SingleRelation) Value()  const;




protected:





private:



  Expr_Array1OfSingleRelation myRelation;
  Standard_Integer current;


};







#endif // _Expr_RelationIterator_HeaderFile
