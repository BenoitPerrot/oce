// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_BoundedSurface_HeaderFile
#define _IGESGeom_BoundedSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_BoundedSurface.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_IGESGeom_HArray1OfBoundary.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Handle_IGESGeom_Boundary.hxx>
class IGESData_IGESEntity;
class IGESGeom_HArray1OfBoundary;
class Standard_OutOfRange;
class IGESGeom_Boundary;


//! defines BoundedSurface, Type <143> Form <0>
//! in package IGESGeom
//! A bounded surface is used to communicate trimmed
//! surfaces. The surface and trimming curves are assumed
//! to be represented parametrically.
class IGESGeom_BoundedSurface : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGeom_BoundedSurface();
  
  //! This method is used to set the fields of the class
  //! BoundedSurface
  //! - aType     : Type of bounded surface representation
  //! - aSurface  : Surface entity to be bounded
  //! - allBounds : Array of boundary entities
  Standard_EXPORT   void Init (const Standard_Integer aType, const Handle(IGESData_IGESEntity)& aSurface, const Handle(IGESGeom_HArray1OfBoundary)& allBounds) ;
  
  //! returns the type of Bounded surface representation
  //! 0 = The boundary entities may only reference model space curves
  //! 1 = The boundary entities may reference both model space curves
  //! and associated parameter space curve representations
  Standard_EXPORT   Standard_Integer RepresentationType()  const;
  
  //! returns the bounded surface
  Standard_EXPORT   Handle(IGESData_IGESEntity) Surface()  const;
  
  //! returns the number of boundaries
  Standard_EXPORT   Standard_Integer NbBoundaries()  const;
  
  //! returns boundary entity
  //! raises exception if Index <= 0 or Index > NbBoundaries()
  Standard_EXPORT   Handle(IGESGeom_Boundary) Boundary (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESGeom_BoundedSurface)

protected:




private: 


  Standard_Integer theType;
  Handle(IGESData_IGESEntity) theSurface;
  Handle(IGESGeom_HArray1OfBoundary) theBoundaries;


};







#endif // _IGESGeom_BoundedSurface_HeaderFile
