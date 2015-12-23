#ifndef _StdLSchema_PDataStd_ByteArray_HeaderFile
#include <StdLSchema_PDataStd_ByteArray.hxx>
#endif
#ifndef _PDataStd_ByteArray_HeaderFile
#include <OCAF/PDataStd/PDataStd_ByteArray.hxx>
#endif
#ifndef _StdLSchema_PColStd_HArray1OfInteger_HeaderFile
#include <StdLSchema_PColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

IMPLEMENT_STANDARD_HANDLE(StdLSchema_PDataStd_ByteArray,Storage_CallBack)
IMPLEMENT_STANDARD_RTTIEXT(StdLSchema_PDataStd_ByteArray,Storage_CallBack)

Handle(Standard_Persistent) StdLSchema_PDataStd_ByteArray::New() const
{
  return new PDataStd_ByteArray(Storage_stCONSTclCOM());
}

void StdLSchema_PDataStd_ByteArray::SAdd(const Handle(PDataStd_ByteArray)& p, const Handle(Storage_Schema)& theSchema)
{
  if (!p.IsNull()) {
    if (theSchema->AddPersistent(p,"PDataStd_ByteArray")) {
         theSchema->PersistentToAdd(p->_CSFDB_GetPDataStd_ByteArraymyValues());

    }
  }
}

void StdLSchema_PDataStd_ByteArray::Add(const Handle(Standard_Persistent)& p, const Handle(Storage_Schema)& theSchema) const
{
  StdLSchema_PDataStd_ByteArray::SAdd((Handle(PDataStd_ByteArray)&)p,theSchema);
}

void StdLSchema_PDataStd_ByteArray::SWrite(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{ 
  if (!p.IsNull()) {
    Handle(PDataStd_ByteArray) &pp = (Handle(PDataStd_ByteArray)&)p;
    theSchema->WritePersistentObjectHeader(p,f);

    (void)pp; // dummy to avoid compiler warning on unused arg
    
    f.BeginWritePersistentObjectData();
    theSchema->WritePersistentReference(pp->_CSFDB_GetPDataStd_ByteArraymyValues(),f);

    f.EndWritePersistentObjectData();
  }
}

void StdLSchema_PDataStd_ByteArray::Write(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema) const
{ 
  StdLSchema_PDataStd_ByteArray::SWrite(p,f,theSchema);
}


void StdLSchema_PDataStd_ByteArray::SRead(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{ 
  if (!p.IsNull()) {
    Handle(PDataStd_ByteArray) &pp = (Handle(PDataStd_ByteArray)&)p;

    (void)pp; // dummy to avoid compiler warning on unused arg

    theSchema->ReadPersistentObjectHeader(f);
    f.BeginReadPersistentObjectData();

    Handle(PColStd_HArray1OfInteger) PDataStd_ByteArraymyValues;

    theSchema->ReadPersistentReference(PDataStd_ByteArraymyValues,f);
    pp->_CSFDB_SetPDataStd_ByteArraymyValues(PDataStd_ByteArraymyValues);

    f.EndReadPersistentObjectData();
  }
}

void StdLSchema_PDataStd_ByteArray::Read(const Handle(Standard_Persistent)& p, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema) const

{ 
  StdLSchema_PDataStd_ByteArray::SRead(p,f,theSchema);
}
