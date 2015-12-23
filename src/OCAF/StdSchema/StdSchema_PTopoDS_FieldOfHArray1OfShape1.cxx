#ifndef _StdSchema_PTopoDS_FieldOfHArray1OfShape1_HeaderFile
#include <OCAF/StdSchema/StdSchema_PTopoDS_FieldOfHArray1OfShape1.hxx>
#endif
#ifndef _PTopoDS_FieldOfHArray1OfShape1_HeaderFile
#include <OCAF/PTopoDS/PTopoDS_FieldOfHArray1OfShape1.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_PTopoDS_FieldOfHArray1OfShape1::SAdd(const PTopoDS_FieldOfHArray1OfShape1& p, const Handle(Storage_Schema)& theSchema)
{
    Standard_Integer i;
  for (i = 0; i < p.Length(); i++) {
    StdSchema_PTopoDS_Shape1::SAdd(p.Value(i),theSchema);    
  }

}

void StdSchema_PTopoDS_FieldOfHArray1OfShape1::SWrite(const PTopoDS_FieldOfHArray1OfShape1& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    StdSchema_PTopoDS_Shape1::SWrite(pp.Value(i),f,theSchema);

  }
  f.EndWriteObjectData();
}

void StdSchema_PTopoDS_FieldOfHArray1OfShape1::SRead(PTopoDS_FieldOfHArray1OfShape1& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    StdSchema_PTopoDS_Shape1::SRead((PTopoDS_Shape1&)pp.Value(j),f,theSchema);

  }
  f.EndReadObjectData();
}
