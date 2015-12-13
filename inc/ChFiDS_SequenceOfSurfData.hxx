// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_SequenceOfSurfData_HeaderFile
#define _ChFiDS_SequenceOfSurfData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_ChFiDS_SurfData.hxx>
#include <Handle_ChFiDS_SequenceNodeOfSequenceOfSurfData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ChFiDS_SurfData;
class ChFiDS_SequenceNodeOfSequenceOfSurfData;



class ChFiDS_SequenceOfSurfData  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    ChFiDS_SequenceOfSurfData();
  
  Standard_EXPORT ChFiDS_SequenceOfSurfData(const ChFiDS_SequenceOfSurfData& Other);
  
  Standard_EXPORT   void Clear() ;
~ChFiDS_SequenceOfSurfData()
{
  Clear();
}
  
  Standard_EXPORT  const  ChFiDS_SequenceOfSurfData& Assign (const ChFiDS_SequenceOfSurfData& Other) ;
 const  ChFiDS_SequenceOfSurfData& operator = (const ChFiDS_SequenceOfSurfData& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(ChFiDS_SurfData)& T) ;
  
      void Append (ChFiDS_SequenceOfSurfData& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(ChFiDS_SurfData)& T) ;
  
      void Prepend (ChFiDS_SequenceOfSurfData& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(ChFiDS_SurfData)& T) ;
  
      void InsertBefore (const Standard_Integer Index, ChFiDS_SequenceOfSurfData& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(ChFiDS_SurfData)& T) ;
  
      void InsertAfter (const Standard_Integer Index, ChFiDS_SequenceOfSurfData& S) ;
  
  Standard_EXPORT  const  Handle(ChFiDS_SurfData)& First()  const;
  
  Standard_EXPORT  const  Handle(ChFiDS_SurfData)& Last()  const;
  
      void Split (const Standard_Integer Index, ChFiDS_SequenceOfSurfData& Sub) ;
  
  Standard_EXPORT  const  Handle(ChFiDS_SurfData)& Value (const Standard_Integer Index)  const;
 const  Handle(ChFiDS_SurfData)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(ChFiDS_SurfData)& I) ;
  
  Standard_EXPORT   Handle(ChFiDS_SurfData)& ChangeValue (const Standard_Integer Index) ;
  Handle(ChFiDS_SurfData)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(ChFiDS_SurfData)
#define SeqItem_hxx <ChFiDS_SurfData.hxx>
#define TCollection_SequenceNode ChFiDS_SequenceNodeOfSequenceOfSurfData
#define TCollection_SequenceNode_hxx <ChFiDS_SequenceNodeOfSequenceOfSurfData.hxx>
#define Handle_TCollection_SequenceNode Handle_ChFiDS_SequenceNodeOfSequenceOfSurfData
#define TCollection_SequenceNode_Type_() ChFiDS_SequenceNodeOfSequenceOfSurfData_Type_()
#define TCollection_Sequence ChFiDS_SequenceOfSurfData
#define TCollection_Sequence_hxx <ChFiDS_SequenceOfSurfData.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _ChFiDS_SequenceOfSurfData_HeaderFile
