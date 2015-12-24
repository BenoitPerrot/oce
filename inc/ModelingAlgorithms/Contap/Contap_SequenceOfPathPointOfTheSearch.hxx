// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceOfPathPointOfTheSearch_HeaderFile
#define _Contap_SequenceOfPathPointOfTheSearch_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <ModelingAlgorithms/Contap/Handle_Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Contap_ThePathPointOfTheSearch;
class Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch;



class Contap_SequenceOfPathPointOfTheSearch  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Contap_SequenceOfPathPointOfTheSearch();
  
  Standard_EXPORT Contap_SequenceOfPathPointOfTheSearch(const Contap_SequenceOfPathPointOfTheSearch& Other);
  
  Standard_EXPORT   void Clear() ;
~Contap_SequenceOfPathPointOfTheSearch()
{
  Clear();
}
  
  Standard_EXPORT  const  Contap_SequenceOfPathPointOfTheSearch& Assign (const Contap_SequenceOfPathPointOfTheSearch& Other) ;
 const  Contap_SequenceOfPathPointOfTheSearch& operator = (const Contap_SequenceOfPathPointOfTheSearch& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Contap_ThePathPointOfTheSearch& T) ;
  
      void Append (Contap_SequenceOfPathPointOfTheSearch& S) ;
  
  Standard_EXPORT   void Prepend (const Contap_ThePathPointOfTheSearch& T) ;
  
      void Prepend (Contap_SequenceOfPathPointOfTheSearch& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Contap_ThePathPointOfTheSearch& T) ;
  
      void InsertBefore (const Standard_Integer Index, Contap_SequenceOfPathPointOfTheSearch& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Contap_ThePathPointOfTheSearch& T) ;
  
      void InsertAfter (const Standard_Integer Index, Contap_SequenceOfPathPointOfTheSearch& S) ;
  
  Standard_EXPORT  const  Contap_ThePathPointOfTheSearch& First()  const;
  
  Standard_EXPORT  const  Contap_ThePathPointOfTheSearch& Last()  const;
  
      void Split (const Standard_Integer Index, Contap_SequenceOfPathPointOfTheSearch& Sub) ;
  
  Standard_EXPORT  const  Contap_ThePathPointOfTheSearch& Value (const Standard_Integer Index)  const;
 const  Contap_ThePathPointOfTheSearch& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Contap_ThePathPointOfTheSearch& I) ;
  
  Standard_EXPORT   Contap_ThePathPointOfTheSearch& ChangeValue (const Standard_Integer Index) ;
  Contap_ThePathPointOfTheSearch& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Contap_ThePathPointOfTheSearch
#define SeqItem_hxx <ModelingAlgorithms/Contap/Contap_ThePathPointOfTheSearch.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch_Type_()
#define TCollection_Sequence Contap_SequenceOfPathPointOfTheSearch
#define TCollection_Sequence_hxx <ModelingAlgorithms/Contap/Contap_SequenceOfPathPointOfTheSearch.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Contap_SequenceOfPathPointOfTheSearch_HeaderFile
