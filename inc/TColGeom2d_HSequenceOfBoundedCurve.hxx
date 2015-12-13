// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_HSequenceOfBoundedCurve_HeaderFile
#define _TColGeom2d_HSequenceOfBoundedCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColGeom2d_HSequenceOfBoundedCurve.hxx>

#include <TColGeom2d_SequenceOfBoundedCurve.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Geom2d_BoundedCurve.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom2d_BoundedCurve;
class TColGeom2d_SequenceOfBoundedCurve;



class TColGeom2d_HSequenceOfBoundedCurve : public MMgt_TShared
{

public:

  
    TColGeom2d_HSequenceOfBoundedCurve();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(Geom2d_BoundedCurve)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColGeom2d_HSequenceOfBoundedCurve)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(Geom2d_BoundedCurve)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColGeom2d_HSequenceOfBoundedCurve)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Geom2d_BoundedCurve)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColGeom2d_HSequenceOfBoundedCurve)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Geom2d_BoundedCurve)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColGeom2d_HSequenceOfBoundedCurve)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColGeom2d_HSequenceOfBoundedCurve) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(Geom2d_BoundedCurve)& anItem) ;
  
  Standard_EXPORT  const  Handle(Geom2d_BoundedCurve)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(Geom2d_BoundedCurve)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColGeom2d_SequenceOfBoundedCurve& Sequence()  const;
  
      TColGeom2d_SequenceOfBoundedCurve& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColGeom2d_HSequenceOfBoundedCurve) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColGeom2d_HSequenceOfBoundedCurve)

protected:




private: 


  TColGeom2d_SequenceOfBoundedCurve mySequence;


};

#define Item Handle(Geom2d_BoundedCurve)
#define Item_hxx <Geom2d_BoundedCurve.hxx>
#define TheSequence TColGeom2d_SequenceOfBoundedCurve
#define TheSequence_hxx <TColGeom2d_SequenceOfBoundedCurve.hxx>
#define TCollection_HSequence TColGeom2d_HSequenceOfBoundedCurve
#define TCollection_HSequence_hxx <TColGeom2d_HSequenceOfBoundedCurve.hxx>
#define Handle_TCollection_HSequence Handle_TColGeom2d_HSequenceOfBoundedCurve
#define TCollection_HSequence_Type_() TColGeom2d_HSequenceOfBoundedCurve_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColGeom2d_HSequenceOfBoundedCurve) ShallowCopy(const Handle(TColGeom2d_HSequenceOfBoundedCurve)& me) {
 return me->ShallowCopy();
}



#endif // _TColGeom2d_HSequenceOfBoundedCurve_HeaderFile
