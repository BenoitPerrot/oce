// Created on: 1992-06-24
// Created by: Gilles DEBARBOUILLE
// Copyright (c) 1992-1999 Matra Datavision
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

#include <TCollection_HAsciiString.hxx>
#include <Units_Dimensions.hxx>
#include <Units_UnitsSequence.hxx>
#include <Units_Quantity.hxx>
#include <Foundation/Standard/Standard_Type.hxx>

IMPLEMENT_STANDARD_TYPE(Units_Quantity)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Units_Quantity)

IMPLEMENT_DOWNCAST(Units_Quantity,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Units_Quantity)

#include <Units_Unit.hxx>
#include <Units_Operators.hxx>


//=======================================================================
//function : IsEqual
//purpose  : 
//=======================================================================

Standard_Boolean Units_Quantity::IsEqual(const Standard_CString astring) const
{
  return (Name() == astring);
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void Units_Quantity::Dump(const Standard_Integer ashift,
			  const Standard_Integer alevel) const
{
  Standard_Integer index;
  cout<<endl;
  for(int i=0; i<ashift; i++)cout<<"  ";
  cout<<Name()<<endl;
//  thedimensions->Dump(ashift+1);
  if(alevel > 0)
    {
      for(index=1;index<=theunitssequence->Length();index++)
	theunitssequence->Value(index)->Dump(ashift+1,0);
    }
}

//=======================================================================
//function : operator ==
//purpose  : 
//=======================================================================

Standard_Boolean operator ==(const Handle(Units_Quantity)& aquantity,const Standard_CString astring)
{
  return aquantity->IsEqual(astring);
}
