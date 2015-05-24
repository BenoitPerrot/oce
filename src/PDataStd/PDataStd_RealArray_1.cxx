// Created on: 2008-03-26
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

#include <PColStd_HArray1OfReal.hxx>
#include <PDataStd_RealArray_1.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PDataStd_RealArray_1)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PDataStd_RealArray_1)
IMPLEMENT_DOWNCAST(PDataStd_RealArray_1,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PDataStd_RealArray_1)

//=======================================================================
//function : PDataStd_RealArray_1
//purpose  : 
//=======================================================================

PDataStd_RealArray_1::PDataStd_RealArray_1 () : myDelta(Standard_False) { }

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void PDataStd_RealArray_1::Init(const Standard_Integer lower,
			    const Standard_Integer upper)
{
  myValue = new PColStd_HArray1OfReal(lower, upper);
}


//=======================================================================
//function : SetValue
//purpose  : 
//=======================================================================

void PDataStd_RealArray_1::SetValue(const Standard_Integer index, const Standard_Real value)
{
  myValue->SetValue(index, value);
}

//=======================================================================
//function : Value
//purpose  : 
//=======================================================================

Standard_Real PDataStd_RealArray_1::Value( const Standard_Integer index ) const
{
  return myValue->Value(index);
}

//=======================================================================
//function : Lower
//purpose  : 
//=======================================================================
Standard_Integer PDataStd_RealArray_1::Lower (void) const 
{ return myValue->Lower(); }


//=======================================================================
//function : Upper
//purpose  : 
//=======================================================================
Standard_Integer PDataStd_RealArray_1::Upper (void) const 
{ return myValue->Upper(); }

//=======================================================================
//function : SetDelta
//purpose  : 
//=======================================================================
void PDataStd_RealArray_1::SetDelta(const Standard_Boolean delta)
{
  myDelta = delta;
}

//=======================================================================
//function : GetDelta
//purpose  : 
//=======================================================================
Standard_Boolean PDataStd_RealArray_1::GetDelta() const
{
  return myDelta;
}
