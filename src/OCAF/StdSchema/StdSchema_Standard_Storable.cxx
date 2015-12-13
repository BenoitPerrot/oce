#ifndef _StdSchema_Standard_Storable_HeaderFile
#include <StdSchema_Standard_Storable.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Foundation/Standard/Standard_Storable.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_Standard_Storable::SWrite(const Standard_Storable& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();

  f.EndWriteObjectData();
}

void StdSchema_Standard_Storable::SRead(Standard_Storable& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

  f.EndReadObjectData();
}
