#ifndef _ShapeSchema_gp_Ax2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Ax2d.hxx>
#endif
#ifndef _gp_Ax2d_HeaderFile
#include <Mathematics/Primitives/gp_Ax2d.hxx>
#endif
#ifndef _ShapeSchema_gp_Pnt2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Pnt2d.hxx>
#endif
#ifndef _ShapeSchema_gp_Dir2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Dir2d.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Ax2d::SWrite(const gp_Ax2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_Pnt2d::SWrite(pp._CSFDB_Getgp_Ax2dloc(),f,theSchema);
    ShapeSchema_gp_Dir2d::SWrite(pp._CSFDB_Getgp_Ax2dvdir(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Ax2d::SRead(gp_Ax2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_Pnt2d::SRead((gp_Pnt2d&)pp._CSFDB_Getgp_Ax2dloc(),f,theSchema);

    ShapeSchema_gp_Dir2d::SRead((gp_Dir2d&)pp._CSFDB_Getgp_Ax2dvdir(),f,theSchema);

  f.EndReadObjectData();
}
