// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PColgp_FieldOfHArray2OfXYZ_HeaderFile
#define _ShapeSchema_PColgp_FieldOfHArray2OfXYZ_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Foundation/Storage/Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif

#ifndef _ShapeSchema_gp_XYZ_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_gp_XYZ.hxx>
#endif


class PColgp_FieldOfHArray2OfXYZ;

class ShapeSchema_PColgp_FieldOfHArray2OfXYZ {
public:
  Standard_EXPORT static void SAdd(const PColgp_FieldOfHArray2OfXYZ&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PColgp_FieldOfHArray2OfXYZ&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PColgp_FieldOfHArray2OfXYZ&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
