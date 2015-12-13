// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <TColStd_HArray1OfInteger.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <IGESGraph_HArray1OfTextFontDef.hxx>
#include <TColgp_HArray1OfXYZ.hxx>
#include <Interface_HArray1OfHAsciiString.hxx>
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <gp_Pnt.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDimen_GeneralNote)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDimen_GeneralNote)
IMPLEMENT_DOWNCAST(IGESDimen_GeneralNote,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDimen_GeneralNote)
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <gp_GTrsf.hxx>


IGESDimen_GeneralNote::IGESDimen_GeneralNote ()    {  }

    void  IGESDimen_GeneralNote::Init
  (const Handle(TColStd_HArray1OfInteger)&        nbChars,
   const Handle(TColStd_HArray1OfReal)&           widths,
   const Handle(TColStd_HArray1OfReal)&           heights,
   const Handle(TColStd_HArray1OfInteger)&        fontCodes,
   const Handle(IGESGraph_HArray1OfTextFontDef)&  fonts,
   const Handle(TColStd_HArray1OfReal)&           slants,
   const Handle(TColStd_HArray1OfReal)&           rotations,
   const Handle(TColStd_HArray1OfInteger)&        mirrorFlags,
   const Handle(TColStd_HArray1OfInteger)&        rotFlags,
   const Handle(TColgp_HArray1OfXYZ)&             start,
   const Handle(Interface_HArray1OfHAsciiString)& texts)
{ 
  Standard_Integer num = nbChars->Length();

  if ( nbChars->Lower()     != 1 ||
      (widths->Lower()      != 1 || widths->Length()      != num) ||
      (heights->Lower()     != 1 || heights->Length()     != num) ||
      (fontCodes->Lower()   != 1 || fontCodes->Length()   != num) ||
      (fonts->Lower()       != 1 || fonts->Length()       != num) ||
      (slants->Lower()      != 1 || slants->Length()      != num) ||
      (rotations->Lower()   != 1 || rotations->Length()   != num) ||
      (mirrorFlags->Lower() != 1 || mirrorFlags->Length() != num) ||
      (rotFlags->Lower()    != 1 || rotFlags->Length()    != num) ||
      (start->Lower()       != 1 || start->Length()       != num) ||
      (texts->Lower()       != 1 || texts->Length()       != num) )
    Standard_DimensionMismatch::Raise("IGESDimen_GeneralNote : Init");

  theNbChars        = nbChars; 
  theBoxWidths      = widths;
  theBoxHeights     = heights;
  theFontCodes      = fontCodes;
  theFontEntities   = fonts;
  theSlantAngles    = slants;
  theRotationAngles = rotations;
  theMirrorFlags    = mirrorFlags;
  theRotateFlags    = rotFlags;
  theStartPoints    = start;
  theTexts          = texts;
  InitTypeAndForm(212,FormNumber());
// FormNumber for Graphical Representation
}

    void  IGESDimen_GeneralNote::SetFormNumber (const Standard_Integer form)
{
  if ((form < 0 || form > 8) && (form < 100 || form > 102) && form != 105)
    Standard_OutOfRange::Raise("IGESDimen_GeneralNote : SetFormNumber");
  InitTypeAndForm(212,form);
}


    Standard_Integer  IGESDimen_GeneralNote::NbStrings () const 
{
  return theNbChars->Length();
}

    Standard_Integer  IGESDimen_GeneralNote::NbCharacters
  (const Standard_Integer Index) const 
{
  return theNbChars->Value(Index);
}

    Standard_Real  IGESDimen_GeneralNote::BoxWidth
  (const Standard_Integer Index) const 
{
  return theBoxWidths->Value(Index);
}

    Standard_Real  IGESDimen_GeneralNote::BoxHeight
  (const Standard_Integer Index) const 
{
  return theBoxHeights->Value(Index);
}

    Standard_Boolean  IGESDimen_GeneralNote::IsFontEntity
  (const Standard_Integer Index) const 
{
  return (! (theFontEntities->Value(Index)).IsNull());
}

    Standard_Integer  IGESDimen_GeneralNote::FontCode
  (const Standard_Integer Index) const 
{
  return theFontCodes->Value(Index);
}

    Handle(IGESGraph_TextFontDef)  IGESDimen_GeneralNote::FontEntity
  (const Standard_Integer Index) const 
{
  return theFontEntities->Value(Index);
}

    Standard_Real  IGESDimen_GeneralNote::SlantAngle
  (const Standard_Integer Index) const 
{
  return theSlantAngles->Value(Index);
}

    Standard_Real  IGESDimen_GeneralNote::RotationAngle
  (const Standard_Integer Index) const 
{
  return theRotationAngles->Value(Index);
}

    Standard_Integer  IGESDimen_GeneralNote::MirrorFlag
  (const Standard_Integer Index) const 
{
  return theMirrorFlags->Value(Index);
}

    Standard_Integer  IGESDimen_GeneralNote::RotateFlag
  (const Standard_Integer Index) const 
{
  return theRotateFlags->Value(Index);
}

    gp_Pnt  IGESDimen_GeneralNote::StartPoint
  (const Standard_Integer Index) const 
{
  gp_Pnt point(theStartPoints->Value(Index));
  return point;
}

    gp_Pnt  IGESDimen_GeneralNote::TransformedStartPoint
  (const Standard_Integer Index) const 
{
  gp_XYZ point = (theStartPoints->Value(Index));
  if (HasTransf()) Location().Transforms(point);
  return gp_Pnt(point);
}

    Standard_Real  IGESDimen_GeneralNote::ZDepthStartPoint
  (const Standard_Integer Index) const 
{
  return ((theStartPoints->Value(Index)).Z());
}

    Handle(TCollection_HAsciiString)  IGESDimen_GeneralNote::Text
  (const Standard_Integer Index) const 
{
  return theTexts->Value(Index);
}
