// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_SequenceOfAij_HeaderFile
#define _GeomPlate_SequenceOfAij_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <ModelingAlgorithms/GeomPlate/Handle_GeomPlate_SequenceNodeOfSequenceOfAij.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class GeomPlate_Aij;
class GeomPlate_SequenceNodeOfSequenceOfAij;



class GeomPlate_SequenceOfAij  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    GeomPlate_SequenceOfAij();
  
  Standard_EXPORT GeomPlate_SequenceOfAij(const GeomPlate_SequenceOfAij& Other);
  
  Standard_EXPORT   void Clear() ;
~GeomPlate_SequenceOfAij()
{
  Clear();
}
  
  Standard_EXPORT  const  GeomPlate_SequenceOfAij& Assign (const GeomPlate_SequenceOfAij& Other) ;
 const  GeomPlate_SequenceOfAij& operator = (const GeomPlate_SequenceOfAij& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const GeomPlate_Aij& T) ;
  
      void Append (GeomPlate_SequenceOfAij& S) ;
  
  Standard_EXPORT   void Prepend (const GeomPlate_Aij& T) ;
  
      void Prepend (GeomPlate_SequenceOfAij& S) ;
  
      void InsertBefore (const Standard_Integer Index, const GeomPlate_Aij& T) ;
  
      void InsertBefore (const Standard_Integer Index, GeomPlate_SequenceOfAij& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const GeomPlate_Aij& T) ;
  
      void InsertAfter (const Standard_Integer Index, GeomPlate_SequenceOfAij& S) ;
  
  Standard_EXPORT  const  GeomPlate_Aij& First()  const;
  
  Standard_EXPORT  const  GeomPlate_Aij& Last()  const;
  
      void Split (const Standard_Integer Index, GeomPlate_SequenceOfAij& Sub) ;
  
  Standard_EXPORT  const  GeomPlate_Aij& Value (const Standard_Integer Index)  const;
 const  GeomPlate_Aij& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const GeomPlate_Aij& I) ;
  
  Standard_EXPORT   GeomPlate_Aij& ChangeValue (const Standard_Integer Index) ;
  GeomPlate_Aij& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem GeomPlate_Aij
#define SeqItem_hxx <ModelingAlgorithms/GeomPlate/GeomPlate_Aij.hxx>
#define TCollection_SequenceNode GeomPlate_SequenceNodeOfSequenceOfAij
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/GeomPlate/GeomPlate_SequenceNodeOfSequenceOfAij.hxx>
#define Handle_TCollection_SequenceNode Handle_GeomPlate_SequenceNodeOfSequenceOfAij
#define TCollection_SequenceNode_Type_() GeomPlate_SequenceNodeOfSequenceOfAij_Type_()
#define TCollection_Sequence GeomPlate_SequenceOfAij
#define TCollection_Sequence_hxx <ModelingAlgorithms/GeomPlate/GeomPlate_SequenceOfAij.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _GeomPlate_SequenceOfAij_HeaderFile
