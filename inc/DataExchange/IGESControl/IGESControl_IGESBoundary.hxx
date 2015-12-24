// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESControl_IGESBoundary_HeaderFile
#define _IGESControl_IGESBoundary_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESControl/Handle_IGESControl_IGESBoundary.hxx>

#include <DataExchange/IGESToBRep/IGESToBRep_IGESBoundary.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <ModelingAlgorithms/ShapeExtend/Handle_ShapeExtend_WireData.hxx>
#include <DataExchange/IGESData/Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class IGESToBRep_CurveAndSurface;
class IGESData_IGESEntity;
class ShapeExtend_WireData;
class IGESData_HArray1OfIGESEntity;


//! Translates IGES boundary entity (types 141, 142 and 508)
//! in Advanced Data Exchange.
//! Redefines translation and treatment methods from inherited
//! open class IGESToBRep_IGESBoundary.
class IGESControl_IGESBoundary : public IGESToBRep_IGESBoundary
{

public:

  
  //! Creates an object and calls inherited constuctor.
  Standard_EXPORT IGESControl_IGESBoundary();
  
  //! Creates an object and calls inherited constuctor.
  Standard_EXPORT IGESControl_IGESBoundary(const IGESToBRep_CurveAndSurface& CS);
  
  //! Checks result of translation of IGES boundary entities
  //! (types 141, 142 or 508).
  //! Checks consistency of 2D and 3D representations and keeps
  //! only one if they are inconsistent.
  //! Checks the closure of resulting wire and if it is not closed,
  //! checks 2D and 3D representation and updates the resulting
  //! wire to contain only closed representation.
  Standard_EXPORT virtual   void Check (const Standard_Boolean result, const Standard_Boolean checkclosure, const Standard_Boolean okCurve3d, const Standard_Boolean okCurve2d) ;




  DEFINE_STANDARD_RTTI(IGESControl_IGESBoundary)

protected:

  
  Standard_EXPORT virtual   Standard_Boolean Transfer (Standard_Boolean& okCurve, Standard_Boolean& okCurve3d, Standard_Boolean& okCurve2d, const Handle(IGESData_IGESEntity)& icurve3d, const Handle(ShapeExtend_WireData)& scurve3d, const Standard_Boolean usescurve, const Standard_Boolean toreverse3d, const Handle(IGESData_HArray1OfIGESEntity)& curves2d, const Standard_Boolean toreverse2d, const Standard_Integer number, Handle(ShapeExtend_WireData)& lsewd) ;



private: 




};







#endif // _IGESControl_IGESBoundary_HeaderFile
