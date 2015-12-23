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

#include <DataExchange/StepVisual/StepVisual_PresentedItem.hxx>
#include <DataExchange/StepVisual/StepVisual_PresentationRepresentationSelect.hxx>
#include <DataExchange/StepVisual/StepVisual_PresentedItemRepresentation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_PresentedItemRepresentation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_PresentedItemRepresentation)
IMPLEMENT_DOWNCAST(StepVisual_PresentedItemRepresentation,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_PresentedItemRepresentation)

StepVisual_PresentedItemRepresentation::StepVisual_PresentedItemRepresentation  ()    {  }

void  StepVisual_PresentedItemRepresentation::Init
  (const StepVisual_PresentationRepresentationSelect& aPresentation,
   const Handle(StepVisual_PresentedItem)& aItem)
{  thePresentation = aPresentation;  theItem = aItem;  }

void  StepVisual_PresentedItemRepresentation::SetPresentation (const StepVisual_PresentationRepresentationSelect& aPresentation)
{  thePresentation = aPresentation;  }

StepVisual_PresentationRepresentationSelect  StepVisual_PresentedItemRepresentation::Presentation () const
{  return thePresentation;  }

void  StepVisual_PresentedItemRepresentation::SetItem (const Handle(StepVisual_PresentedItem)& aItem)
{  theItem = aItem;  }

Handle(StepVisual_PresentedItem)  StepVisual_PresentedItemRepresentation::Item () const
{  return theItem;  }
