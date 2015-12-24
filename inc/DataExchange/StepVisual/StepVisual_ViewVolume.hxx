// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_ViewVolume_HeaderFile
#define _StepVisual_ViewVolume_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_ViewVolume.hxx>

#include <DataExchange/StepVisual/StepVisual_CentralOrParallel.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_CartesianPoint.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_PlanarBox.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepGeom_CartesianPoint;
class StepVisual_PlanarBox;



class StepVisual_ViewVolume : public MMgt_TShared
{

public:

  
  //! Returns a ViewVolume
  Standard_EXPORT StepVisual_ViewVolume();
  
  Standard_EXPORT virtual   void Init (const StepVisual_CentralOrParallel aProjectionType, const Handle(StepGeom_CartesianPoint)& aProjectionPoint, const Standard_Real aViewPlaneDistance, const Standard_Real aFrontPlaneDistance, const Standard_Boolean aFrontPlaneClipping, const Standard_Real aBackPlaneDistance, const Standard_Boolean aBackPlaneClipping, const Standard_Boolean aViewVolumeSidesClipping, const Handle(StepVisual_PlanarBox)& aViewWindow) ;
  
  Standard_EXPORT   void SetProjectionType (const StepVisual_CentralOrParallel aProjectionType) ;
  
  Standard_EXPORT   StepVisual_CentralOrParallel ProjectionType()  const;
  
  Standard_EXPORT   void SetProjectionPoint (const Handle(StepGeom_CartesianPoint)& aProjectionPoint) ;
  
  Standard_EXPORT   Handle(StepGeom_CartesianPoint) ProjectionPoint()  const;
  
  Standard_EXPORT   void SetViewPlaneDistance (const Standard_Real aViewPlaneDistance) ;
  
  Standard_EXPORT   Standard_Real ViewPlaneDistance()  const;
  
  Standard_EXPORT   void SetFrontPlaneDistance (const Standard_Real aFrontPlaneDistance) ;
  
  Standard_EXPORT   Standard_Real FrontPlaneDistance()  const;
  
  Standard_EXPORT   void SetFrontPlaneClipping (const Standard_Boolean aFrontPlaneClipping) ;
  
  Standard_EXPORT   Standard_Boolean FrontPlaneClipping()  const;
  
  Standard_EXPORT   void SetBackPlaneDistance (const Standard_Real aBackPlaneDistance) ;
  
  Standard_EXPORT   Standard_Real BackPlaneDistance()  const;
  
  Standard_EXPORT   void SetBackPlaneClipping (const Standard_Boolean aBackPlaneClipping) ;
  
  Standard_EXPORT   Standard_Boolean BackPlaneClipping()  const;
  
  Standard_EXPORT   void SetViewVolumeSidesClipping (const Standard_Boolean aViewVolumeSidesClipping) ;
  
  Standard_EXPORT   Standard_Boolean ViewVolumeSidesClipping()  const;
  
  Standard_EXPORT   void SetViewWindow (const Handle(StepVisual_PlanarBox)& aViewWindow) ;
  
  Standard_EXPORT   Handle(StepVisual_PlanarBox) ViewWindow()  const;




  DEFINE_STANDARD_RTTI(StepVisual_ViewVolume)

protected:




private: 


  StepVisual_CentralOrParallel projectionType;
  Handle(StepGeom_CartesianPoint) projectionPoint;
  Standard_Real viewPlaneDistance;
  Standard_Real frontPlaneDistance;
  Standard_Boolean frontPlaneClipping;
  Standard_Real backPlaneDistance;
  Standard_Boolean backPlaneClipping;
  Standard_Boolean viewVolumeSidesClipping;
  Handle(StepVisual_PlanarBox) viewWindow;


};







#endif // _StepVisual_ViewVolume_HeaderFile
