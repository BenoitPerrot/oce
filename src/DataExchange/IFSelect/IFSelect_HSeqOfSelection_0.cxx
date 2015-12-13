// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <IFSelect_HSeqOfSelection.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <IFSelect_Selection.hxx>
#include <IFSelect_TSeqOfSelection.hxx>

 


IMPLEMENT_STANDARD_TYPE(IFSelect_HSeqOfSelection)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_HSeqOfSelection)


IMPLEMENT_DOWNCAST(IFSelect_HSeqOfSelection,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_HSeqOfSelection)


#define Item Handle(IFSelect_Selection)
#define Item_hxx <IFSelect_Selection.hxx>
#define TheSequence IFSelect_TSeqOfSelection
#define TheSequence_hxx <IFSelect_TSeqOfSelection.hxx>
#define TCollection_HSequence IFSelect_HSeqOfSelection
#define TCollection_HSequence_hxx <IFSelect_HSeqOfSelection.hxx>
#define Handle_TCollection_HSequence Handle_IFSelect_HSeqOfSelection
#define TCollection_HSequence_Type_() IFSelect_HSeqOfSelection_Type_()
#include <TCollection_HSequence.gxx>

