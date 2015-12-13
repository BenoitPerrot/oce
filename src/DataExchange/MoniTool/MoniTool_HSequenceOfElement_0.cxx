// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <MoniTool_HSequenceOfElement.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <MoniTool_Element.hxx>
#include <MoniTool_SequenceOfElement.hxx>

 


IMPLEMENT_STANDARD_TYPE(MoniTool_HSequenceOfElement)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MoniTool_HSequenceOfElement)


IMPLEMENT_DOWNCAST(MoniTool_HSequenceOfElement,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MoniTool_HSequenceOfElement)


#define Item Handle(MoniTool_Element)
#define Item_hxx <MoniTool_Element.hxx>
#define TheSequence MoniTool_SequenceOfElement
#define TheSequence_hxx <MoniTool_SequenceOfElement.hxx>
#define TCollection_HSequence MoniTool_HSequenceOfElement
#define TCollection_HSequence_hxx <MoniTool_HSequenceOfElement.hxx>
#define Handle_TCollection_HSequence Handle_MoniTool_HSequenceOfElement
#define TCollection_HSequence_Type_() MoniTool_HSequenceOfElement_Type_()
#include <Foundation/TCollection/TCollection_HSequence.gxx>

