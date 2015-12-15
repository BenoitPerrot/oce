#ifndef _XCAFSchema_gp_Ax3_HeaderFile
#include <XCAFSchema_gp_Ax3.hxx>
#endif
#ifndef _gp_Ax3_HeaderFile
#include <Mathematics/Primitives/gp_Ax3.hxx>
#endif
#ifndef _XCAFSchema_gp_Ax1_HeaderFile
#include <XCAFSchema_gp_Ax1.hxx>
#endif
#ifndef _XCAFSchema_gp_Dir_HeaderFile
#include <XCAFSchema_gp_Dir.hxx>
#endif
#ifndef _XCAFSchema_gp_Dir_HeaderFile
#include <XCAFSchema_gp_Dir.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void XCAFSchema_gp_Ax3::SWrite(const gp_Ax3& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    XCAFSchema_gp_Ax1::SWrite(pp._CSFDB_Getgp_Ax3axis(),f,theSchema);
    XCAFSchema_gp_Dir::SWrite(pp._CSFDB_Getgp_Ax3vydir(),f,theSchema);
    XCAFSchema_gp_Dir::SWrite(pp._CSFDB_Getgp_Ax3vxdir(),f,theSchema);

  f.EndWriteObjectData();
}

void XCAFSchema_gp_Ax3::SRead(gp_Ax3& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    XCAFSchema_gp_Ax1::SRead((gp_Ax1&)pp._CSFDB_Getgp_Ax3axis(),f,theSchema);

    XCAFSchema_gp_Dir::SRead((gp_Dir&)pp._CSFDB_Getgp_Ax3vydir(),f,theSchema);

    XCAFSchema_gp_Dir::SRead((gp_Dir&)pp._CSFDB_Getgp_Ax3vxdir(),f,theSchema);

  f.EndReadObjectData();
}
