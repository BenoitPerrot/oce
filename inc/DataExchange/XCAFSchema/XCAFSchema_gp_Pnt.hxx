// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFSchema_gp_Pnt_HeaderFile
#define _XCAFSchema_gp_Pnt_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Foundation/Storage/Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif

#ifndef _XCAFSchema_Standard_Storable_HeaderFile
#include <DataExchange/XCAFSchema/XCAFSchema_Standard_Storable.hxx>
#endif


class gp_Pnt;

class XCAFSchema_gp_Pnt {
public:
  Standard_EXPORT static void SAdd(const gp_Pnt&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const gp_Pnt&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(gp_Pnt&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
