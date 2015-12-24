// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_DBC_VArrayOfCharacter_HeaderFile
#define _ShapeSchema_DBC_VArrayOfCharacter_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Foundation/Storage/Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif



class DBC_VArrayOfCharacter;

class ShapeSchema_DBC_VArrayOfCharacter {
public:
  Standard_EXPORT static void SAdd(const DBC_VArrayOfCharacter&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const DBC_VArrayOfCharacter&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(DBC_VArrayOfCharacter&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
