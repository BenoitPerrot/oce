// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceOfPntOn2Faces_HeaderFile
#define _IntTools_SequenceOfPntOn2Faces_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <ModelingAlgorithms/IntTools/Handle_IntTools_SequenceNodeOfSequenceOfPntOn2Faces.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntTools_PntOn2Faces;
class IntTools_SequenceNodeOfSequenceOfPntOn2Faces;



class IntTools_SequenceOfPntOn2Faces  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntTools_SequenceOfPntOn2Faces();
  
  Standard_EXPORT IntTools_SequenceOfPntOn2Faces(const IntTools_SequenceOfPntOn2Faces& Other);
  
  Standard_EXPORT   void Clear() ;
~IntTools_SequenceOfPntOn2Faces()
{
  Clear();
}
  
  Standard_EXPORT  const  IntTools_SequenceOfPntOn2Faces& Assign (const IntTools_SequenceOfPntOn2Faces& Other) ;
 const  IntTools_SequenceOfPntOn2Faces& operator = (const IntTools_SequenceOfPntOn2Faces& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const IntTools_PntOn2Faces& T) ;
  
      void Append (IntTools_SequenceOfPntOn2Faces& S) ;
  
  Standard_EXPORT   void Prepend (const IntTools_PntOn2Faces& T) ;
  
      void Prepend (IntTools_SequenceOfPntOn2Faces& S) ;
  
      void InsertBefore (const Standard_Integer Index, const IntTools_PntOn2Faces& T) ;
  
      void InsertBefore (const Standard_Integer Index, IntTools_SequenceOfPntOn2Faces& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const IntTools_PntOn2Faces& T) ;
  
      void InsertAfter (const Standard_Integer Index, IntTools_SequenceOfPntOn2Faces& S) ;
  
  Standard_EXPORT  const  IntTools_PntOn2Faces& First()  const;
  
  Standard_EXPORT  const  IntTools_PntOn2Faces& Last()  const;
  
      void Split (const Standard_Integer Index, IntTools_SequenceOfPntOn2Faces& Sub) ;
  
  Standard_EXPORT  const  IntTools_PntOn2Faces& Value (const Standard_Integer Index)  const;
 const  IntTools_PntOn2Faces& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const IntTools_PntOn2Faces& I) ;
  
  Standard_EXPORT   IntTools_PntOn2Faces& ChangeValue (const Standard_Integer Index) ;
  IntTools_PntOn2Faces& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem IntTools_PntOn2Faces
#define SeqItem_hxx <ModelingAlgorithms/IntTools/IntTools_PntOn2Faces.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfPntOn2Faces
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/IntTools/IntTools_SequenceNodeOfSequenceOfPntOn2Faces.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfPntOn2Faces
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfPntOn2Faces_Type_()
#define TCollection_Sequence IntTools_SequenceOfPntOn2Faces
#define TCollection_Sequence_hxx <ModelingAlgorithms/IntTools/IntTools_SequenceOfPntOn2Faces.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntTools_SequenceOfPntOn2Faces_HeaderFile
