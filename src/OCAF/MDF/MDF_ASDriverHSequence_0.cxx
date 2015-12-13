// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <MDF_ASDriverHSequence.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <MDF_ASDriver.hxx>
#include <MDF_ASDriverSequence.hxx>

 


IMPLEMENT_STANDARD_TYPE(MDF_ASDriverHSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDF_ASDriverHSequence)


IMPLEMENT_DOWNCAST(MDF_ASDriverHSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDF_ASDriverHSequence)


#define Item Handle(MDF_ASDriver)
#define Item_hxx <MDF_ASDriver.hxx>
#define TheSequence MDF_ASDriverSequence
#define TheSequence_hxx <MDF_ASDriverSequence.hxx>
#define TCollection_HSequence MDF_ASDriverHSequence
#define TCollection_HSequence_hxx <MDF_ASDriverHSequence.hxx>
#define Handle_TCollection_HSequence Handle_MDF_ASDriverHSequence
#define TCollection_HSequence_Type_() MDF_ASDriverHSequence_Type_()
#include <Foundation/TCollection/TCollection_HSequence.gxx>

