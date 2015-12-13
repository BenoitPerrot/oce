// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_StackOfGeneralFunction_HeaderFile
#define _ExprIntrp_StackOfGeneralFunction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_Expr_GeneralFunction.hxx>
#include <Handle_ExprIntrp_ListNodeOfStackOfGeneralFunction.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class ExprIntrp_ListIteratorOfStackOfGeneralFunction;
class Expr_GeneralFunction;
class ExprIntrp_ListNodeOfStackOfGeneralFunction;



class ExprIntrp_StackOfGeneralFunction 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ExprIntrp_StackOfGeneralFunction();
  
  Standard_EXPORT ExprIntrp_StackOfGeneralFunction(const ExprIntrp_StackOfGeneralFunction& Other);
  
  Standard_EXPORT   void Assign (const ExprIntrp_StackOfGeneralFunction& Other) ;
  void operator= (const ExprIntrp_StackOfGeneralFunction& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~ExprIntrp_StackOfGeneralFunction()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Handle(Expr_GeneralFunction)& I) ;
  
  Standard_EXPORT   void Prepend (const Handle(Expr_GeneralFunction)& I, ExprIntrp_ListIteratorOfStackOfGeneralFunction& theIt) ;
  
  Standard_EXPORT   void Prepend (ExprIntrp_StackOfGeneralFunction& Other) ;
  
  Standard_EXPORT   void Append (const Handle(Expr_GeneralFunction)& I) ;
  
  Standard_EXPORT   void Append (const Handle(Expr_GeneralFunction)& I, ExprIntrp_ListIteratorOfStackOfGeneralFunction& theIt) ;
  
  Standard_EXPORT   void Append (ExprIntrp_StackOfGeneralFunction& Other) ;
  
  Standard_EXPORT   Handle(Expr_GeneralFunction)& First()  const;
  
  Standard_EXPORT   Handle(Expr_GeneralFunction)& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (ExprIntrp_ListIteratorOfStackOfGeneralFunction& It) ;
  
  Standard_EXPORT   void InsertBefore (const Handle(Expr_GeneralFunction)& I, ExprIntrp_ListIteratorOfStackOfGeneralFunction& It) ;
  
  Standard_EXPORT   void InsertBefore (ExprIntrp_StackOfGeneralFunction& Other, ExprIntrp_ListIteratorOfStackOfGeneralFunction& It) ;
  
  Standard_EXPORT   void InsertAfter (const Handle(Expr_GeneralFunction)& I, ExprIntrp_ListIteratorOfStackOfGeneralFunction& It) ;
  
  Standard_EXPORT   void InsertAfter (ExprIntrp_StackOfGeneralFunction& Other, ExprIntrp_ListIteratorOfStackOfGeneralFunction& It) ;


friend class ExprIntrp_ListIteratorOfStackOfGeneralFunction;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Handle(Expr_GeneralFunction)
#define Item_hxx <Mathematics/Expressions/Expr_GeneralFunction.hxx>
#define TCollection_ListNode ExprIntrp_ListNodeOfStackOfGeneralFunction
#define TCollection_ListNode_hxx <ExprIntrp_ListNodeOfStackOfGeneralFunction.hxx>
#define TCollection_ListIterator ExprIntrp_ListIteratorOfStackOfGeneralFunction
#define TCollection_ListIterator_hxx <ExprIntrp_ListIteratorOfStackOfGeneralFunction.hxx>
#define Handle_TCollection_ListNode Handle_ExprIntrp_ListNodeOfStackOfGeneralFunction
#define TCollection_ListNode_Type_() ExprIntrp_ListNodeOfStackOfGeneralFunction_Type_()
#define TCollection_List ExprIntrp_StackOfGeneralFunction
#define TCollection_List_hxx <ExprIntrp_StackOfGeneralFunction.hxx>

#include <Foundation/TCollection/TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _ExprIntrp_StackOfGeneralFunction_HeaderFile
