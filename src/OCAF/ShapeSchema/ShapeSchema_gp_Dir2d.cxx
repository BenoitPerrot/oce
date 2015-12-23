#ifndef _ShapeSchema_gp_Dir2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Dir2d.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#endif
#ifndef _ShapeSchema_gp_XY_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_XY.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Dir2d::SWrite(const gp_Dir2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_XY::SWrite(pp._CSFDB_Getgp_Dir2dcoord(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Dir2d::SRead(gp_Dir2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_XY::SRead((gp_XY&)pp._CSFDB_Getgp_Dir2dcoord(),f,theSchema);

  f.EndReadObjectData();
}
