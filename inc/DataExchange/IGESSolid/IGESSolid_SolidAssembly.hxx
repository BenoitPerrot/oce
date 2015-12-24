// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_SolidAssembly_HeaderFile
#define _IGESSolid_SolidAssembly_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESSolid/Handle_IGESSolid_SolidAssembly.hxx>

#include <DataExchange/IGESData/Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <DataExchange/IGESGeom/Handle_IGESGeom_HArray1OfTransformationMatrix.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <DataExchange/IGESGeom/Handle_IGESGeom_TransformationMatrix.hxx>
class IGESData_HArray1OfIGESEntity;
class IGESGeom_HArray1OfTransformationMatrix;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class IGESGeom_TransformationMatrix;


//! defines SolidAssembly, Type <184> Form <0>
//! in package IGESSolid
//! Solid assembly is a collection of items which possess a
//! shared fixed geometric relationship.
//!
//! From IGES-5.3, From 1 says that at least one item is a Brep
//! else all are Primitives, Boolean Trees, Solid Instances or
//! other Assemblies
class IGESSolid_SolidAssembly : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_SolidAssembly();
  
  //! This method is used to set the fields of the class
  //! SolidAssembly
  //! - allItems    : the collection of items
  //! - allMatrices : transformation matrices corresponding to each
  //! item
  //! raises exception if the length of allItems & allMatrices
  //! do not match
  Standard_EXPORT   void Init (const Handle(IGESData_HArray1OfIGESEntity)& allItems, const Handle(IGESGeom_HArray1OfTransformationMatrix)& allMatrices) ;
  
  //! Tells if at least one item is a Brep, from FormNumber
  Standard_EXPORT   Standard_Boolean HasBrep()  const;
  
  //! Sets or Unsets the status "HasBrep" from FormNumber
  //! Default is False
  Standard_EXPORT   void SetBrep (const Standard_Boolean hasbrep) ;
  
  //! returns the number of items in the collection
  Standard_EXPORT   Standard_Integer NbItems()  const;
  
  //! returns the Index'th item
  //! raises exception if Index <= 0 or Index > NbItems()
  Standard_EXPORT   Handle(IGESData_IGESEntity) Item (const Standard_Integer Index)  const;
  
  //! returns the transformation matrix of the Index'th item
  //! raises exception if Index <= 0 or Index > NbItems()
  Standard_EXPORT   Handle(IGESGeom_TransformationMatrix) TransfMatrix (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESSolid_SolidAssembly)

protected:




private: 


  Handle(IGESData_HArray1OfIGESEntity) theItems;
  Handle(IGESGeom_HArray1OfTransformationMatrix) theMatrices;


};







#endif // _IGESSolid_SolidAssembly_HeaderFile
