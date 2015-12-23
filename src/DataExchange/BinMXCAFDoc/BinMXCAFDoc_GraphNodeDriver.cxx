// Created on: 2005-05-17
// Created by: Eugeny NAPALKOV
// Copyright (c) 2005-2014 OPEN CASCADE SAS
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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_GraphNodeDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMXCAFDoc_GraphNodeDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMXCAFDoc_GraphNodeDriver)
IMPLEMENT_DOWNCAST(BinMXCAFDoc_GraphNodeDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMXCAFDoc_GraphNodeDriver)
#include <XCAFDoc_GraphNode.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
BinMXCAFDoc_GraphNodeDriver::BinMXCAFDoc_GraphNodeDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
     : BinMDF_ADriver(theMsgDriver, STANDARD_TYPE(XCAFDoc_GraphNode)->Name()) {
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMXCAFDoc_GraphNodeDriver::NewEmpty() const {
  return new XCAFDoc_GraphNode();
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean BinMXCAFDoc_GraphNodeDriver::Paste(const BinObjMgt_Persistent& theSource,
						    const Handle(TDF_Attribute)& theTarget,
						    BinObjMgt_RRelocationTable& theRelocTable) const
{
  Handle(XCAFDoc_GraphNode) aT = Handle(XCAFDoc_GraphNode)::DownCast(theTarget);
  Standard_Integer anID;

  // Read Fathers
  if (! (theSource >> anID))
    return Standard_False;
  while(anID != -1) {
    Handle(XCAFDoc_GraphNode) aNode;
    if(theRelocTable.IsBound(anID)) {
      aNode = Handle(XCAFDoc_GraphNode)::DownCast(theRelocTable.Find(anID));
    } else {
      aNode = Handle(XCAFDoc_GraphNode)::DownCast(aT->NewEmpty());
      theRelocTable.Bind(anID, aNode);
    }
    aT->SetFather(aNode);

    if (! (theSource >> anID))
      return Standard_False;    
  }

  // Read Children
  if (! (theSource >> anID))
    return Standard_False;
  while(anID != -1) {
    Handle(XCAFDoc_GraphNode) aNode;
    if(theRelocTable.IsBound(anID)) {
      aNode = Handle(XCAFDoc_GraphNode)::DownCast(theRelocTable.Find(anID));
    } else {
      aNode = Handle(XCAFDoc_GraphNode)::DownCast(aT->NewEmpty());
      theRelocTable.Bind(anID, aNode);
    }
    aT->SetChild(aNode);

    if (! (theSource >> anID))
      return Standard_False;    
  }

  // Graph id
  Standard_GUID aGUID;
  if (! (theSource >> aGUID))
    return Standard_False;
  aT->SetGraphID(aGUID);


  return Standard_True;
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void BinMXCAFDoc_GraphNodeDriver::Paste(const Handle(TDF_Attribute)& theSource,
                                        BinObjMgt_Persistent& theTarget,
                                        BinObjMgt_SRelocationTable& theRelocTable) const
{
  Handle(XCAFDoc_GraphNode) aS = Handle(XCAFDoc_GraphNode)::DownCast(theSource);
  Standard_Integer i, aNb, anID;

  // Write fathers
  aNb = aS->NbFathers();
  for(i = 1; i <= aNb; i++) {
    Handle(XCAFDoc_GraphNode) aNode = aS->GetFather(i);
    anID = theRelocTable.Add(aNode);
    theTarget << anID;
  }
  theTarget.PutInteger(-1);

  // Write children
  aNb = aS->NbChildren();
  for(i = 1; i <= aNb; i++) {
    Handle(XCAFDoc_GraphNode) aNode = aS->GetChild(i);
    anID = theRelocTable.Add(aNode);
    theTarget << anID;
  }
  theTarget.PutInteger(-1);

  // Graph id
  theTarget << aS->ID();
}

