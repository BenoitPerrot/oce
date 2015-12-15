// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_SolidOfLinearExtrusion_HeaderFile
#define _IGESSolid_SolidOfLinearExtrusion_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_SolidOfLinearExtrusion.hxx>

#include <Handle_IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <IGESData_IGESEntity.hxx>
class IGESData_IGESEntity;
class gp_XYZ;
class gp_Dir;


//! defines SolidOfLinearExtrusion, Type <164> Form Number <0>
//! in package IGESSolid
//! Solid of linear extrusion is defined by translatin an
//! area determined by a planar curve
class IGESSolid_SolidOfLinearExtrusion : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_SolidOfLinearExtrusion();
  
  //! This method is used to set the fields of the class
  //! SolidOfLinearExtrusion
  //! - aCurve     : the planar curve that is to be translated
  //! - aLength    : the length of extrusion
  //! - aDirection : the vector specifying the direction of extrusion
  //! default (0,0,1)
  Standard_EXPORT   void Init (const Handle(IGESData_IGESEntity)& aCurve, const Standard_Real aLength, const gp_XYZ& aDirection) ;
  
  //! returns the planar curve that is to be translated
  Standard_EXPORT   Handle(IGESData_IGESEntity) Curve()  const;
  
  //! returns the Extrusion Length
  Standard_EXPORT   Standard_Real ExtrusionLength()  const;
  
  //! returns the Extrusion direction
  Standard_EXPORT   gp_Dir ExtrusionDirection()  const;
  
  //! returns ExtrusionDirection after applying TransformationMatrix
  Standard_EXPORT   gp_Dir TransformedExtrusionDirection()  const;




  DEFINE_STANDARD_RTTI(IGESSolid_SolidOfLinearExtrusion)

protected:




private: 


  Handle(IGESData_IGESEntity) theCurve;
  Standard_Real theLength;
  gp_XYZ theDirection;


};







#endif // _IGESSolid_SolidOfLinearExtrusion_HeaderFile
