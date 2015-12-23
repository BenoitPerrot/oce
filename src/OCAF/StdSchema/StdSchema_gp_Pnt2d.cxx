#ifndef _StdSchema_gp_Pnt2d_HeaderFile
#include <OCAF/StdSchema/StdSchema_gp_Pnt2d.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#endif
#ifndef _StdSchema_gp_XY_HeaderFile
#include <OCAF/StdSchema/StdSchema_gp_XY.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_gp_Pnt2d::SWrite(const gp_Pnt2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    StdSchema_gp_XY::SWrite(pp._CSFDB_Getgp_Pnt2dcoord(),f,theSchema);

  f.EndWriteObjectData();
}

void StdSchema_gp_Pnt2d::SRead(gp_Pnt2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    StdSchema_gp_XY::SRead((gp_XY&)pp._CSFDB_Getgp_Pnt2dcoord(),f,theSchema);

  f.EndReadObjectData();
}
