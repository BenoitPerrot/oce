#ifndef _ShapeSchema_gp_Ax22d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Ax22d.hxx>
#endif
#ifndef _gp_Ax22d_HeaderFile
#include <Mathematics/Primitives/gp_Ax22d.hxx>
#endif
#ifndef _ShapeSchema_gp_Pnt2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Pnt2d.hxx>
#endif
#ifndef _ShapeSchema_gp_Dir2d_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_Dir2d.hxx>
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

void ShapeSchema_gp_Ax22d::SWrite(const gp_Ax22d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_Pnt2d::SWrite(pp._CSFDB_Getgp_Ax22dpoint(),f,theSchema);
    ShapeSchema_gp_Dir2d::SWrite(pp._CSFDB_Getgp_Ax22dvydir(),f,theSchema);
    ShapeSchema_gp_Dir2d::SWrite(pp._CSFDB_Getgp_Ax22dvxdir(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Ax22d::SRead(gp_Ax22d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_Pnt2d::SRead((gp_Pnt2d&)pp._CSFDB_Getgp_Ax22dpoint(),f,theSchema);

    ShapeSchema_gp_Dir2d::SRead((gp_Dir2d&)pp._CSFDB_Getgp_Ax22dvydir(),f,theSchema);

    ShapeSchema_gp_Dir2d::SRead((gp_Dir2d&)pp._CSFDB_Getgp_Ax22dvxdir(),f,theSchema);

  f.EndReadObjectData();
}
