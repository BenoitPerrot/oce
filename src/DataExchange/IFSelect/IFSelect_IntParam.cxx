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

#include <IFSelect_IntParam.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_IntParam)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_IntParam)
IMPLEMENT_DOWNCAST(IFSelect_IntParam,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_IntParam)
#include <Interface_Static.hxx>


IFSelect_IntParam::IFSelect_IntParam ()
      {  theval = 0;  }

    void  IFSelect_IntParam::SetStaticName (const Standard_CString statname)
      {  thestn.Clear();  thestn.AssignCat (statname);  }

    Standard_Integer  IFSelect_IntParam::Value () const 
{
  if (thestn.Length() == 0) return theval;
  if (!Interface_Static::IsSet(thestn.ToCString()) ) return theval;
  return Interface_Static::IVal(thestn.ToCString());
}

    void  IFSelect_IntParam::SetValue (const Standard_Integer val)
{
  theval = val;
  if (thestn.Length() == 0) return;
  if (!Interface_Static::IsPresent(thestn.ToCString()) ) return;
  Interface_Static::SetIVal (thestn.ToCString(),theval);
}
