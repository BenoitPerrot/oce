// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSchema_PDataStd_Real_HeaderFile
#define _StdSchema_PDataStd_Real_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Foundation/Storage/Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PDataStd_Real_HeaderFile
#include <OCAF/PDataStd/Handle_PDataStd_Real.hxx>
#endif

#ifndef _StdSchema_PDF_Attribute_HeaderFile
#include <OCAF/StdSchema/StdSchema_PDF_Attribute.hxx>
#endif


DEFINE_STANDARD_HANDLE(StdSchema_PDataStd_Real,Storage_CallBack)

class StdSchema_PDataStd_Real : public Storage_CallBack {
public:
  StdSchema_PDataStd_Real() {}
  Standard_EXPORT static void SAdd(const Handle(PDataStd_Real)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(StdSchema_PDataStd_Real)
};
#endif
