// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Transformation_HeaderFile
#define _PGeom_Transformation_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_Transformation.hxx>

#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
class gp_Trsf;


class PGeom_Transformation : public Standard_Persistent
{

public:

  
  //! Creates a transformation with default values.
  Standard_EXPORT PGeom_Transformation();
  
  //! Creates a transformation with <aTrsf>.
  Standard_EXPORT PGeom_Transformation(const gp_Trsf& aTrsf);
  
  //! Set the field trsf with <aTrsf>.
  Standard_EXPORT   void Trsf (const gp_Trsf& aTrsf) ;
  
  //! Returns the value of the field trsf.
  Standard_EXPORT   gp_Trsf Trsf()  const;

PGeom_Transformation(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    const gp_Trsf& _CSFDB_GetPGeom_Transformationtrsf() const { return trsf; }



  DEFINE_STANDARD_RTTI(PGeom_Transformation)

protected:




private: 


  gp_Trsf trsf;


};







#endif // _PGeom_Transformation_HeaderFile
