// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_BSplineSurfaceWithKnots_HeaderFile
#define _StepGeom_BSplineSurfaceWithKnots_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_BSplineSurfaceWithKnots.hxx>

#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <StepGeom_KnotType.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_StepGeom_HArray2OfCartesianPoint.hxx>
#include <StepGeom_BSplineSurfaceForm.hxx>
#include <DataExchange/StepData/StepData_Logical.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;
class StepGeom_HArray2OfCartesianPoint;



class StepGeom_BSplineSurfaceWithKnots : public StepGeom_BSplineSurface
{

public:

  
  //! Returns a BSplineSurfaceWithKnots
  Standard_EXPORT StepGeom_BSplineSurfaceWithKnots();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aUDegree, const Standard_Integer aVDegree, const Handle(StepGeom_HArray2OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineSurfaceForm aSurfaceForm, const StepData_Logical aUClosed, const StepData_Logical aVClosed, const StepData_Logical aSelfIntersect) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aUDegree, const Standard_Integer aVDegree, const Handle(StepGeom_HArray2OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineSurfaceForm aSurfaceForm, const StepData_Logical aUClosed, const StepData_Logical aVClosed, const StepData_Logical aSelfIntersect, const Handle(TColStd_HArray1OfInteger)& aUMultiplicities, const Handle(TColStd_HArray1OfInteger)& aVMultiplicities, const Handle(TColStd_HArray1OfReal)& aUKnots, const Handle(TColStd_HArray1OfReal)& aVKnots, const StepGeom_KnotType aKnotSpec) ;
  
  Standard_EXPORT   void SetUMultiplicities (const Handle(TColStd_HArray1OfInteger)& aUMultiplicities) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) UMultiplicities()  const;
  
  Standard_EXPORT   Standard_Integer UMultiplicitiesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbUMultiplicities()  const;
  
  Standard_EXPORT   void SetVMultiplicities (const Handle(TColStd_HArray1OfInteger)& aVMultiplicities) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) VMultiplicities()  const;
  
  Standard_EXPORT   Standard_Integer VMultiplicitiesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbVMultiplicities()  const;
  
  Standard_EXPORT   void SetUKnots (const Handle(TColStd_HArray1OfReal)& aUKnots) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) UKnots()  const;
  
  Standard_EXPORT   Standard_Real UKnotsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbUKnots()  const;
  
  Standard_EXPORT   void SetVKnots (const Handle(TColStd_HArray1OfReal)& aVKnots) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) VKnots()  const;
  
  Standard_EXPORT   Standard_Real VKnotsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbVKnots()  const;
  
  Standard_EXPORT   void SetKnotSpec (const StepGeom_KnotType aKnotSpec) ;
  
  Standard_EXPORT   StepGeom_KnotType KnotSpec()  const;




  DEFINE_STANDARD_RTTI(StepGeom_BSplineSurfaceWithKnots)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) uMultiplicities;
  Handle(TColStd_HArray1OfInteger) vMultiplicities;
  Handle(TColStd_HArray1OfReal) uKnots;
  Handle(TColStd_HArray1OfReal) vKnots;
  StepGeom_KnotType knotSpec;


};







#endif // _StepGeom_BSplineSurfaceWithKnots_HeaderFile
