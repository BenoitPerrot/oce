// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_OffsetSurface_HeaderFile
#define _IGESGeom_OffsetSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_OffsetSurface.hxx>

#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
class IGESData_IGESEntity;
class gp_XYZ;
class gp_Vec;


//! defines IGESOffsetSurface, Type <140> Form <0>
//! in package IGESGeom
//! An offset surface is a surface defined in terms of an
//! already existing surface.If S(u, v) is a parametrised
//! regular surface and N(u, v) is a differential field of
//! unit normal vectors defined on the whole surface, and
//! "d" a fixed non zero real number, then offset surface
//! to S is a parametrised surface S(u, v) given by
//! O(u, v) = S(u, v) + d * N(u, v);
//! u1 <= u <= u2; v1 <= v <= v2;
class IGESGeom_OffsetSurface : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGeom_OffsetSurface();
  
  //! This method is used to set the fields of the class
  //! OffsetSurface
  //! - anIndicator : Offset indicator
  //! - aDistance   : Offset distance
  //! - aSurface    : Surface that is offset
  Standard_EXPORT   void Init (const gp_XYZ& anIndicatoR, const Standard_Real aDistance, const Handle(IGESData_IGESEntity)& aSurface) ;
  
  //! returns the offset indicator
  Standard_EXPORT   gp_Vec OffsetIndicator()  const;
  
  //! returns the offset indicator after applying Transf. Matrix
  Standard_EXPORT   gp_Vec TransformedOffsetIndicator()  const;
  
  //! returns the distance by which surface is offset
  Standard_EXPORT   Standard_Real Distance()  const;
  
  //! returns the surface that has been offset
  Standard_EXPORT   Handle(IGESData_IGESEntity) Surface()  const;




  DEFINE_STANDARD_RTTI(IGESGeom_OffsetSurface)

protected:




private: 


  gp_XYZ theIndicator;
  Standard_Real theDistance;
  Handle(IGESData_IGESEntity) theSurface;


};







#endif // _IGESGeom_OffsetSurface_HeaderFile
