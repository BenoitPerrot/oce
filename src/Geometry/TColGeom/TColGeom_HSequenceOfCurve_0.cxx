// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TColGeom_HSequenceOfCurve.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Geom_Curve.hxx>
#include <TColGeom_SequenceOfCurve.hxx>

 


IMPLEMENT_STANDARD_TYPE(TColGeom_HSequenceOfCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TColGeom_HSequenceOfCurve)


IMPLEMENT_DOWNCAST(TColGeom_HSequenceOfCurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TColGeom_HSequenceOfCurve)


#define Item Handle(Geom_Curve)
#define Item_hxx <Geom_Curve.hxx>
#define TheSequence TColGeom_SequenceOfCurve
#define TheSequence_hxx <TColGeom_SequenceOfCurve.hxx>
#define TCollection_HSequence TColGeom_HSequenceOfCurve
#define TCollection_HSequence_hxx <TColGeom_HSequenceOfCurve.hxx>
#define Handle_TCollection_HSequence Handle_TColGeom_HSequenceOfCurve
#define TCollection_HSequence_Type_() TColGeom_HSequenceOfCurve_Type_()
#include <Foundation/TCollection/TCollection_HSequence.gxx>

