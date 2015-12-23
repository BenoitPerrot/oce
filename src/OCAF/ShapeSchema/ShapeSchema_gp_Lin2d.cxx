#ifndef _ShapeSchema_gp_Lin2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Lin2d.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#endif
#ifndef _ShapeSchema_gp_Ax2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Ax2d.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Lin2d::SWrite(const gp_Lin2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_Ax2d::SWrite(pp._CSFDB_Getgp_Lin2dpos(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Lin2d::SRead(gp_Lin2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_Ax2d::SRead((gp_Ax2d&)pp._CSFDB_Getgp_Lin2dpos(),f,theSchema);

  f.EndReadObjectData();
}
