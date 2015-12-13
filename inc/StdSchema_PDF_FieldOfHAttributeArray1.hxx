// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSchema_PDF_FieldOfHAttributeArray1_HeaderFile
#define _StdSchema_PDF_FieldOfHAttributeArray1_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif

#ifndef _StdSchema_PDF_Attribute_HeaderFile
#include <StdSchema_PDF_Attribute.hxx>
#endif


class PDF_FieldOfHAttributeArray1;

class StdSchema_PDF_FieldOfHAttributeArray1 {
public:
  Standard_EXPORT static void SAdd(const PDF_FieldOfHAttributeArray1&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PDF_FieldOfHAttributeArray1&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PDF_FieldOfHAttributeArray1&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
