#ifndef _StdSchema_PTopLoc_Location_HeaderFile
#include <OCAF/StdSchema/StdSchema_PTopLoc_Location.hxx>
#endif
#ifndef _PTopLoc_Location_HeaderFile
#include <OCAF/PTopLoc/PTopLoc_Location.hxx>
#endif
#ifndef _StdSchema_PTopLoc_ItemLocation_HeaderFile
#include <OCAF/StdSchema/StdSchema_PTopLoc_ItemLocation.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void StdSchema_PTopLoc_Location::SAdd(const PTopLoc_Location& p, const Handle(Storage_Schema)& theSchema)
{
     theSchema->PersistentToAdd(p._CSFDB_GetPTopLoc_LocationmyData());

}

void StdSchema_PTopLoc_Location::SWrite(const PTopLoc_Location& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
    theSchema->WritePersistentReference(pp._CSFDB_GetPTopLoc_LocationmyData(),f);

  f.EndWriteObjectData();
}

void StdSchema_PTopLoc_Location::SRead(PTopLoc_Location& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    Handle(PTopLoc_ItemLocation) PTopLoc_LocationmyData;

    theSchema->ReadPersistentReference(PTopLoc_LocationmyData,f);
    pp._CSFDB_SetPTopLoc_LocationmyData(PTopLoc_LocationmyData);

  f.EndReadObjectData();
}
