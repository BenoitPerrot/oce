// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_SequenceOfCurve_HeaderFile
#define _TColGeom2d_SequenceOfCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
#include <Geometry/TColGeom2d/Handle_TColGeom2d_SequenceNodeOfSequenceOfCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom2d_Curve;
class TColGeom2d_SequenceNodeOfSequenceOfCurve;



class TColGeom2d_SequenceOfCurve  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColGeom2d_SequenceOfCurve();
  
  Standard_EXPORT TColGeom2d_SequenceOfCurve(const TColGeom2d_SequenceOfCurve& Other);
  
  Standard_EXPORT   void Clear() ;
~TColGeom2d_SequenceOfCurve()
{
  Clear();
}
  
  Standard_EXPORT  const  TColGeom2d_SequenceOfCurve& Assign (const TColGeom2d_SequenceOfCurve& Other) ;
 const  TColGeom2d_SequenceOfCurve& operator = (const TColGeom2d_SequenceOfCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Geom2d_Curve)& T) ;
  
      void Append (TColGeom2d_SequenceOfCurve& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Geom2d_Curve)& T) ;
  
      void Prepend (TColGeom2d_SequenceOfCurve& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Geom2d_Curve)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColGeom2d_SequenceOfCurve& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Geom2d_Curve)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColGeom2d_SequenceOfCurve& S) ;
  
  Standard_EXPORT  const  Handle(Geom2d_Curve)& First()  const;
  
  Standard_EXPORT  const  Handle(Geom2d_Curve)& Last()  const;
  
      void Split (const Standard_Integer Index, TColGeom2d_SequenceOfCurve& Sub) ;
  
  Standard_EXPORT  const  Handle(Geom2d_Curve)& Value (const Standard_Integer Index)  const;
 const  Handle(Geom2d_Curve)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Geom2d_Curve)& I) ;
  
  Standard_EXPORT   Handle(Geom2d_Curve)& ChangeValue (const Standard_Integer Index) ;
  Handle(Geom2d_Curve)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Geom2d_Curve)
#define SeqItem_hxx <Geometry/Geom2d/Geom2d_Curve.hxx>
#define TCollection_SequenceNode TColGeom2d_SequenceNodeOfSequenceOfCurve
#define TCollection_SequenceNode_hxx <Geometry/TColGeom2d/TColGeom2d_SequenceNodeOfSequenceOfCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom2d_SequenceNodeOfSequenceOfCurve
#define TCollection_SequenceNode_Type_() TColGeom2d_SequenceNodeOfSequenceOfCurve_Type_()
#define TCollection_Sequence TColGeom2d_SequenceOfCurve
#define TCollection_Sequence_hxx <Geometry/TColGeom2d/TColGeom2d_SequenceOfCurve.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom2d_SequenceOfCurve_HeaderFile
