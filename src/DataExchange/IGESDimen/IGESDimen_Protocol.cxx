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

#include <DataExchange/Interface/Interface_Protocol.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <DataExchange/IGESDimen/IGESDimen_Protocol.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDimen_Protocol)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_Protocol),
  STANDARD_TYPE(Interface_Protocol),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDimen_Protocol)
IMPLEMENT_DOWNCAST(IGESDimen_Protocol,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDimen_Protocol)

#include <DataExchange/IGESDimen/IGESDimen_GeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_AngularDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_GeneralSymbol.hxx>
#include <DataExchange/IGESDimen/IGESDimen_BasicDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_LeaderArrow.hxx>
#include <DataExchange/IGESDimen/IGESDimen_CenterLine.hxx>
#include <DataExchange/IGESDimen/IGESDimen_LinearDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_CurveDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_NewDimensionedGeometry.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DiameterDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_NewGeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionDisplayData.hxx>
#include <DataExchange/IGESDimen/IGESDimen_OrdinateDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionTolerance.hxx>
#include <DataExchange/IGESDimen/IGESDimen_PointDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionUnits.hxx>
#include <DataExchange/IGESDimen/IGESDimen_RadiusDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionedGeometry.hxx>
#include <DataExchange/IGESDimen/IGESDimen_Section.hxx>
#include <DataExchange/IGESDimen/IGESDimen_SectionedArea.hxx>
#include <DataExchange/IGESDimen/IGESDimen_FlagNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_WitnessLine.hxx>
#include <DataExchange/IGESDimen/IGESDimen_GeneralLabel.hxx>

#include <DataExchange/IGESGeom/IGESGeom.hxx>
#include <DataExchange/IGESGraph/IGESGraph.hxx>
#include <DataExchange/IGESGeom/IGESGeom_Protocol.hxx>
#include <DataExchange/IGESGraph/IGESGraph_Protocol.hxx>

static int deja = 0;
static Handle(Standard_Type) atype01,atype02,atype03,atype04,atype05,atype06,
  atype07,atype08,atype09,atype10,atype11,atype12,atype13,atype14,atype15,
  atype16,atype17,atype18,atype19,atype20,atype21,atype22,atype23;

    IGESDimen_Protocol::IGESDimen_Protocol ()
{
  if (deja) return;  deja = 1;
  atype01 = STANDARD_TYPE(IGESDimen_AngularDimension);
  atype02 = STANDARD_TYPE(IGESDimen_BasicDimension);
  atype03 = STANDARD_TYPE(IGESDimen_CenterLine);
  atype04 = STANDARD_TYPE(IGESDimen_CurveDimension);
  atype05 = STANDARD_TYPE(IGESDimen_DiameterDimension);
  atype06 = STANDARD_TYPE(IGESDimen_DimensionDisplayData);
  atype07 = STANDARD_TYPE(IGESDimen_DimensionTolerance);
  atype08 = STANDARD_TYPE(IGESDimen_DimensionUnits);
  atype09 = STANDARD_TYPE(IGESDimen_DimensionedGeometry);
  atype10 = STANDARD_TYPE(IGESDimen_FlagNote);
  atype11 = STANDARD_TYPE(IGESDimen_GeneralLabel);
  atype12 = STANDARD_TYPE(IGESDimen_GeneralNote);
  atype13 = STANDARD_TYPE(IGESDimen_GeneralSymbol);
  atype14 = STANDARD_TYPE(IGESDimen_LeaderArrow);
  atype15 = STANDARD_TYPE(IGESDimen_LinearDimension);
  atype16 = STANDARD_TYPE(IGESDimen_NewDimensionedGeometry);
  atype17 = STANDARD_TYPE(IGESDimen_NewGeneralNote);
  atype18 = STANDARD_TYPE(IGESDimen_OrdinateDimension);
  atype10 = STANDARD_TYPE(IGESDimen_PointDimension);
  atype20 = STANDARD_TYPE(IGESDimen_RadiusDimension);
  atype21 = STANDARD_TYPE(IGESDimen_Section);
  atype22 = STANDARD_TYPE(IGESDimen_SectionedArea);
  atype23 = STANDARD_TYPE(IGESDimen_WitnessLine);
}

    Standard_Integer IGESDimen_Protocol::NbResources () const
      {  return 2;  }

    Handle(Interface_Protocol) IGESDimen_Protocol::Resource
  (const Standard_Integer num) const
{
  Handle(Interface_Protocol) res;
  if (num == 1) res = IGESGraph::Protocol();
  if (num == 2) res = IGESGeom::Protocol();
  return res;
}

    Standard_Integer IGESDimen_Protocol::TypeNumber
  (const Handle(Standard_Type)& atype) const
{
  if      (atype == atype01) return  1;
  else if (atype == atype02) return  2;
  else if (atype == atype03) return  3;
  else if (atype == atype04) return  4;
  else if (atype == atype05) return  5;
  else if (atype == atype06) return  6;
  else if (atype == atype07) return  7;
  else if (atype == atype08) return  8;
  else if (atype == atype09) return  9;
  else if (atype == atype10) return 10;
  else if (atype == atype11) return 11;
  else if (atype == atype12) return 12;
  else if (atype == atype13) return 13;
  else if (atype == atype14) return 14;
  else if (atype == atype15) return 15;
  else if (atype == atype16) return 16;
  else if (atype == atype17) return 17;
  else if (atype == atype18) return 18;
  else if (atype == atype19) return 19;
  else if (atype == atype20) return 20;
  else if (atype == atype21) return 21;
  else if (atype == atype22) return 22;
  else if (atype == atype23) return 23;
  return 0;
}
