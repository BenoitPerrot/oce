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

#include <DataExchange/IFSelect/IFSelect_SessionFile.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_BasicDumper.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_BasicDumper)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SessionDumper),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_BasicDumper)
IMPLEMENT_DOWNCAST(IFSelect_BasicDumper,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_BasicDumper)
#include <DataExchange/IFSelect/IFSelect_IntParam.hxx>
#include <DataExchange/IFSelect/IFSelect_WorkSession.hxx>
#include <DataExchange/IFSelect/IFSelect_ShareOut.hxx>

#include <DataExchange/IFSelect/IFSelect_SelectModelRoots.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectModelEntities.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectEntityNumber.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectPointed.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectUnion.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectIntersection.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectDiff.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectUnknownEntities.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectErrorEntities.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectIncorrectEntities.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectRoots.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectRootComps.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectRange.hxx>
//#include <DataExchange/IFSelect/IFSelect_SelectTextType.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectShared.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectSharing.hxx>
#include <DataExchange/IFSelect/IFSelect_DispPerOne.hxx>
#include <DataExchange/IFSelect/IFSelect_DispGlobal.hxx>
#include <DataExchange/IFSelect/IFSelect_DispPerCount.hxx>
#include <DataExchange/IFSelect/IFSelect_TransformStandard.hxx>

#include <Interface_Macros.hxx>

#define FIRSTCHAR 1
// Param litteral "own" sous la forme  :"<val>" -> first = 3
// A present, forme simplifiee         : <val>  directement -> first = 1



IFSelect_BasicDumper::IFSelect_BasicDumper ()  {  }

    Standard_Boolean  IFSelect_BasicDumper::WriteOwn
  (IFSelect_SessionFile& file, const Handle(Standard_Transient)& item) const
{
  Handle(Standard_Type) type = item->DynamicType();
  if (type == STANDARD_TYPE(IFSelect_SelectModelRoots))      return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectModelEntities))   return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectEntityNumber)) {
    DeclareAndCast(IFSelect_SelectEntityNumber,sen,item);
    file.SendItem(sen->Number());
    return Standard_True;
  }
  if (type == STANDARD_TYPE(IFSelect_SelectPointed))         return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectUnion))           return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectIntersection))    return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectDiff))            return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectUnknownEntities)) return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectErrorEntities))   return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectIncorrectEntities)) return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectRoots))           return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectRootComps))       return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectRange)) {
    DeclareAndCast(IFSelect_SelectRange,sra,item);
    file.SendItem(sra->Lower());
    file.SendItem(sra->Upper());
    return Standard_True;
  }
