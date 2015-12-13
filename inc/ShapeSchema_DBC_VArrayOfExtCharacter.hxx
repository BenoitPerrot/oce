// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_DBC_VArrayOfExtCharacter_HeaderFile
#define _ShapeSchema_DBC_VArrayOfExtCharacter_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif



class DBC_VArrayOfExtCharacter;

class ShapeSchema_DBC_VArrayOfExtCharacter {
public:
  Standard_EXPORT static void SAdd(const DBC_VArrayOfExtCharacter&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const DBC_VArrayOfExtCharacter&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(DBC_VArrayOfExtCharacter&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
