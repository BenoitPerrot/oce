// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataXtd_HeaderFile
#define _MDataXtd_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_MDF_ASDriverHSequence.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_MDF_ARDriverHSequence.hxx>
#include <Handle_PGeom_Geometry.hxx>
#include <Handle_Geom_Geometry.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TDataXtd_ConstraintEnum.hxx>
#include <TDataXtd_GeometryEnum.hxx>
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class PGeom_Geometry;
class Geom_Geometry;
class MDataXtd_ShapeStorageDriver;
class MDataXtd_PointStorageDriver;
class MDataXtd_AxisStorageDriver;
class MDataXtd_PlaneStorageDriver;
class MDataXtd_GeometryStorageDriver;
class MDataXtd_ConstraintStorageDriver;
class MDataXtd_PlacementStorageDriver;
class MDataXtd_PatternStdStorageDriver;
class MDataXtd_ShapeRetrievalDriver;
class MDataXtd_PointRetrievalDriver;
class MDataXtd_AxisRetrievalDriver;
class MDataXtd_PlaneRetrievalDriver;
class MDataXtd_GeometryRetrievalDriver;
class MDataXtd_ConstraintRetrievalDriver;
class MDataXtd_PlacementRetrievalDriver;
class MDataXtd_PatternStdRetrievalDriver;


//! Storage    and  Retrieval  drivers   for modelling
//! attributes.   Transient  attributes are defined in
//! package TDataStd and persistent one are defined in
//! package PDataStd
class MDataXtd 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adds the attribute storage drivers to <aDriverSeq>.
  Standard_EXPORT static   void AddStorageDrivers (const Handle(MDF_ASDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMessageDriver) ;
  
  //! Adds the attribute retrieval drivers to <aDriverSeq>.
  Standard_EXPORT static   void AddRetrievalDrivers (const Handle(MDF_ARDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMessageDriver) ;
  
  //! Method to launch in MgtGeom
  //! Delete MDataStd_1.cxx
  //! Modify MDataStd_GeometryStorageDriver::Paste
  Standard_EXPORT static   Handle(PGeom_Geometry) Translate (const Handle(Geom_Geometry)& Geometry) ;
  
  //! Method to lasunch in MgtGeom
  //! Delete MDataStd_1.cxx
  //! Modify MDataStd_GeometryRetrievalDriver::Paste
  //! Translation of TDataXtd enumerations to integer
  //! ===============================================
  Standard_EXPORT static   Handle(Geom_Geometry) Translate (const Handle(PGeom_Geometry)& Geometry) ;
  
  Standard_EXPORT static   Standard_Integer ConstraintTypeToInteger (const TDataXtd_ConstraintEnum e) ;
  
  Standard_EXPORT static   TDataXtd_ConstraintEnum IntegerToConstraintType (const Standard_Integer i) ;
  
  Standard_EXPORT static   Standard_Integer GeometryTypeToInteger (const TDataXtd_GeometryEnum e) ;
  
  Standard_EXPORT static   TDataXtd_GeometryEnum IntegerToGeometryType (const Standard_Integer i) ;




protected:





private:




friend class MDataXtd_ShapeStorageDriver;
friend class MDataXtd_PointStorageDriver;
friend class MDataXtd_AxisStorageDriver;
friend class MDataXtd_PlaneStorageDriver;
friend class MDataXtd_GeometryStorageDriver;
friend class MDataXtd_ConstraintStorageDriver;
friend class MDataXtd_PlacementStorageDriver;
friend class MDataXtd_PatternStdStorageDriver;
friend class MDataXtd_ShapeRetrievalDriver;
friend class MDataXtd_PointRetrievalDriver;
friend class MDataXtd_AxisRetrievalDriver;
friend class MDataXtd_PlaneRetrievalDriver;
friend class MDataXtd_GeometryRetrievalDriver;
friend class MDataXtd_ConstraintRetrievalDriver;
friend class MDataXtd_PlacementRetrievalDriver;
friend class MDataXtd_PatternStdRetrievalDriver;

};







#endif // _MDataXtd_HeaderFile
