#ifndef _StdSchema_PNaming_FieldOfHArray1OfNamedShape_HeaderFile
#include <StdSchema_PNaming_FieldOfHArray1OfNamedShape.hxx>
#endif
#ifndef _PNaming_FieldOfHArray1OfNamedShape_HeaderFile
#include <OCAF/PNaming/PNaming_FieldOfHArray1OfNamedShape.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_PNaming_FieldOfHArray1OfNamedShape::SAdd(const PNaming_FieldOfHArray1OfNamedShape& p, const Handle(Storage_Schema)& theSchema)
{
    Standard_Integer i;
  for (i = 0; i < p.Length(); i++) {
    theSchema->PersistentToAdd(p.Value(i));    
  }

}

void StdSchema_PNaming_FieldOfHArray1OfNamedShape::SWrite(const PNaming_FieldOfHArray1OfNamedShape& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    theSchema->WritePersistentReference(pp.Value(i),f);

  }
  f.EndWriteObjectData();
}

void StdSchema_PNaming_FieldOfHArray1OfNamedShape::SRead(PNaming_FieldOfHArray1OfNamedShape& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    Handle(PNaming_NamedShape) par;

    theSchema->ReadPersistentReference(par,f);
    pp.SetValue(j,par);

  }
  f.EndReadObjectData();
}
