#ifndef _XCAFSchema_Quantity_Color_HeaderFile
#include <DataExchange/XCAFSchema/XCAFSchema_Quantity_Color.hxx>
#endif
#ifndef _Quantity_Color_HeaderFile
#include <Foundation/Quantity/Quantity_Color.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Foundation/Storage/Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Foundation/Storage/Storage_stCONSTclCOM.hxx>
#endif

void XCAFSchema_Quantity_Color::SWrite(const Quantity_Color& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginWriteObjectData();
  f.PutShortReal(pp._CSFDB_GetQuantity_ColorMyRed());
  f.PutShortReal(pp._CSFDB_GetQuantity_ColorMyGreen());
  f.PutShortReal(pp._CSFDB_GetQuantity_ColorMyBlue());

  f.EndWriteObjectData();
}

void XCAFSchema_Quantity_Color::SRead(Quantity_Color& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  (void)pp; (void)theSchema; // dummy to avoid compiler warning on unused arg
  f.BeginReadObjectData();

    Standard_ShortReal Quantity_ColorMyRed;
    f.GetShortReal(Quantity_ColorMyRed);
    pp._CSFDB_SetQuantity_ColorMyRed(Quantity_ColorMyRed);

    Standard_ShortReal Quantity_ColorMyGreen;
    f.GetShortReal(Quantity_ColorMyGreen);
    pp._CSFDB_SetQuantity_ColorMyGreen(Quantity_ColorMyGreen);

    Standard_ShortReal Quantity_ColorMyBlue;
    f.GetShortReal(Quantity_ColorMyBlue);
    pp._CSFDB_SetQuantity_ColorMyBlue(Quantity_ColorMyBlue);

  f.EndReadObjectData();
}
