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

#include <XSControl_TransferReader.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/Interface/Interface_Graph.hxx>
#include <DataExchange/STEPSelections/STEPSelections_SelectForTransfer.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(STEPSelections_SelectForTransfer)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XSControl_SelectForTransfer),
  STANDARD_TYPE(IFSelect_SelectExtract),
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(STEPSelections_SelectForTransfer)
IMPLEMENT_DOWNCAST(STEPSelections_SelectForTransfer,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(STEPSelections_SelectForTransfer)
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <Foundation/TColStd/TColStd_HSequenceOfTransient.hxx>
#include <DataExchange/Transfer/Transfer_TransientProcess.hxx>
//=======================================================================
//function : STEPSelections_SelectForTransfer
//purpose  : 
//=======================================================================

STEPSelections_SelectForTransfer::STEPSelections_SelectForTransfer()
{
  
}
//=======================================================================
//function : STEPSelections_SelectForTransfer
//purpose  : 
//=======================================================================

STEPSelections_SelectForTransfer::STEPSelections_SelectForTransfer(const Handle(XSControl_TransferReader)& TR)
{
  SetReader(TR);
}

//=======================================================================
//function : RootResult
//purpose  : 
//=======================================================================

 Interface_EntityIterator STEPSelections_SelectForTransfer::RootResult(const Interface_Graph& /*G*/) const
{
  Interface_EntityIterator iter;
  Handle(TColStd_HSequenceOfTransient) roots = Reader()->TransientProcess()->RootsForTransfer();
  Standard_Integer nb = roots->Length();
    for(Standard_Integer i = 1; i <= nb ; i++) 
      iter.GetOneItem(roots->Value(i));
  return iter;
}

