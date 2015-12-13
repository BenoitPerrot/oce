// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_HData_HeaderFile
#define _ChFiDS_HData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ChFiDS_HData.hxx>

#include <ChFiDS_SequenceOfSurfData.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_ChFiDS_SurfData.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ChFiDS_SurfData;
class ChFiDS_SequenceOfSurfData;



class ChFiDS_HData : public MMgt_TShared
{

public:

  
    ChFiDS_HData();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(ChFiDS_SurfData)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(ChFiDS_HData)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(ChFiDS_SurfData)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(ChFiDS_HData)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(ChFiDS_SurfData)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(ChFiDS_HData)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(ChFiDS_SurfData)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(ChFiDS_HData)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(ChFiDS_HData) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(ChFiDS_SurfData)& anItem) ;
  
  Standard_EXPORT  const  Handle(ChFiDS_SurfData)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(ChFiDS_SurfData)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  ChFiDS_SequenceOfSurfData& Sequence()  const;
  
      ChFiDS_SequenceOfSurfData& ChangeSequence() ;
  
  Standard_EXPORT   Handle(ChFiDS_HData) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(ChFiDS_HData)

protected:




private: 


  ChFiDS_SequenceOfSurfData mySequence;


};

#define Item Handle(ChFiDS_SurfData)
#define Item_hxx <ChFiDS_SurfData.hxx>
#define TheSequence ChFiDS_SequenceOfSurfData
#define TheSequence_hxx <ChFiDS_SequenceOfSurfData.hxx>
#define TCollection_HSequence ChFiDS_HData
#define TCollection_HSequence_hxx <ChFiDS_HData.hxx>
#define Handle_TCollection_HSequence Handle_ChFiDS_HData
#define TCollection_HSequence_Type_() ChFiDS_HData_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(ChFiDS_HData) ShallowCopy(const Handle(ChFiDS_HData)& me) {
 return me->ShallowCopy();
}



#endif // _ChFiDS_HData_HeaderFile