/*  if (type == STANDARD_TYPE(IFSelect_SelectTextType)) {
    DeclareAndCast(IFSelect_SelectTextType,sty,item);
    if (sty->IsExact()) file.SendText("exact");
    else                file.SendText("contains");
    file.SendText(sty->SignatureText().ToCString());
    return Standard_True;
  } */
  if (type == STANDARD_TYPE(IFSelect_SelectShared))          return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_SelectSharing))         return Standard_True;

  if (type == STANDARD_TYPE(IFSelect_DispPerOne))            return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_DispGlobal))            return Standard_True;
  if (type == STANDARD_TYPE(IFSelect_DispPerCount)) {
    DeclareAndCast(IFSelect_DispPerCount,dpc,item);
    file.SendItem(dpc->Count());
    return Standard_True;
  }

  if (type == STANDARD_TYPE(IFSelect_TransformStandard)) {
    DeclareAndCast(IFSelect_TransformStandard,trs,item);
    if (trs->CopyOption()) file.SendText("copy");
    else                   file.SendText("onthespot");
    Standard_Integer nbm = trs->NbModifiers();
    for (Standard_Integer i = 1; i <= nbm; i ++)
      file.SendItem(trs->Modifier(i));
  }

  return Standard_False;
}

    Standard_Boolean  IFSelect_BasicDumper::ReadOwn
  (IFSelect_SessionFile& file, const TCollection_AsciiString& type,
   Handle(Standard_Transient)& item) const
{
  if (type.IsEqual("IFSelect_SelectModelRoots"))
    {  item = new IFSelect_SelectModelRoots ();     return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectModelEntities"))
    {  item = new IFSelect_SelectModelEntities ();  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectEntityNumber")) {
    Handle(IFSelect_SelectEntityNumber) sen =
      new IFSelect_SelectEntityNumber ();
    sen->SetNumber (GetCasted(IFSelect_IntParam,file.ItemValue(1)));
    item = sen;
    return Standard_True;
  }
  if (type.IsEqual("IFSelect_SelectPointed"))
    {  item = new IFSelect_SelectPointed;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectUnion"))
    {  item = new IFSelect_SelectUnion;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectIntersection"))
    {  item = new IFSelect_SelectIntersection;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectDiff"))
    {  item = new IFSelect_SelectDiff;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectUnknownEntities"))
    {  item = new IFSelect_SelectUnknownEntities;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectErrorEntities"))
    {  item = new IFSelect_SelectErrorEntities;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectIncorrectEntities"))
    {  item = new IFSelect_SelectIncorrectEntities;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectRoots"))
    {  item = new IFSelect_SelectRoots;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectRootComps"))
    {  item = new IFSelect_SelectRootComps;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectRange")) {
    Handle(IFSelect_SelectRange) sra = new IFSelect_SelectRange;
    sra->SetRange (GetCasted(IFSelect_IntParam,file.ItemValue(1)),
		   GetCasted(IFSelect_IntParam,file.ItemValue(2)) );
    item = sra;
    return Standard_True;
  }
  if (type.IsEqual("IFSelect_SelectTextType")) {
    const TCollection_AsciiString exname = file.ParamValue(1);
    if (exname.Length() < FIRSTCHAR) return Standard_False;
    if      (exname.Value(FIRSTCHAR) == 'e') {}
    else if (exname.Value(FIRSTCHAR) == 'c') {}
    else  return Standard_False;
//    item = new IFSelect_SelectTextType (file.TextValue(2).ToCString(),exact);
//    return Standard_True;
  }
  if (type.IsEqual("IFSelect_SelectShared"))
    {  item = new IFSelect_SelectShared;  return Standard_True;  }
  if (type.IsEqual("IFSelect_SelectSharing"))
    {  item = new IFSelect_SelectSharing;  return Standard_True;  }

  if (type.IsEqual("IFSelect_DispPerOne"))
    {  item = new IFSelect_DispPerOne;  return Standard_True;  }
  if (type.IsEqual("IFSelect_DispGlobal"))
    {  item = new IFSelect_DispGlobal;  return Standard_True;  }
  if (type.IsEqual("IFSelect_DispPerCount")) {
    Handle(IFSelect_DispPerCount) dpc = new IFSelect_DispPerCount;
    dpc->SetCount (GetCasted(IFSelect_IntParam,file.ItemValue(1)) );
    item = dpc;
    return Standard_True;
  }

  if (type.IsEqual("IFSelect_TransformStandard")) {
    Standard_Boolean copyoption;
    const TCollection_AsciiString copyname = file.ParamValue(1);
    if (copyname.Length() < FIRSTCHAR) return Standard_False;
    if      (copyname.Value(FIRSTCHAR) == 'c') copyoption = Standard_True;
    else if (copyname.Value(FIRSTCHAR) == 'o') copyoption = Standard_False;
    else  return Standard_False;
    Handle(IFSelect_TransformStandard) trs = new IFSelect_TransformStandard;
    trs->SetCopyOption(copyoption);
    Standard_Integer nbp = file.NbParams();
    for (Standard_Integer i = 2; i <= nbp; i ++) {
      DeclareAndCast(IFSelect_Modifier,modif,file.ItemValue(i));
      if (!modif.IsNull()) trs->AddModifier(modif);
    }
    item = trs;
    return Standard_True;
  }

  return Standard_False;
}
