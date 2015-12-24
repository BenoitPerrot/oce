// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PTopoDS_Wire_HeaderFile
#define _ShapeSchema_PTopoDS_Wire_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Foundation/Storage/Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PTopoDS_Wire_HeaderFile
#include <OCAF/PTopoDS/Handle_PTopoDS_Wire.hxx>
#endif

#ifndef _ShapeSchema_PTopoDS_HShape_HeaderFile
#include <OCAF/ShapeSchema/ShapeSchema_PTopoDS_HShape.hxx>
#endif


DEFINE_STANDARD_HANDLE(ShapeSchema_PTopoDS_Wire,Storage_CallBack)

class ShapeSchema_PTopoDS_Wire : public Storage_CallBack {
public:
  ShapeSchema_PTopoDS_Wire() {}
  Standard_EXPORT static void SAdd(const Handle(PTopoDS_Wire)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(ShapeSchema_PTopoDS_Wire)
};
#endif
