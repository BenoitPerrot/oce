#ifndef _StdLSchema_PCDM_Document_HeaderFile
#include <OCAF/StdLSchema/StdLSchema_PCDM_Document.hxx>
#endif
#ifndef _PCDM_Document_HeaderFile
#include <OCAF/PCDM/PCDM_Document.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

IMPLEMENT_STANDARD_HANDLE(StdLSchema_PCDM_Document,Storage_CallBack)
IMPLEMENT_STANDARD_RTTIEXT(StdLSchema_PCDM_Document,Storage_CallBack)

Handle(Standard_Persistent) StdLSchema_PCDM_Document::New() const
{
  Handle(Standard_Persistent) NullObject;
  return NullObject;
}

void StdLSchema_PCDM_Document::SAdd(const Handle(PCDM_Document)& p, const Handle(Storage_Schema)& theSchema)
{
  if (!p.IsNull()) {
    if (theSchema->AddPersistent(p,"PCDM_Document")) {
      
    }
  }
}

void StdLSchema_PCDM_Document::Add(const Handle(Standard_Persistent)& p, const Handle(Storage_Schema)& theSchema) const
{
  StdLSchema_PCDM_Document::SAdd((Handle(PCDM_Document)&)p,theSchema);
}

void StdLSchema_PCDM_Document::SWrite(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{ 
  if (!p.IsNull()) {
    Handle(PCDM_Document) &pp = (Handle(PCDM_Document)&)p;
    theSchema->WritePersistentObjectHeader(p,f);

    (void)pp; // dummy to avoid compiler warning on unused arg
    
    f.BeginWritePersistentObjectData();

    f.EndWritePersistentObjectData();
  }
}

void StdLSchema_PCDM_Document::Write(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema) const
{ 
  StdLSchema_PCDM_Document::SWrite(p,f,theSchema);
}


void StdLSchema_PCDM_Document::SRead(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{ 
  if (!p.IsNull()) {
    Handle(PCDM_Document) &pp = (Handle(PCDM_Document)&)p;

    (void)pp; // dummy to avoid compiler warning on unused arg

    theSchema->ReadPersistentObjectHeader(f);
    f.BeginReadPersistentObjectData();

    f.EndReadPersistentObjectData();
  }
}

void StdLSchema_PCDM_Document::Read(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema) const

{ 
  StdLSchema_PCDM_Document::SRead(p,f,theSchema);
}
