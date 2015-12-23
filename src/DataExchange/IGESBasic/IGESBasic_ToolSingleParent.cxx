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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <DataExchange/IGESBasic/IGESBasic_SingleParent.hxx>
#include <DataExchange/IGESData/IGESData_IGESReaderData.hxx>
#include <DataExchange/IGESData/IGESData_ParamReader.hxx>
#include <DataExchange/IGESData/IGESData_IGESWriter.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/IGESData/IGESData_DirChecker.hxx>
#include <DataExchange/Interface/Interface_ShareTool.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <DataExchange/Interface/Interface_CopyTool.hxx>
#include <DataExchange/IGESData/IGESData_IGESDumper.hxx>
#include <Foundation/Message/Message_Messenger.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolSingleParent.hxx>
#include <DataExchange/IGESData/IGESData_ParamCursor.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_HArray1OfIGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_Dump.hxx>
#include <DataExchange/Interface/Interface_Macros.hxx>

// MGE 03/08/98
#include <Foundation/Message/Message_Msg.hxx>
#include <DataExchange/IGESData/IGESData_Status.hxx>


IGESBasic_ToolSingleParent::IGESBasic_ToolSingleParent ()    {  }


void  IGESBasic_ToolSingleParent::ReadOwnParams
  (const Handle(IGESBasic_SingleParent)& ent,
   const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR) const
{
  // MGE 03/08/98
  // Building of messages
  //========================================
  Message_Msg Msg207("XSTEP_207");
  //========================================

  Standard_Integer tempNbParentEntities;
  Handle(IGESData_IGESEntity) tempParent;
  //Standard_Boolean st; //szv#4:S4163:12Mar99 not needed
  Standard_Integer nbval = 0;
  Handle(IGESData_HArray1OfIGESEntity)  tempChildren;
  IGESData_Status aStatus;

  if(!PR.ReadInteger (PR.Current(),tempNbParentEntities)){ //szv#4:S4163:12Mar99 `st=` not needed
    Message_Msg Msg204("XSTEP_204");
    PR.SendFail(Msg204);
  }
  //st = PR.ReadInteger(PR.Current(), Msg205, nbval); //szv#4:S4163:12Mar99 moved down

//  st = PR.ReadInteger (PR.Current(),"Number of Parent entities",tempNbParentEntities);
//  st = PR.ReadInteger(PR.Current(), "Count of Children", nbval);
  if (!PR.ReadInteger(PR.Current(), nbval)){
    Message_Msg Msg205("XSTEP_205");
    PR.SendFail(Msg205);
    nbval = -1;
  }
  if (!PR.ReadEntity(IR,PR.Current(),aStatus,tempParent)){ //szv#4:S4163:12Mar99 `st=` not needed
  //st = PR.ReadEntity(IR,PR.Current(),"ParentEntity",tempParent);
    Message_Msg Msg206("XSTEP_206");
    switch(aStatus) {
    case IGESData_ReferenceError: {  
      Message_Msg Msg216 ("IGES_216");
      Msg206.Arg(Msg216.Value());
      PR.SendFail(Msg206);
      break; }
    case IGESData_EntityError: {
      Message_Msg Msg217 ("IGES_217");
      Msg206.Arg(Msg217.Value());
      PR.SendFail(Msg206);
      break; }
    default:{
    }
    }
  }

  if (nbval > 0) PR.ReadEnts (IR,PR.CurrentList(nbval),Msg207,tempChildren); //szv#4:S4163:12Mar99 `st=` not needed
  //st = PR.ReadEnts (IR,PR.CurrentList(nbval),"Child Entities",tempChildren);
  DirChecker(ent).CheckTypeAndForm(PR.CCheck(),ent);
  ent->Init(tempNbParentEntities,tempParent,tempChildren);
}

