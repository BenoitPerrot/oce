#ifndef _ShapeSchema_gp_Vec_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Vec.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <Mathematics/Primitives/gp_Vec.hxx>
#endif
#ifndef _ShapeSchema_gp_XYZ_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_XYZ.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Vec::SWrite(const gp_Vec& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_XYZ::SWrite(pp._CSFDB_Getgp_Veccoord(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Vec::SRead(gp_Vec& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_XYZ::SRead((gp_XYZ&)pp._CSFDB_Getgp_Veccoord(),f,theSchema);

  f.EndReadObjectData();
}
