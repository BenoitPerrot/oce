// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_ListIteratorOfListOfCurveRepresentation_HeaderFile
#define _BRep_ListIteratorOfListOfCurveRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <ModelingData/BRep/Handle_BRep_CurveRepresentation.hxx>
#include <ModelingData/BRep/Handle_BRep_ListNodeOfListOfCurveRepresentation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BRep_ListOfCurveRepresentation;
class BRep_CurveRepresentation;
class BRep_ListNodeOfListOfCurveRepresentation;



class BRep_ListIteratorOfListOfCurveRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRep_ListIteratorOfListOfCurveRepresentation();
  
  Standard_EXPORT BRep_ListIteratorOfListOfCurveRepresentation(const BRep_ListOfCurveRepresentation& L);
  
  Standard_EXPORT   void Initialize (const BRep_ListOfCurveRepresentation& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(BRep_CurveRepresentation)& Value()  const;


friend class BRep_ListOfCurveRepresentation;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(BRep_CurveRepresentation)
#define Item_hxx <ModelingData/BRep/BRep_CurveRepresentation.hxx>
#define TCollection_ListNode BRep_ListNodeOfListOfCurveRepresentation
#define TCollection_ListNode_hxx <ModelingData/BRep/BRep_ListNodeOfListOfCurveRepresentation.hxx>
#define TCollection_ListIterator BRep_ListIteratorOfListOfCurveRepresentation
#define TCollection_ListIterator_hxx <ModelingData/BRep/BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#define Handle_TCollection_ListNode Handle_BRep_ListNodeOfListOfCurveRepresentation
#define TCollection_ListNode_Type_() BRep_ListNodeOfListOfCurveRepresentation_Type_()
#define TCollection_List BRep_ListOfCurveRepresentation
#define TCollection_List_hxx <ModelingData/BRep/BRep_ListOfCurveRepresentation.hxx>

#include <Foundation/TCollection/TCollection_ListIterator.lxx>

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




#endif // _BRep_ListIteratorOfListOfCurveRepresentation_HeaderFile
