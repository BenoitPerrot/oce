#ifndef _ShapeSchema_PColgp_FieldOfHArray2OfPnt2d_HeaderFile
#include <ShapeSchema_PColgp_FieldOfHArray2OfPnt2d.hxx>
#endif
#ifndef _PColgp_FieldOfHArray2OfPnt2d_HeaderFile
#include <PColgp_FieldOfHArray2OfPnt2d.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_PColgp_FieldOfHArray2OfPnt2d::SWrite(const PColgp_FieldOfHArray2OfPnt2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg

  f.BeginWriteObjectData();
  f.PutInteger(pp.Length());
  for (Standard_Integer i = 0; i < pp.Length(); i++) {
    ShapeSchema_gp_Pnt2d::SWrite(pp.Value(i),f,theSchema);

  }
  f.EndWriteObjectData();
}

void ShapeSchema_PColgp_FieldOfHArray2OfPnt2d::SRead(PColgp_FieldOfHArray2OfPnt2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)theSchema; // dummy to avoid compiler warning on unused arg
  Standard_Integer size = 0;

  f.BeginReadObjectData();
  f.GetInteger(size);
  pp.Resize(size);

  for (Standard_Integer j = 0; j < size; j++) {
    ShapeSchema_gp_Pnt2d::SRead((gp_Pnt2d&)pp.Value(j),f,theSchema);

  }
  f.EndReadObjectData();
}
