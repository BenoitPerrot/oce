#ifndef _StdSchema_gp_Trsf2d_HeaderFile
#include <StdSchema_gp_Trsf2d.hxx>
#endif
#ifndef _gp_Trsf2d_HeaderFile
#include <gp_Trsf2d.hxx>
#endif
#ifndef _StdSchema_gp_Mat2d_HeaderFile
#include <StdSchema_gp_Mat2d.hxx>
#endif
#ifndef _StdSchema_gp_XY_HeaderFile
#include <StdSchema_gp_XY.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_gp_Trsf2d::SWrite(const gp_Trsf2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
  f.PutReal(pp._CSFDB_Getgp_Trsf2dscale());
  f.PutInteger(pp._CSFDB_Getgp_Trsf2dshape());
    StdSchema_gp_Mat2d::SWrite(pp._CSFDB_Getgp_Trsf2dmatrix(),f,theSchema);
    StdSchema_gp_XY::SWrite(pp._CSFDB_Getgp_Trsf2dloc(),f,theSchema);

  f.EndWriteObjectData();
}

void StdSchema_gp_Trsf2d::SRead(gp_Trsf2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    Standard_Real gp_Trsf2dscale;
    f.GetReal(gp_Trsf2dscale);
    pp._CSFDB_Setgp_Trsf2dscale(gp_Trsf2dscale);

    gp_TrsfForm gp_Trsf2dshape;
    Standard_Integer i_CSFDB_gp_Trsf2dshape;
    f.GetInteger(i_CSFDB_gp_Trsf2dshape);
    gp_Trsf2dshape = (gp_TrsfForm)i_CSFDB_gp_Trsf2dshape;
    pp._CSFDB_Setgp_Trsf2dshape(gp_Trsf2dshape);

    StdSchema_gp_Mat2d::SRead((gp_Mat2d&)pp._CSFDB_Getgp_Trsf2dmatrix(),f,theSchema);

    StdSchema_gp_XY::SRead((gp_XY&)pp._CSFDB_Getgp_Trsf2dloc(),f,theSchema);

  f.EndReadObjectData();
}
