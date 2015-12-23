#ifndef _StdSchema_PColStd_FieldOfHArray1OfInteger_HeaderFile
#include <OCAF/StdSchema/StdSchema_PColStd_FieldOfHArray1OfInteger.hxx>
#endif
#ifndef _PColStd_FieldOfHArray1OfInteger_HeaderFile
#include <OCAF/PColStd/PColStd_FieldOfHArray1OfInteger.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_PColStd_FieldOfHArray1OfInteger::SWrite(const PColStd_FieldOfHArray1OfInteger& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    f.PutInteger(pp.Value(i));

  }
  f.EndWriteObjectData();
}

void StdSchema_PColStd_FieldOfHArray1OfInteger::SRead(PColStd_FieldOfHArray1OfInteger& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    Standard_Integer par;

    f.GetInteger(par);
    pp.SetValue(j,par);

  }
  f.EndReadObjectData();
}
