// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Conic_HeaderFile
#define _PGeom_Conic_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_Conic.hxx>

#include <gp_Ax2.hxx>
#include <PGeom_Curve.hxx>
class gp_Ax2;


class PGeom_Conic : public PGeom_Curve
{

public:

  
  //! Set the value of the field position with <aPosition>.
  Standard_EXPORT   void Position (const gp_Ax2& aPosition) ;
  
  //! Returns the value of the field <position>.
  Standard_EXPORT   gp_Ax2 Position()  const;

PGeom_Conic(const Storage_stCONSTclCOM& a) : PGeom_Curve(a)
{
  
}
    const gp_Ax2& _CSFDB_GetPGeom_Conicposition() const { return position; }



  DEFINE_STANDARD_RTTI(PGeom_Conic)

protected:

  
  //! Initializes the field(s) with default value(s).
  Standard_EXPORT PGeom_Conic();
  
  //! Initializes the field position with <aPosition>.
  Standard_EXPORT PGeom_Conic(const gp_Ax2& aPosition);

  gp_Ax2 position;


private: 




};







#endif // _PGeom_Conic_HeaderFile
