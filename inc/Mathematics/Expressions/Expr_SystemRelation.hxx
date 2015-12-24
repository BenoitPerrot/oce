// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SystemRelation_HeaderFile
#define _Expr_SystemRelation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/Expressions/Handle_Expr_SystemRelation.hxx>

#include <Mathematics/Expressions/Expr_SequenceOfGeneralRelation.hxx>
#include <Mathematics/Expressions/Expr_GeneralRelation.hxx>
#include <Mathematics/Expressions/Handle_Expr_GeneralRelation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Expressions/Handle_Expr_GeneralExpression.hxx>
#include <Mathematics/Expressions/Handle_Expr_NamedUnknown.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DimensionMismatch;
class Standard_NumericError;
class Expr_GeneralRelation;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class TCollection_AsciiString;



class Expr_SystemRelation : public Expr_GeneralRelation
{

public:

  
  //! Creates a system with one relation
  Standard_EXPORT Expr_SystemRelation(const Handle(Expr_GeneralRelation)& relation);
  
  //! Appends <relation> in the list of components of <me>.
  Standard_EXPORT   void Add (const Handle(Expr_GeneralRelation)& relation) ;
  
  Standard_EXPORT   void Remove (const Handle(Expr_GeneralRelation)& relation) ;
  
  //! Tests if <me> is linear between its NamedUnknowns.
  Standard_EXPORT   Standard_Boolean IsLinear()  const;
  
  //! Returns the number of relations contained in <me>.
  Standard_EXPORT   Standard_Integer NbOfSubRelations()  const;
  
  //! Returns the number of SingleRelations contained in
  //! <me>.
  Standard_EXPORT   Standard_Integer NbOfSingleRelations()  const;
  
  //! Returns the relation denoted by <index> in <me>.
  //! An exception is raised if <index> is out of range.
  Standard_EXPORT   Handle(Expr_GeneralRelation) SubRelation (const Standard_Integer index)  const;
  
  Standard_EXPORT   Standard_Boolean IsSatisfied()  const;
  
  //! Returns a GeneralRelation after replacement of
  //! NamedUnknowns by an associated expression, and after
  //! values computation.
  Standard_EXPORT   Handle(Expr_GeneralRelation) Simplified()  const;
  
  //! Replaces NamedUnknowns by associated expressions,
  //! and computes values in <me>.
  Standard_EXPORT   void Simplify() ;
  
  //! Returns a copy of <me> having the same unknowns and functions.
  Standard_EXPORT   Handle(Expr_GeneralRelation) Copy()  const;
  
  //! Tests if <me> contains <exp>.
  Standard_EXPORT   Standard_Boolean Contains (const Handle(Expr_GeneralExpression)& exp)  const;
  
  //! Replaces all occurences of <var> with <with> in <me>.
  Standard_EXPORT   void Replace (const Handle(Expr_NamedUnknown)& var, const Handle(Expr_GeneralExpression)& with) ;
  
  //! returns a string representing <me> in a readable way.
  Standard_EXPORT   TCollection_AsciiString String()  const;




  DEFINE_STANDARD_RTTI(Expr_SystemRelation)

protected:




private: 


  Expr_SequenceOfGeneralRelation myRelations;


};







#endif // _Expr_SystemRelation_HeaderFile
