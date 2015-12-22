// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_SequenceOfSequenceOfCurve_HeaderFile
#define _MAT2d_SequenceOfSequenceOfCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColGeom2d_SequenceOfCurve;
class MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve;



class MAT2d_SequenceOfSequenceOfCurve  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    MAT2d_SequenceOfSequenceOfCurve();
  
  Standard_EXPORT MAT2d_SequenceOfSequenceOfCurve(const MAT2d_SequenceOfSequenceOfCurve& Other);
  
  Standard_EXPORT   void Clear() ;
~MAT2d_SequenceOfSequenceOfCurve()
{
  Clear();
}
  
  Standard_EXPORT  const  MAT2d_SequenceOfSequenceOfCurve& Assign (const MAT2d_SequenceOfSequenceOfCurve& Other) ;
 const  MAT2d_SequenceOfSequenceOfCurve& operator = (const MAT2d_SequenceOfSequenceOfCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const TColGeom2d_SequenceOfCurve& T) ;
  
      void Append (MAT2d_SequenceOfSequenceOfCurve& S) ;
  
  Standard_EXPORT   void Prepend (const TColGeom2d_SequenceOfCurve& T) ;
  
      void Prepend (MAT2d_SequenceOfSequenceOfCurve& S) ;
  
      void InsertBefore (const Standard_Integer Index, const TColGeom2d_SequenceOfCurve& T) ;
  
      void InsertBefore (const Standard_Integer Index, MAT2d_SequenceOfSequenceOfCurve& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const TColGeom2d_SequenceOfCurve& T) ;
  
      void InsertAfter (const Standard_Integer Index, MAT2d_SequenceOfSequenceOfCurve& S) ;
  
  Standard_EXPORT  const  TColGeom2d_SequenceOfCurve& First()  const;
  
  Standard_EXPORT  const  TColGeom2d_SequenceOfCurve& Last()  const;
  
      void Split (const Standard_Integer Index, MAT2d_SequenceOfSequenceOfCurve& Sub) ;
  
  Standard_EXPORT  const  TColGeom2d_SequenceOfCurve& Value (const Standard_Integer Index)  const;
 const  TColGeom2d_SequenceOfCurve& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const TColGeom2d_SequenceOfCurve& I) ;
  
  Standard_EXPORT   TColGeom2d_SequenceOfCurve& ChangeValue (const Standard_Integer Index) ;
  TColGeom2d_SequenceOfCurve& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem TColGeom2d_SequenceOfCurve
#define SeqItem_hxx <Geometry/TColGeom2d/TColGeom2d_SequenceOfCurve.hxx>
#define TCollection_SequenceNode MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve
#define TCollection_SequenceNode_hxx <MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve
#define TCollection_SequenceNode_Type_() MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_Type_()
#define TCollection_Sequence MAT2d_SequenceOfSequenceOfCurve
#define TCollection_Sequence_hxx <MAT2d_SequenceOfSequenceOfCurve.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MAT2d_SequenceOfSequenceOfCurve_HeaderFile
