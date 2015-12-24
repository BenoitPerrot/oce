// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_SequenceOfLin_HeaderFile
#define _LocOpe_SequenceOfLin_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <ModelingAlgorithms/LocOpe/Handle_LocOpe_SequenceNodeOfSequenceOfLin.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Lin;
class LocOpe_SequenceNodeOfSequenceOfLin;



class LocOpe_SequenceOfLin  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    LocOpe_SequenceOfLin();
  
  Standard_EXPORT LocOpe_SequenceOfLin(const LocOpe_SequenceOfLin& Other);
  
  Standard_EXPORT   void Clear() ;
~LocOpe_SequenceOfLin()
{
  Clear();
}
  
  Standard_EXPORT  const  LocOpe_SequenceOfLin& Assign (const LocOpe_SequenceOfLin& Other) ;
 const  LocOpe_SequenceOfLin& operator = (const LocOpe_SequenceOfLin& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const gp_Lin& T) ;
  
      void Append (LocOpe_SequenceOfLin& S) ;
  
  Standard_EXPORT   void Prepend (const gp_Lin& T) ;
  
      void Prepend (LocOpe_SequenceOfLin& S) ;
  
      void InsertBefore (const Standard_Integer Index, const gp_Lin& T) ;
  
      void InsertBefore (const Standard_Integer Index, LocOpe_SequenceOfLin& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const gp_Lin& T) ;
  
      void InsertAfter (const Standard_Integer Index, LocOpe_SequenceOfLin& S) ;
  
  Standard_EXPORT  const  gp_Lin& First()  const;
  
  Standard_EXPORT  const  gp_Lin& Last()  const;
  
      void Split (const Standard_Integer Index, LocOpe_SequenceOfLin& Sub) ;
  
  Standard_EXPORT  const  gp_Lin& Value (const Standard_Integer Index)  const;
 const  gp_Lin& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Lin& I) ;
  
  Standard_EXPORT   gp_Lin& ChangeValue (const Standard_Integer Index) ;
  gp_Lin& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem gp_Lin
#define SeqItem_hxx <Mathematics/Primitives/gp_Lin.hxx>
#define TCollection_SequenceNode LocOpe_SequenceNodeOfSequenceOfLin
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/LocOpe/LocOpe_SequenceNodeOfSequenceOfLin.hxx>
#define Handle_TCollection_SequenceNode Handle_LocOpe_SequenceNodeOfSequenceOfLin
#define TCollection_SequenceNode_Type_() LocOpe_SequenceNodeOfSequenceOfLin_Type_()
#define TCollection_Sequence LocOpe_SequenceOfLin
#define TCollection_Sequence_hxx <ModelingAlgorithms/LocOpe/LocOpe_SequenceOfLin.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _LocOpe_SequenceOfLin_HeaderFile
