#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_Macros_HeaderFile
#include <Storage_Macros.hxx>
#endif
class Handle(PDataXtd_Position);
class Handle(PDataXtd_Point);
class Handle(PDataXtd_Axis);
class Handle(PDataXtd_Plane);
class Handle(PDataXtd_Geometry);
class Handle(PDataXtd_Constraint);
class Handle(PDataXtd_Placement);
class Handle(PDataXtd_PatternStd);
class Handle(PDataXtd_Shape);
class Handle(PNaming_Name);
class Handle(PNaming_Name_1);
class Handle(PNaming_Name_2);
class Handle(PNaming_NamedShape);
class Handle(PNaming_Naming);
class Handle(PNaming_Naming_1);
class Handle(PNaming_Naming_2);
class Handle(PNaming_HArray1OfNamedShape);
class PNaming_FieldOfHArray1OfNamedShape;
class Handle(PPrsStd_AISPresentation);
class Handle(PPrsStd_AISPresentation_1);
class Handle(PDF_Attribute);
class Handle(Standard_Persistent);
class Standard_Storable;
class gp_Pnt;
class Handle(PDataStd_Real);
class Handle(PDF_HAttributeArray1);
class Handle(PDataStd_Integer);
class Handle(PCollection_HAsciiString);
class Handle(PTopoDS_HArray1OfShape1);
class Handle(PColStd_HArray1OfInteger);
class Handle(PCollection_HExtendedString);
class gp_Ax1;
class gp_Ax2;
class gp_Trsf;
class gp_Vec;
class gp_XYZ;
class PDF_FieldOfHAttributeArray1;
class DBC_VArrayOfCharacter;
class PTopoDS_Shape1;
class PTopoDS_FieldOfHArray1OfShape1;
class PColStd_FieldOfHArray1OfInteger;
class DBC_VArrayOfExtCharacter;
class gp_Dir;
class gp_Ax3;
class gp_Mat;
class gp_Trsf2d;
class Handle(PTopoDS_TShape1);
class PTopLoc_Location;
class gp_Ax2d;
class gp_Mat2d;
class gp_Pnt2d;
class gp_Vec2d;
class gp_XY;
class Handle(PTopLoc_Datum3D);
class Handle(PTopLoc_ItemLocation);
class gp_Dir2d;
// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSchema_HeaderFile
#define _StdSchema_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Foundation/Standard/Standard_Macro.hxx>
#endif
#ifndef _Storage_Macros_HeaderFile
#include <Storage_Macros.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

DEFINE_STANDARD_HANDLE(StdSchema,Storage_Schema)


class StdSchema : public Storage_Schema {
public:

  Storage_DECLARE_SCHEMA_METHODS(StdSchema)

  DEFINE_STANDARD_RTTI(StdSchema)
};

#endif
