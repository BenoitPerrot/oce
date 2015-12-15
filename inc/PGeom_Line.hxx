// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Line_HeaderFile
#define _PGeom_Line_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_Line.hxx>

#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <PGeom_Curve.hxx>
class gp_Ax1;


class PGeom_Line : public PGeom_Curve
{

public:

  
  //! Creates a line with default values.
  Standard_EXPORT PGeom_Line();
  
  //! Creates   a  line  located    in  3D space   with
  //! <aPosition>.  The Location   of <aPosition> is  the
  //! origin of the line.
  Standard_EXPORT PGeom_Line(const gp_Ax1& aPosition);
  
  //! Set the value of the field position with <aPosition>.
  Standard_EXPORT   void Position (const gp_Ax1& aPosition) ;
  
  //! Returns the value of the field position.
  Standard_EXPORT   gp_Ax1 Position()  const;

PGeom_Line(const Storage_stCONSTclCOM& a) : PGeom_Curve(a)
{
  
}
    const gp_Ax1& _CSFDB_GetPGeom_Lineposition() const { return position; }



  DEFINE_STANDARD_RTTI(PGeom_Line)

protected:




private: 


  gp_Ax1 position;


};







#endif // _PGeom_Line_HeaderFile
