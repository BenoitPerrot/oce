// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_HSequenceOfShape_HeaderFile
#define _TopTools_HSequenceOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopTools_HSequenceOfShape.hxx>

#include <TopTools_SequenceOfShape.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TopoDS_Shape;
class TopTools_SequenceOfShape;



class TopTools_HSequenceOfShape : public MMgt_TShared
{

public:

  
    TopTools_HSequenceOfShape();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TopTools_HSequenceOfShape) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   TopoDS_Shape& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TopTools_SequenceOfShape& Sequence()  const;
  
      TopTools_SequenceOfShape& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TopTools_HSequenceOfShape) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TopTools_HSequenceOfShape)

protected:




private: 


  TopTools_SequenceOfShape mySequence;


};

#define Item TopoDS_Shape
#define Item_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheSequence TopTools_SequenceOfShape
#define TheSequence_hxx <TopTools_SequenceOfShape.hxx>
#define TCollection_HSequence TopTools_HSequenceOfShape
#define TCollection_HSequence_hxx <TopTools_HSequenceOfShape.hxx>
#define Handle_TCollection_HSequence Handle_TopTools_HSequenceOfShape
#define TCollection_HSequence_Type_() TopTools_HSequenceOfShape_Type_()

#include <Foundation/TCollection/TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TopTools_HSequenceOfShape) ShallowCopy(const Handle(TopTools_HSequenceOfShape)& me) {
 return me->ShallowCopy();
}



#endif // _TopTools_HSequenceOfShape_HeaderFile
