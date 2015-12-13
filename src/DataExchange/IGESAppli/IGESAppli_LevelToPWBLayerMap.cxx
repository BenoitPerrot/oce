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

#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>
#include <Interface_HArray1OfHAsciiString.hxx>
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_LevelToPWBLayerMap)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_LevelToPWBLayerMap)
IMPLEMENT_DOWNCAST(IGESAppli_LevelToPWBLayerMap,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_LevelToPWBLayerMap)


IGESAppli_LevelToPWBLayerMap::IGESAppli_LevelToPWBLayerMap ()    {  }


    void  IGESAppli_LevelToPWBLayerMap::Init
  (const Standard_Integer nbPropVal,
   const Handle(TColStd_HArray1OfInteger)& allExchLevels,
   const Handle(Interface_HArray1OfHAsciiString)& allNativeLevels,
   const Handle(TColStd_HArray1OfInteger)& allPhysLevels,
   const Handle(Interface_HArray1OfHAsciiString)& allExchIdents)
{
  Standard_Integer num = allExchLevels->Length();
  if ( allExchLevels->Lower()   != 1 ||
      (allNativeLevels->Lower() != 1 || allNativeLevels->Length() != num) ||
      (allPhysLevels->Lower()   != 1 || allPhysLevels->Length()   != num) ||
      (allExchIdents->Lower()   != 1 || allExchIdents->Length()   != num) )
    Standard_DimensionMismatch::Raise("IGESAppli_LevelToPWBLayerMap: Init");
  theNbPropertyValues        = nbPropVal;
  theExchangeFileLevelNumber = allExchLevels;
  theNativeLevel             = allNativeLevels;
  thePhysicalLayerNumber     = allPhysLevels;
  theExchangeFileLevelIdent  = allExchIdents;
  InitTypeAndForm(406,24);
}

    Standard_Integer  IGESAppli_LevelToPWBLayerMap::NbPropertyValues () const
{
  return theNbPropertyValues;
}

    Standard_Integer  IGESAppli_LevelToPWBLayerMap::NbLevelToLayerDefs () const
{
  return theExchangeFileLevelNumber->Length();
}

    Standard_Integer  IGESAppli_LevelToPWBLayerMap::ExchangeFileLevelNumber
  (const Standard_Integer Index) const
{
  return theExchangeFileLevelNumber->Value(Index);
}

    Handle(TCollection_HAsciiString)  IGESAppli_LevelToPWBLayerMap::NativeLevel
  (const Standard_Integer Index) const
{
  return theNativeLevel->Value(Index);
}

    Standard_Integer  IGESAppli_LevelToPWBLayerMap::PhysicalLayerNumber
  (const Standard_Integer Index) const
{
  return thePhysicalLayerNumber->Value(Index);
}

    Handle(TCollection_HAsciiString)  IGESAppli_LevelToPWBLayerMap::ExchangeFileLevelIdent
  (const Standard_Integer Index) const
{
  return theExchangeFileLevelIdent->Value(Index);
}