void  IGESBasic_ToolSingleParent::WriteOwnParams
  (const Handle(IGESBasic_SingleParent)& ent, IGESData_IGESWriter& IW) const
{
  Standard_Integer upper = ent->NbChildren();
  IW.Send(ent->NbParentEntities());
  IW.Send(upper);
  IW.Send(ent->SingleParent());
  for (Standard_Integer i = 1; i <= upper; i ++)
    IW.Send(ent->Child(i));
}

void  IGESBasic_ToolSingleParent::OwnShared
  (const Handle(IGESBasic_SingleParent)& ent, Interface_EntityIterator& iter) const
{
  iter.GetOneItem(ent->SingleParent());
  Standard_Integer upper = ent->NbChildren();
  for (Standard_Integer i = 1; i <= upper; i ++)
    iter.GetOneItem(ent->Child(i));
}

void  IGESBasic_ToolSingleParent::OwnCopy
  (const Handle(IGESBasic_SingleParent)& another,
   const Handle(IGESBasic_SingleParent)& ent, Interface_CopyTool& TC) const
{
  Standard_Integer aNbParentEntities = another->NbParentEntities();
  DeclareAndCast(IGESData_IGESEntity,aparent,
		 TC.Transferred(another->SingleParent()));
  Standard_Integer upper = another->NbChildren();
  Handle(IGESData_HArray1OfIGESEntity)  EntArray = new
    IGESData_HArray1OfIGESEntity(1,upper);
  for (Standard_Integer i = 1; i <= upper; i ++)
    {
      DeclareAndCast
	(IGESData_IGESEntity,myentity,TC.Transferred(another->Child(i)));
      EntArray->SetValue(i,myentity);
    }
  ent->Init(aNbParentEntities,aparent,EntArray);
}

Standard_Boolean  IGESBasic_ToolSingleParent::OwnCorrect
  (const Handle(IGESBasic_SingleParent)& ent) const
{
  if (ent->NbParentEntities() == 1) return Standard_False;
  Standard_Integer nb = ent->NbChildren();
  Handle(IGESData_HArray1OfIGESEntity)  EntArray = new
    IGESData_HArray1OfIGESEntity (1,nb);
  for (Standard_Integer i = 1; i <= nb; i ++)
    EntArray->SetValue(i,ent->Child(i));
  ent->Init (1,ent->SingleParent(),EntArray);
  return Standard_True;    // nbparents = 1
}

IGESData_DirChecker  IGESBasic_ToolSingleParent::DirChecker
  (const Handle(IGESBasic_SingleParent)& /* ent */ ) const
{
  IGESData_DirChecker DC(402,9);  //Form no = 9 & Type = 402
  DC.Structure(IGESData_DefVoid);
  DC.GraphicsIgnored();
  DC.BlankStatusIgnored();
  DC.HierarchyStatusIgnored();
  return DC;
}

void  IGESBasic_ToolSingleParent::OwnCheck
  (const Handle(IGESBasic_SingleParent)& ent,
   const Interface_ShareTool& , Handle(Interface_Check)& ach) const
{
   // MGE 03/08/98
  // Building of messages
  //========================================
//  Message_Msg Msg204("XSTEP_204");
  //========================================
  if (ent->NbParentEntities() != 1){
    Message_Msg Msg204("XSTEP_204");
    ach->SendFail(Msg204);
  }
}

void  IGESBasic_ToolSingleParent::OwnDump
  (const Handle(IGESBasic_SingleParent)& ent, const IGESData_IGESDumper& dumper,
   const Handle(Message_Messenger)& S, const Standard_Integer level) const
{
  S << "IGESBasic_SingleParent" << endl;

  S << "Number of ParentEntities : " << ent->NbParentEntities() << endl;
  S << "ParentEntity : ";
  dumper.Dump(ent->SingleParent(),S,(level <= 4) ? 0 : 1);
  S << endl;
  S << "Children : ";
  IGESData_DumpEntities(S,dumper ,level,1, ent->NbChildren(),ent->Child);
  S << endl;
}
