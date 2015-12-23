// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <OCAF/MDF/MDF_ARDriverHSequence.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <OCAF/MDF/MDF_ARDriver.hxx>
#include <OCAF/MDF/MDF_ARDriverSequence.hxx>

 


IMPLEMENT_STANDARD_TYPE(MDF_ARDriverHSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDF_ARDriverHSequence)


IMPLEMENT_DOWNCAST(MDF_ARDriverHSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDF_ARDriverHSequence)


#define Item Handle(MDF_ARDriver)
#define Item_hxx <OCAF/MDF/MDF_ARDriver.hxx>
#define TheSequence MDF_ARDriverSequence
#define TheSequence_hxx <OCAF/MDF/MDF_ARDriverSequence.hxx>
#define TCollection_HSequence MDF_ARDriverHSequence
#define TCollection_HSequence_hxx <OCAF/MDF/MDF_ARDriverHSequence.hxx>
#define Handle_TCollection_HSequence Handle_MDF_ARDriverHSequence
#define TCollection_HSequence_Type_() MDF_ARDriverHSequence_Type_()
#include <Foundation/TCollection/TCollection_HSequence.gxx>

