// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDataXtd_HeaderFile
#define _BinMDataXtd_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/BinMDF/Handle_BinMDF_ADriverTable.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinMDataXtd_PointDriver;
class BinMDataXtd_AxisDriver;
class BinMDataXtd_PlaneDriver;
class BinMDataXtd_GeometryDriver;
class BinMDataXtd_ConstraintDriver;
class BinMDataXtd_PlacementDriver;
class BinMDataXtd_PatternStdDriver;
class BinMDataXtd_ShapeDriver;


//! Storage and Retrieval drivers for modelling attributes.
class BinMDataXtd 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adds the attribute drivers to <theDriverTable>.
  Standard_EXPORT static   void AddDrivers (const Handle(BinMDF_ADriverTable)& theDriverTable, const Handle(CDM_MessageDriver)& aMsgDrv) ;
  
  Standard_EXPORT static   void SetDocumentVersion (const Standard_Integer DocVersion) ;
  
  Standard_EXPORT static   Standard_Integer DocumentVersion() ;




protected:





private:




friend class BinMDataXtd_PointDriver;
friend class BinMDataXtd_AxisDriver;
friend class BinMDataXtd_PlaneDriver;
friend class BinMDataXtd_GeometryDriver;
friend class BinMDataXtd_ConstraintDriver;
friend class BinMDataXtd_PlacementDriver;
friend class BinMDataXtd_PatternStdDriver;
friend class BinMDataXtd_ShapeDriver;

};







#endif // _BinMDataXtd_HeaderFile
