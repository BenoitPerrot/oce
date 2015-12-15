#ifndef _ShapeSchema_gp_Circ2d_HeaderFile
#include <ShapeSchema_gp_Circ2d.hxx>
#endif
#ifndef _gp_Circ2d_HeaderFile
#include <Mathematics/Primitives/gp_Circ2d.hxx>
#endif
#ifndef _ShapeSchema_gp_Ax22d_HeaderFile
#include <ShapeSchema_gp_Ax22d.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Circ2d::SWrite(const gp_Circ2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_Ax22d::SWrite(pp._CSFDB_Getgp_Circ2dpos(),f,theSchema);
  f.PutReal(pp._CSFDB_Getgp_Circ2dradius());

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Circ2d::SRead(gp_Circ2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_Ax22d::SRead((gp_Ax22d&)pp._CSFDB_Getgp_Circ2dpos(),f,theSchema);

    Standard_Real gp_Circ2dradius;
    f.GetReal(gp_Circ2dradius);
    pp._CSFDB_Setgp_Circ2dradius(gp_Circ2dradius);

  f.EndReadObjectData();
}
