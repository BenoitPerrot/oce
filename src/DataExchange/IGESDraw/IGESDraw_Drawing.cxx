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

#include <DataExchange/IGESDraw/IGESDraw_HArray1OfViewKindEntity.hxx>
#include <Mathematics/Collections/TColgp_HArray1OfXY.hxx>
#include <DataExchange/IGESData/IGESData_HArray1OfIGESEntity.hxx>
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <DataExchange/IGESData/IGESData_ViewKindEntity.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Mathematics/Primitives/gp_XY.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <DataExchange/IGESDraw/IGESDraw_Drawing.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDraw_Drawing)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDraw_Drawing)
IMPLEMENT_DOWNCAST(IGESDraw_Drawing,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDraw_Drawing)
#include <DataExchange/IGESDraw/IGESDraw_View.hxx>
#include <DataExchange/IGESDraw/IGESDraw_PerspectiveView.hxx>

#include <DataExchange/IGESGraph/IGESGraph_DrawingUnits.hxx>
#include <DataExchange/IGESGraph/IGESGraph_DrawingSize.hxx>

#include <Interface_Macros.hxx>


IGESDraw_Drawing::IGESDraw_Drawing ()    {  }


    void IGESDraw_Drawing::Init
  (const Handle(IGESDraw_HArray1OfViewKindEntity)& allViews,
   const Handle(TColgp_HArray1OfXY)&               allViewOrigins,
   const Handle(IGESData_HArray1OfIGESEntity)&     allAnnotations)
{
  if (!allViews.IsNull()) {
    Standard_Integer Len  = allViews->Length();
    Standard_Boolean Flag = ( allViewOrigins->Length() == Len );
    if (!Flag || allViews->Lower() != 1 || allViewOrigins->Lower() != 1)
      Standard_DimensionMismatch::Raise("IGESDraw_Drawing : Init");
  }
  if (!allAnnotations.IsNull())
    if (allAnnotations->Lower() != 1) Standard_DimensionMismatch::Raise
      ("IGESDraw_Drawing : Init");

  theViews         = allViews; 
  theViewOrigins   = allViewOrigins; 
  theAnnotations   = allAnnotations;
  InitTypeAndForm(404,0);
}

    Standard_Integer IGESDraw_Drawing::NbViews () const
{
  return (theViews.IsNull() ? 0 : theViews->Length());
}

    Handle(IGESData_ViewKindEntity) IGESDraw_Drawing::ViewItem
  (const Standard_Integer ViewIndex) const
{
  return theViews->Value(ViewIndex);
}

    gp_Pnt2d IGESDraw_Drawing::ViewOrigin
  (const Standard_Integer TViewIndex) const
{
  return (gp_Pnt2d (theViewOrigins->Value(TViewIndex)) );
}

    Standard_Integer IGESDraw_Drawing::NbAnnotations () const
{
  return (theAnnotations.IsNull() ? 0 : theAnnotations->Length() );
}

    Handle(IGESData_IGESEntity) IGESDraw_Drawing::Annotation
  (const Standard_Integer AnnotationIndex) const
{
  return ( theAnnotations->Value(AnnotationIndex) );
}

    gp_XY IGESDraw_Drawing::ViewToDrawing
  (const Standard_Integer NumView, const gp_XYZ& ViewCoords) const
{
  gp_XY         thisOrigin       = theViewOrigins->Value(NumView);
  Standard_Real XOrigin          = thisOrigin.X();
  Standard_Real YOrigin          = thisOrigin.Y();
  Standard_Real theScaleFactor=0.; 

  Handle(IGESData_ViewKindEntity) tempView = theViews->Value(NumView);
  if (tempView->IsKind(STANDARD_TYPE(IGESDraw_View)))
    {
      DeclareAndCast(IGESDraw_View, thisView, tempView);
      theScaleFactor   = thisView->ScaleFactor();
    }
  else if (tempView->IsKind(STANDARD_TYPE(IGESDraw_PerspectiveView)))
    {
      DeclareAndCast(IGESDraw_PerspectiveView, thisView, tempView);
      theScaleFactor   = thisView->ScaleFactor();
    }

  Standard_Real XV               = ViewCoords.X();
  Standard_Real YV               = ViewCoords.Y();

  Standard_Real XD = XOrigin + (theScaleFactor * XV);
  Standard_Real YD = YOrigin + (theScaleFactor * YV);

  return ( gp_XY(XD, YD) );
}


    Standard_Boolean  IGESDraw_Drawing::DrawingUnit (Standard_Real& val) const
{
  val = 0.;
  Handle(Standard_Type) typunit = STANDARD_TYPE(IGESGraph_DrawingUnits);
  if (NbTypedProperties(typunit) != 1) return Standard_False;
  DeclareAndCast(IGESGraph_DrawingUnits,units,TypedProperty(typunit)); 
  if (units.IsNull()) return Standard_False;
  val = units->UnitValue();
  return Standard_True;
}

    Standard_Boolean  IGESDraw_Drawing::DrawingSize
  (Standard_Real& X, Standard_Real& Y) const
{
  X = Y = 0.;
  Handle(Standard_Type) typsize = STANDARD_TYPE(IGESGraph_DrawingSize);
  if (NbTypedProperties(typsize) != 1) return Standard_False;
  DeclareAndCast(IGESGraph_DrawingSize,size,TypedProperty(typsize)); 
  if (size.IsNull()) return Standard_False;
  X = size->XSize();  Y = size->YSize();
  return Standard_True;
}
