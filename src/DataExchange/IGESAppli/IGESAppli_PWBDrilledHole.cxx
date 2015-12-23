// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <DataExchange/IGESAppli/IGESAppli_PWBDrilledHole.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_PWBDrilledHole)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_PWBDrilledHole)
IMPLEMENT_DOWNCAST(IGESAppli_PWBDrilledHole,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_PWBDrilledHole)

IGESAppli_PWBDrilledHole::IGESAppli_PWBDrilledHole ()    {  }


    void  IGESAppli_PWBDrilledHole::Init
  (const Standard_Integer nbPropVal,
   const Standard_Real aDrillDia, const Standard_Real aFinishDia,
   const Standard_Integer aCode)
{
  theNbPropertyValues = nbPropVal;
  theDrillDiameter    = aDrillDia;
  theFinishDiameter   = aFinishDia;
  theFunctionCode     = aCode;
  InitTypeAndForm(406,26);
}


    Standard_Integer  IGESAppli_PWBDrilledHole::NbPropertyValues () const
{
  return theNbPropertyValues;
}

    Standard_Real  IGESAppli_PWBDrilledHole::DrillDiameterSize () const
{
  return theDrillDiameter;
}

    Standard_Real  IGESAppli_PWBDrilledHole::FinishDiameterSize () const
{
  return theFinishDiameter;
}

    Standard_Integer  IGESAppli_PWBDrilledHole::FunctionCode () const
{
  return theFunctionCode;
}
