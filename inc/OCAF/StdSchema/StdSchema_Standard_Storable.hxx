// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSchema_Standard_Storable_HeaderFile
#define _StdSchema_Standard_Storable_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Foundation/Storage/Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif



class Standard_Storable;

class StdSchema_Standard_Storable {
public:
  Standard_EXPORT static void SAdd(const Standard_Storable&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const Standard_Storable&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(Standard_Storable&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
