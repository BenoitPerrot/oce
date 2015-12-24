// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PXCAFDoc_Location_HeaderFile
#define _PXCAFDoc_Location_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <DataExchange/PXCAFDoc/Handle_PXCAFDoc_Location.hxx>

#include <OCAF/PTopLoc/PTopLoc_Location.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class PTopLoc_Location;


class PXCAFDoc_Location : public PDF_Attribute
{

public:

  
  Standard_EXPORT PXCAFDoc_Location();
  
  Standard_EXPORT PXCAFDoc_Location(const PTopLoc_Location& Loc);
  
  Standard_EXPORT   void Set (const PTopLoc_Location& Loc) ;
  
  Standard_EXPORT   PTopLoc_Location Get()  const;

PXCAFDoc_Location(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    const PTopLoc_Location& _CSFDB_GetPXCAFDoc_LocationmyPLocation() const { return myPLocation; }



  DEFINE_STANDARD_RTTI(PXCAFDoc_Location)

protected:




private: 


  PTopLoc_Location myPLocation;


};







#endif // _PXCAFDoc_Location_HeaderFile
