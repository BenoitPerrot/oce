#ifndef _ShapeSchema_DBC_VArrayOfExtCharacter_HeaderFile
#include <ShapeSchema_DBC_VArrayOfExtCharacter.hxx>
#endif
#ifndef _DBC_VArrayOfExtCharacter_HeaderFile
#include <OCAF/DBC/DBC_VArrayOfExtCharacter.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_DBC_VArrayOfExtCharacter::SWrite(const DBC_VArrayOfExtCharacter& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    f.PutExtCharacter(pp.Value(i));

  }
  f.EndWriteObjectData();
}

void ShapeSchema_DBC_VArrayOfExtCharacter::SRead(DBC_VArrayOfExtCharacter& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    Standard_ExtCharacter par;

    f.GetExtCharacter(par);
    pp.SetValue(j,par);

  }
  f.EndReadObjectData();
}
