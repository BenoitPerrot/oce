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

#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/MoniTool/MoniTool_Element.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <DataExchange/MoniTool/MoniTool_TransientElem.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MoniTool_TransientElem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MoniTool_Element),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MoniTool_TransientElem)
IMPLEMENT_DOWNCAST(MoniTool_TransientElem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MoniTool_TransientElem)

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#include <DataExchange/MoniTool/MoniTool_DataInfo.hxx>


MoniTool_TransientElem::MoniTool_TransientElem (const Handle(Standard_Transient)& akey)
    : theval (akey)
{  SetHashCode ( TColStd_MapTransientHasher::HashCode (akey, IntegerLast() ) );  }


    const Handle(Standard_Transient)&  MoniTool_TransientElem::Value () const
      {  return theval;  }

    Standard_Boolean  MoniTool_TransientElem::Equates
  (const Handle(MoniTool_Element)& other) const
{
  if (other.IsNull()) return Standard_False;
  if (GetHashCode() != other->GetHashCode()) return Standard_False;
  if (other->DynamicType() != DynamicType()) return Standard_False;
  Handle(MoniTool_TransientElem) another = Handle(MoniTool_TransientElem)::DownCast(other);
//  return (theval == another->Value());
  return  TColStd_MapTransientHasher::IsEqual (theval,another->Value());
}

    Handle(Standard_Type)  MoniTool_TransientElem::ValueType () const
      {  return MoniTool_DataInfo::Type(theval);  }

    Standard_CString  MoniTool_TransientElem::ValueTypeName () const
      {  return MoniTool_DataInfo::TypeName(theval);  }
