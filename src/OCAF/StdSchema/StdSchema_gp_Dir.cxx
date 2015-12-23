#ifndef _StdSchema_gp_Dir_HeaderFile
#include <OCAF/StdSchema/StdSchema_gp_Dir.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <Mathematics/Primitives/gp_Dir.hxx>
#endif
#ifndef _StdSchema_gp_XYZ_HeaderFile
#include <OCAF/StdSchema/StdSchema_gp_XYZ.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_gp_Dir::SWrite(const gp_Dir& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    StdSchema_gp_XYZ::SWrite(pp._CSFDB_Getgp_Dircoord(),f,theSchema);

  f.EndWriteObjectData();
}

void StdSchema_gp_Dir::SRead(gp_Dir& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    StdSchema_gp_XYZ::SRead((gp_XYZ&)pp._CSFDB_Getgp_Dircoord(),f,theSchema);

  f.EndReadObjectData();
}
