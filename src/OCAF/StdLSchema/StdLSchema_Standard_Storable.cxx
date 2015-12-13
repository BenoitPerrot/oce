#ifndef _StdLSchema_Standard_Storable_HeaderFile
#include <StdLSchema_Standard_Storable.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Foundation/Standard/Standard_Storable.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif

void StdLSchema_Standard_Storable::SWrite(const Standard_Storable& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();

  f.EndWriteObjectData();
}

void StdLSchema_Standard_Storable::SRead(Standard_Storable& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

  f.EndReadObjectData();
}
