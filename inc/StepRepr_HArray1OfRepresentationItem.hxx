// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_HArray1OfRepresentationItem_HeaderFile
#define _StepRepr_HArray1OfRepresentationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>

#include <StepRepr_Array1OfRepresentationItem.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepRepr_RepresentationItem.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepRepr_RepresentationItem;
class StepRepr_Array1OfRepresentationItem;



class StepRepr_HArray1OfRepresentationItem : public MMgt_TShared
{

public:

  
    StepRepr_HArray1OfRepresentationItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepRepr_HArray1OfRepresentationItem(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepRepr_RepresentationItem)& V);
  
      void Init (const Handle(StepRepr_RepresentationItem)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepRepr_RepresentationItem)& Value) ;
  
     const  Handle(StepRepr_RepresentationItem)& Value (const Standard_Integer Index)  const;
  
      Handle(StepRepr_RepresentationItem)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepRepr_Array1OfRepresentationItem& Array1()  const;
  
      StepRepr_Array1OfRepresentationItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepRepr_HArray1OfRepresentationItem)

protected:




private: 


  StepRepr_Array1OfRepresentationItem myArray;


};

#define ItemHArray1 Handle(StepRepr_RepresentationItem)
#define ItemHArray1_hxx <StepRepr_RepresentationItem.hxx>
#define TheArray1 StepRepr_Array1OfRepresentationItem
#define TheArray1_hxx <StepRepr_Array1OfRepresentationItem.hxx>
#define TCollection_HArray1 StepRepr_HArray1OfRepresentationItem
#define TCollection_HArray1_hxx <StepRepr_HArray1OfRepresentationItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepRepr_HArray1OfRepresentationItem
#define TCollection_HArray1_Type_() StepRepr_HArray1OfRepresentationItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepRepr_HArray1OfRepresentationItem_HeaderFile
