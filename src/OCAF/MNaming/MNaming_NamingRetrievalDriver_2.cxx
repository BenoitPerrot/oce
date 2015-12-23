// Created on: 2008-08-15
// Created by: Sergey ZARITCHNY
// Copyright (c) 2008-2014 OPEN CASCADE SAS
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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MNaming/MNaming_NamingRetrievalDriver_2.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MNaming_NamingRetrievalDriver_2)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MNaming_NamingRetrievalDriver_2)
IMPLEMENT_DOWNCAST(MNaming_NamingRetrievalDriver_2,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MNaming_NamingRetrievalDriver_2)
#include <OCAF/PNaming/PNaming_Naming_2.hxx>
#include <OCAF/PNaming/PNaming_NamedShape.hxx>
#include <OCAF/PNaming/PNaming_HArray1OfNamedShape.hxx>
#include <OCAF/PNaming/PNaming_Name_2.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <TNaming_NamedShape.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <TNaming_Naming.hxx>
#include <TNaming_NameType.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : IntegerToShapeEnum
//purpose  : 
//=======================================================================

static TopAbs_ShapeEnum IntegerToShapeEnum (const Standard_Integer I)
{
  switch(I)
    {
    case  0 : return TopAbs_COMPOUND;
    case  1 : return TopAbs_COMPSOLID;
    case  2 : return TopAbs_SOLID;
    case  3 : return TopAbs_SHELL;
    case  4 : return TopAbs_FACE;
    case  5 : return TopAbs_WIRE;
    case  6 : return TopAbs_EDGE;
    case  7 : return TopAbs_VERTEX;
    default : return TopAbs_SHAPE;
    }
}

//=======================================================================
//function : IntegerToNameType
//purpose  : 
//=======================================================================

static  TNaming_NameType IntegerToNameType (const Standard_Integer I) 
{
  switch(I)
    {
    case  0 : return TNaming_UNKNOWN;  
    case  1 : return TNaming_IDENTITY;
    case  2 : return TNaming_MODIFUNTIL;
    case  3 : return TNaming_GENERATION;
    case  4 : return TNaming_INTERSECTION;
    case  5 : return TNaming_UNION;
    case  6 : return TNaming_SUBSTRACTION;
    case  7 : return TNaming_CONSTSHAPE; 
    case  8 : return TNaming_FILTERBYNEIGHBOURGS;
    case  9 : return TNaming_ORIENTATION;
    case  10 : return TNaming_WIREIN;
      default :
	Standard_DomainError::Raise("TNaming_NameType; enum term unknown ");
    }
  return TNaming_UNKNOWN;
}
//=======================================================================
//function : IntegerToOrientation
//purpose  : 
//=======================================================================
static TopAbs_Orientation IntegerToOrientation (const Standard_Integer Or) 
{
  switch(Or)
    {
    case  0 : return TopAbs_FORWARD;  
    case  1 : return TopAbs_REVERSED;
    case  2 : return TopAbs_INTERNAL;
    case  3 : return TopAbs_EXTERNAL;   
      default :
	Standard_DomainError::Raise("PNaming_Name::myOrientation; enum term unknown ");
    }
  return TopAbs_FORWARD;
}
//=======================================================================
//function : MNaming_Naming_2
//purpose  : 
//=======================================================================

MNaming_NamingRetrievalDriver_2::MNaming_NamingRetrievalDriver_2(
 const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MNaming_NamingRetrievalDriver_2::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MNaming_NamingRetrievalDriver_2::SourceType() const
{ return STANDARD_TYPE(PNaming_Naming_2);  }


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MNaming_NamingRetrievalDriver_2::NewEmpty() const
{ return new TNaming_Naming (); }

//=======================================================================
//function : PNamingToTNaming
//purpose  : 
//=======================================================================

static void PNamingToTNaming (const Handle(PNaming_Name_2)& PN,
			      TNaming_Name&                 TN,
			      const Handle(MDF_RRelocationTable)& RelocTable)

{
  TN.Type     (IntegerToNameType (PN->Type     ()));
  TN.ShapeType(IntegerToShapeEnum(PN->ShapeType()));
  Handle(TNaming_NamedShape) NS;
  Handle(TDF_Data) aData;
  if (!PN->Arguments().IsNull()) {
    Standard_Integer NbArgs = PN->Arguments()->Length();
    for (Standard_Integer i = 1; i <= NbArgs; i++) {
      RelocTable->HasRelocation(PN->Arguments()->Value(i),NS);
      TN.Append(NS);
      if(aData.IsNull() && !NS.IsNull())
	aData = NS->Label().Data();
    }
  }

  Handle(TNaming_NamedShape) StopNS;
  if (!PN->StopNamedShape().IsNull()) 
    RelocTable->HasRelocation(PN->StopNamedShape(),StopNS);
  TN.StopNamedShape(StopNS);  
  TN.Index(PN->Index());

  TDF_Label tLab; // Null label.  
  Handle(PCollection_HAsciiString) pEntry = PN->ContextLabel();
  if (!pEntry.IsNull()) {
    TCollection_AsciiString entry = pEntry->Convert();
    if(!aData.IsNull())
      TDF_Tool::Label(aData,entry,tLab);
  }
  TN.ContextLabel(tLab);
  TN.Orientation(IntegerToOrientation (PN->Orientation ()));
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MNaming_NamingRetrievalDriver_2::Paste (
  const Handle(PDF_Attribute)&        Source,
  const Handle(TDF_Attribute)&        Target,
  const Handle(MDF_RRelocationTable)& RelocTable) const
{
  Handle(PNaming_Naming_2) PF = Handle(PNaming_Naming_2)::DownCast(Source);
  Handle(TNaming_Naming) F  = Handle(TNaming_Naming)::DownCast(Target);  
  PNamingToTNaming (PF->GetName(),F->ChangeName(),RelocTable);
}

