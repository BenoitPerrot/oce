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

#include <Foundation/TColStd/TColStd_HSequenceOfTransient.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Transfer_MultipleBinder.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Transfer_MultipleBinder)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_Binder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Transfer_MultipleBinder)
IMPLEMENT_DOWNCAST(Transfer_MultipleBinder,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Transfer_MultipleBinder)
#include <Transfer_TransferFailure.hxx>



// Resultat Multiple
// Possibilite de definir un Resultat Multiple : plusieurs objets resultant
//  d un Transfert, sans pouvoir les distinguer
//  N.B. : Pour l heure, tous Transients (pourra evoluer)



Transfer_MultipleBinder::Transfer_MultipleBinder ()      { }


    Standard_Boolean Transfer_MultipleBinder::IsMultiple () const
{
  if (themulres.IsNull()) return Standard_False;
  return (themulres->Length() != 1);
}

    Handle(Standard_Type) Transfer_MultipleBinder::ResultType () const
      {  return STANDARD_TYPE(Standard_Transient);  }

    Standard_CString Transfer_MultipleBinder::ResultTypeName () const
      {  return "(list)";  }

//  ....        Gestion du Resultat Multiple        ....

    void Transfer_MultipleBinder::AddResult
  (const Handle(Standard_Transient)& res)
{
  if (themulres.IsNull()) themulres = new TColStd_HSequenceOfTransient();
  themulres->Append(res);
}

    Standard_Integer  Transfer_MultipleBinder::NbResults () const
      {  return (themulres.IsNull() ? 0 : themulres->Length());  }

    Handle(Standard_Transient) Transfer_MultipleBinder::ResultValue
  (const Standard_Integer num) const
      {  return themulres->Value(num);  }

    Handle(TColStd_HSequenceOfTransient) Transfer_MultipleBinder::MultipleResult
  () const
{
  if (!themulres.IsNull()) return themulres;
  return new TColStd_HSequenceOfTransient();
}

    void Transfer_MultipleBinder::SetMultipleResult
  (const Handle(TColStd_HSequenceOfTransient)& mulres)
      {  themulres = mulres;  }
