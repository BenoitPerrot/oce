// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_ListOfC2DF_HeaderFile
#define _TopOpeBRepTool_ListOfC2DF_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/Handle_TopOpeBRepTool_ListNodeOfListOfC2DF.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TopOpeBRepTool_ListIteratorOfListOfC2DF;
class TopOpeBRepTool_C2DF;
class TopOpeBRepTool_ListNodeOfListOfC2DF;



class TopOpeBRepTool_ListOfC2DF 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepTool_ListOfC2DF();
  
  Standard_EXPORT TopOpeBRepTool_ListOfC2DF(const TopOpeBRepTool_ListOfC2DF& Other);
  
  Standard_EXPORT   void Assign (const TopOpeBRepTool_ListOfC2DF& Other) ;
  void operator= (const TopOpeBRepTool_ListOfC2DF& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepTool_ListOfC2DF()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const TopOpeBRepTool_C2DF& I) ;
  
  Standard_EXPORT   void Prepend (const TopOpeBRepTool_C2DF& I, TopOpeBRepTool_ListIteratorOfListOfC2DF& theIt) ;
  
  Standard_EXPORT   void Prepend (TopOpeBRepTool_ListOfC2DF& Other) ;
  
  Standard_EXPORT   void Append (const TopOpeBRepTool_C2DF& I) ;
  
  Standard_EXPORT   void Append (const TopOpeBRepTool_C2DF& I, TopOpeBRepTool_ListIteratorOfListOfC2DF& theIt) ;
  
  Standard_EXPORT   void Append (TopOpeBRepTool_ListOfC2DF& Other) ;
  
  Standard_EXPORT   TopOpeBRepTool_C2DF& First()  const;
  
  Standard_EXPORT   TopOpeBRepTool_C2DF& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (TopOpeBRepTool_ListIteratorOfListOfC2DF& It) ;
  
  Standard_EXPORT   void InsertBefore (const TopOpeBRepTool_C2DF& I, TopOpeBRepTool_ListIteratorOfListOfC2DF& It) ;
  
  Standard_EXPORT   void InsertBefore (TopOpeBRepTool_ListOfC2DF& Other, TopOpeBRepTool_ListIteratorOfListOfC2DF& It) ;
  
  Standard_EXPORT   void InsertAfter (const TopOpeBRepTool_C2DF& I, TopOpeBRepTool_ListIteratorOfListOfC2DF& It) ;
  
  Standard_EXPORT   void InsertAfter (TopOpeBRepTool_ListOfC2DF& Other, TopOpeBRepTool_ListIteratorOfListOfC2DF& It) ;


friend class TopOpeBRepTool_ListIteratorOfListOfC2DF;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item TopOpeBRepTool_C2DF
#define Item_hxx <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_C2DF.hxx>
#define TCollection_ListNode TopOpeBRepTool_ListNodeOfListOfC2DF
#define TCollection_ListNode_hxx <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_ListNodeOfListOfC2DF.hxx>
#define TCollection_ListIterator TopOpeBRepTool_ListIteratorOfListOfC2DF
#define TCollection_ListIterator_hxx <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepTool_ListNodeOfListOfC2DF
#define TCollection_ListNode_Type_() TopOpeBRepTool_ListNodeOfListOfC2DF_Type_()
#define TCollection_List TopOpeBRepTool_ListOfC2DF
#define TCollection_List_hxx <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_ListOfC2DF.hxx>

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




#endif // _TopOpeBRepTool_ListOfC2DF_HeaderFile
