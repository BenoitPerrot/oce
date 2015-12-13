// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFSchema_Standard_GUID_HeaderFile
#define _XCAFSchema_Standard_GUID_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif

#ifndef _XCAFSchema_Standard_Storable_HeaderFile
#include <XCAFSchema_Standard_Storable.hxx>
#endif


class Standard_GUID;

class XCAFSchema_Standard_GUID {
public:
  Standard_EXPORT static void SAdd(const Standard_GUID&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const Standard_GUID&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(Standard_GUID&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
