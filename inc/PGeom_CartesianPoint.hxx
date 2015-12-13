// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_CartesianPoint_HeaderFile
#define _PGeom_CartesianPoint_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_CartesianPoint.hxx>

#include <gp_Pnt.hxx>
#include <PGeom_Point.hxx>
class gp_Pnt;


class PGeom_CartesianPoint : public PGeom_Point
{

public:

  
  //! Returns a CartesianPoint with default values..
  Standard_EXPORT PGeom_CartesianPoint();
  
  //! Returns a CartesianPoint built with <aPnt>.
  Standard_EXPORT PGeom_CartesianPoint(const gp_Pnt& aPnt);
  
  //! Set the field pnt.
  Standard_EXPORT   void Pnt (const gp_Pnt& aPnt) ;
  
  //! Returns the value of the field pnt.
  Standard_EXPORT   gp_Pnt Pnt()  const;

PGeom_CartesianPoint(const Storage_stCONSTclCOM& a) : PGeom_Point(a)
{
  
}
    const gp_Pnt& _CSFDB_GetPGeom_CartesianPointpnt() const { return pnt; }



  DEFINE_STANDARD_RTTI(PGeom_CartesianPoint)

protected:




private: 


  gp_Pnt pnt;


};







#endif // _PGeom_CartesianPoint_HeaderFile
