#ifndef _ShapeSchema_PTopoDS_TShell1_HeaderFile
#include <ShapeSchema_PTopoDS_TShell1.hxx>
#endif
#ifndef _PTopoDS_TShell1_HeaderFile
#include <PTopoDS_TShell1.hxx>
#endif
#ifndef _ShapeSchema_PTopoDS_HArray1OfShape1_HeaderFile
#include <ShapeSchema_PTopoDS_HArray1OfShape1.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

IMPLEMENT_STANDARD_HANDLE(ShapeSchema_PTopoDS_TShell1,Storage_CallBack)
IMPLEMENT_STANDARD_RTTIEXT(ShapeSchema_PTopoDS_TShell1,Storage_CallBack)

Handle(Standard_Persistent) ShapeSchema_PTopoDS_TShell1::New() const
{
  return new PTopoDS_TShell1(Storage_stCONSTclCOM());
}

void ShapeSchema_PTopoDS_TShell1::SAdd(const Handle(PTopoDS_TShell1)& p, const Handle(Storage_Schema)& theSchema)
{
  if (!p.IsNull()) {
    if (theSchema->AddPersistent(p,"PTopoDS_TShell1")) {
         theSchema->PersistentToAdd(p->_CSFDB_GetPTopoDS_TShape1myShapes());

    }
  }
}

void ShapeSchema_PTopoDS_TShell1::Add(const Handle(Standard_Persistent)& p, const Handle(Storage_Schema)& theSchema) const
{
  ShapeSchema_PTopoDS_TShell1::SAdd((Handle(PTopoDS_TShell1)&)p,theSchema);
}

void ShapeSchema_PTopoDS_TShell1::SWrite(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{ 
  if (!p.IsNull()) {
    Handle(PTopoDS_TShell1) &pp = (Handle(PTopoDS_TShell1)&)p;
    theSchema->WritePersistentObjectHeader(p,f);

    (void)pp; // dummy to avoid compiler warning on unused arg
    
    f.BeginWritePersistentObjectData();
    theSchema->WritePersistentReference(pp->_CSFDB_GetPTopoDS_TShape1myShapes(),f);
  f.PutInteger(pp->_CSFDB_GetPTopoDS_TShape1myFlags());

    f.EndWritePersistentObjectData();
  }
}

void ShapeSchema_PTopoDS_TShell1::Write(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema) const
{ 
  ShapeSchema_PTopoDS_TShell1::SWrite(p,f,theSchema);
}


void ShapeSchema_PTopoDS_TShell1::SRead(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{ 
  if (!p.IsNull()) {
    Handle(PTopoDS_TShell1) &pp = (Handle(PTopoDS_TShell1)&)p;

    (void)pp; // dummy to avoid compiler warning on unused arg

    theSchema->ReadPersistentObjectHeader(f);
    f.BeginReadPersistentObjectData();

    Handle(PTopoDS_HArray1OfShape1) PTopoDS_TShape1myShapes;

    theSchema->ReadPersistentReference(PTopoDS_TShape1myShapes,f);
    pp->_CSFDB_SetPTopoDS_TShape1myShapes(PTopoDS_TShape1myShapes);

    Standard_Integer PTopoDS_TShape1myFlags;
    f.GetInteger(PTopoDS_TShape1myFlags);
    pp->_CSFDB_SetPTopoDS_TShape1myFlags(PTopoDS_TShape1myFlags);

    f.EndReadPersistentObjectData();
  }
}

void ShapeSchema_PTopoDS_TShell1::Read(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema) const

{ 
  ShapeSchema_PTopoDS_TShell1::SRead(p,f,theSchema);
}
