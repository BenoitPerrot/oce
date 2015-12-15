#ifndef _ShapeSchema_gp_Pnt_HeaderFile
#include <ShapeSchema_gp_Pnt.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <Mathematics/Primitives/gp_Pnt.hxx>
#endif
#ifndef _ShapeSchema_gp_XYZ_HeaderFile
#include <ShapeSchema_gp_XYZ.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void ShapeSchema_gp_Pnt::SWrite(const gp_Pnt& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    ShapeSchema_gp_XYZ::SWrite(pp._CSFDB_Getgp_Pntcoord(),f,theSchema);

  f.EndWriteObjectData();
}

void ShapeSchema_gp_Pnt::SRead(gp_Pnt& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    ShapeSchema_gp_XYZ::SRead((gp_XYZ&)pp._CSFDB_Getgp_Pntcoord(),f,theSchema);

  f.EndReadObjectData();
}
