// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_SequenceOfMultiCurve_HeaderFile
#define _AppParCurves_SequenceOfMultiCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Geometry/AppParCurves/Handle_AppParCurves_SequenceNodeOfSequenceOfMultiCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class AppParCurves_MultiCurve;
class AppParCurves_SequenceNodeOfSequenceOfMultiCurve;



class AppParCurves_SequenceOfMultiCurve  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    AppParCurves_SequenceOfMultiCurve();
  
  Standard_EXPORT AppParCurves_SequenceOfMultiCurve(const AppParCurves_SequenceOfMultiCurve& Other);
  
  Standard_EXPORT   void Clear() ;
~AppParCurves_SequenceOfMultiCurve()
{
  Clear();
}
  
  Standard_EXPORT  const  AppParCurves_SequenceOfMultiCurve& Assign (const AppParCurves_SequenceOfMultiCurve& Other) ;
 const  AppParCurves_SequenceOfMultiCurve& operator = (const AppParCurves_SequenceOfMultiCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const AppParCurves_MultiCurve& T) ;
  
      void Append (AppParCurves_SequenceOfMultiCurve& S) ;
  
  Standard_EXPORT   void Prepend (const AppParCurves_MultiCurve& T) ;
  
      void Prepend (AppParCurves_SequenceOfMultiCurve& S) ;
  
      void InsertBefore (const Standard_Integer Index, const AppParCurves_MultiCurve& T) ;
  
      void InsertBefore (const Standard_Integer Index, AppParCurves_SequenceOfMultiCurve& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const AppParCurves_MultiCurve& T) ;
  
      void InsertAfter (const Standard_Integer Index, AppParCurves_SequenceOfMultiCurve& S) ;
  
  Standard_EXPORT  const  AppParCurves_MultiCurve& First()  const;
  
  Standard_EXPORT  const  AppParCurves_MultiCurve& Last()  const;
  
      void Split (const Standard_Integer Index, AppParCurves_SequenceOfMultiCurve& Sub) ;
  
  Standard_EXPORT  const  AppParCurves_MultiCurve& Value (const Standard_Integer Index)  const;
 const  AppParCurves_MultiCurve& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const AppParCurves_MultiCurve& I) ;
  
  Standard_EXPORT   AppParCurves_MultiCurve& ChangeValue (const Standard_Integer Index) ;
  AppParCurves_MultiCurve& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem AppParCurves_MultiCurve
#define SeqItem_hxx <Geometry/AppParCurves/AppParCurves_MultiCurve.hxx>
#define TCollection_SequenceNode AppParCurves_SequenceNodeOfSequenceOfMultiCurve
#define TCollection_SequenceNode_hxx <Geometry/AppParCurves/AppParCurves_SequenceNodeOfSequenceOfMultiCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_AppParCurves_SequenceNodeOfSequenceOfMultiCurve
#define TCollection_SequenceNode_Type_() AppParCurves_SequenceNodeOfSequenceOfMultiCurve_Type_()
#define TCollection_Sequence AppParCurves_SequenceOfMultiCurve
#define TCollection_Sequence_hxx <Geometry/AppParCurves/AppParCurves_SequenceOfMultiCurve.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _AppParCurves_SequenceOfMultiCurve_HeaderFile
