// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Interface_HSequenceOfCheck.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Interface_Check.hxx>
#include <Interface_SequenceOfCheck.hxx>

 


IMPLEMENT_STANDARD_TYPE(Interface_HSequenceOfCheck)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Interface_HSequenceOfCheck)


IMPLEMENT_DOWNCAST(Interface_HSequenceOfCheck,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Interface_HSequenceOfCheck)


#define Item Handle(Interface_Check)
#define Item_hxx <Interface_Check.hxx>
#define TheSequence Interface_SequenceOfCheck
#define TheSequence_hxx <Interface_SequenceOfCheck.hxx>
#define TCollection_HSequence Interface_HSequenceOfCheck
#define TCollection_HSequence_hxx <Interface_HSequenceOfCheck.hxx>
#define Handle_TCollection_HSequence Handle_Interface_HSequenceOfCheck
#define TCollection_HSequence_Type_() Interface_HSequenceOfCheck_Type_()
#include <Foundation/TCollection/TCollection_HSequence.gxx>

