#ifndef _ShapeSchema_PColgp_FieldOfHArray2OfXYZ_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_PColgp_FieldOfHArray2OfXYZ.hxx>
#endif
#ifndef _PColgp_FieldOfHArray2OfXYZ_HeaderFile
#include <OCAF/PColgp/PColgp_FieldOfHArray2OfXYZ.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_PColgp_FieldOfHArray2OfXYZ::SWrite(const PColgp_FieldOfHArray2OfXYZ& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    ShapeSchema_gp_XYZ::SWrite(pp.Value(i),f,theSchema);

  }
  f.EndWriteObjectData();
}

void ShapeSchema_PColgp_FieldOfHArray2OfXYZ::SRead(PColgp_FieldOfHArray2OfXYZ& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    ShapeSchema_gp_XYZ::SRead((gp_XYZ&)pp.Value(j),f,theSchema);

  }
  f.EndReadObjectData();
}
