// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopLoc_Datum3D_HeaderFile
#define _PTopLoc_Datum3D_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PTopLoc/Handle_PTopLoc_Datum3D.hxx>

#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
class Standard_ConstructionError;
class gp_Trsf;


class PTopLoc_Datum3D : public Standard_Persistent
{

public:

  
  //! Creates a   local coordinate  system    with   the
  //! transformation.  An   error   is raised  if    the
  //! transformation is not rigid.
  Standard_EXPORT PTopLoc_Datum3D(const gp_Trsf& T);
  
  //! Returns the transformation defining the coordinate
  //! system.
  Standard_EXPORT   gp_Trsf Transformation()  const;

PTopLoc_Datum3D( )
{
  
}
PTopLoc_Datum3D(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    const gp_Trsf& _CSFDB_GetPTopLoc_Datum3DmyTrsf() const { return myTrsf; }



  DEFINE_STANDARD_RTTI(PTopLoc_Datum3D)

protected:




private: 


  gp_Trsf myTrsf;


};







#endif // _PTopLoc_Datum3D_HeaderFile
