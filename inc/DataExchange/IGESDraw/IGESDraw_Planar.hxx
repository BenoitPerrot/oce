// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_Planar_HeaderFile
#define _IGESDraw_Planar_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESDraw/Handle_IGESDraw_Planar.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/IGESGeom/Handle_IGESGeom_TransformationMatrix.hxx>
#include <DataExchange/IGESData/Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
class IGESGeom_TransformationMatrix;
class IGESData_HArray1OfIGESEntity;
class Standard_OutOfRange;
class IGESData_IGESEntity;


//! defines IGESPlanar, Type <402> Form <16>
//! in package IGESDraw
//!
//! Indicates that a collection of entities is coplanar.The
//! entities may be geometric, annotative, and/or structural.
class IGESDraw_Planar : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDraw_Planar();
  
  //! This method is used to set the fields of the class Planar
  //! - nbMats                : Number of Transformation matrices
  //! - aTransformationMatrix : Pointer to the Transformation matrix
  //! - allEntities           : Pointers to the entities specified
  Standard_EXPORT   void Init (const Standard_Integer nbMats, const Handle(IGESGeom_TransformationMatrix)& aTransformationMatrix, const Handle(IGESData_HArray1OfIGESEntity)& allEntities) ;
  
  //! returns the number of Transformation matrices in <me>
  Standard_EXPORT   Standard_Integer NbMatrices()  const;
  
  //! returns the number of Entities in the plane pointed to by this
  //! associativity
  Standard_EXPORT   Standard_Integer NbEntities()  const;
  
  //! returns True if TransformationMatrix is Identity Matrix,
  //! i.e:- No Matrix defined.
  Standard_EXPORT   Standard_Boolean IsIdentityMatrix()  const;
  
  //! returns the Transformation matrix moving data from the XY plane
  //! into space or zero
  Standard_EXPORT   Handle(IGESGeom_TransformationMatrix) TransformMatrix()  const;
  
  //! returns the Entity on the specified plane, indicated by EntityIndex
  //! raises an exception if EntityIndex <= 0 or
  //! EntityIndex > NbEntities()
  Standard_EXPORT   Handle(IGESData_IGESEntity) Entity (const Standard_Integer EntityIndex)  const;




  DEFINE_STANDARD_RTTI(IGESDraw_Planar)

protected:




private: 


  Standard_Integer theNbMatrices;
  Handle(IGESGeom_TransformationMatrix) theTransformationMatrix;
  Handle(IGESData_HArray1OfIGESEntity) theEntities;


};







#endif // _IGESDraw_Planar_HeaderFile
