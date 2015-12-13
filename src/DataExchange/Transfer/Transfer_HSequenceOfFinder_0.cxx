// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Transfer_HSequenceOfFinder.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Transfer_Finder.hxx>
#include <Transfer_SequenceOfFinder.hxx>

 


IMPLEMENT_STANDARD_TYPE(Transfer_HSequenceOfFinder)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Transfer_HSequenceOfFinder)


IMPLEMENT_DOWNCAST(Transfer_HSequenceOfFinder,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Transfer_HSequenceOfFinder)


#define Item Handle(Transfer_Finder)
#define Item_hxx <Transfer_Finder.hxx>
#define TheSequence Transfer_SequenceOfFinder
#define TheSequence_hxx <Transfer_SequenceOfFinder.hxx>
#define TCollection_HSequence Transfer_HSequenceOfFinder
#define TCollection_HSequence_hxx <Transfer_HSequenceOfFinder.hxx>
#define Handle_TCollection_HSequence Handle_Transfer_HSequenceOfFinder
#define TCollection_HSequence_Type_() Transfer_HSequenceOfFinder_Type_()
#include <TCollection_HSequence.gxx>

