// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_SurfacePatch_HeaderFile
#define _StepGeom_SurfacePatch_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_SurfacePatch.hxx>

#include <Handle_StepGeom_BoundedSurface.hxx>
#include <StepGeom_TransitionCode.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepGeom_BoundedSurface;



class StepGeom_SurfacePatch : public MMgt_TShared
{

public:

  
  //! Returns a SurfacePatch
  Standard_EXPORT StepGeom_SurfacePatch();
  
  Standard_EXPORT virtual   void Init (const Handle(StepGeom_BoundedSurface)& aParentSurface, const StepGeom_TransitionCode aUTransition, const StepGeom_TransitionCode aVTransition, const Standard_Boolean aUSense, const Standard_Boolean aVSense) ;
  
  Standard_EXPORT   void SetParentSurface (const Handle(StepGeom_BoundedSurface)& aParentSurface) ;
  
  Standard_EXPORT   Handle(StepGeom_BoundedSurface) ParentSurface()  const;
  
  Standard_EXPORT   void SetUTransition (const StepGeom_TransitionCode aUTransition) ;
  
  Standard_EXPORT   StepGeom_TransitionCode UTransition()  const;
  
  Standard_EXPORT   void SetVTransition (const StepGeom_TransitionCode aVTransition) ;
  
  Standard_EXPORT   StepGeom_TransitionCode VTransition()  const;
  
  Standard_EXPORT   void SetUSense (const Standard_Boolean aUSense) ;
  
  Standard_EXPORT   Standard_Boolean USense()  const;
  
  Standard_EXPORT   void SetVSense (const Standard_Boolean aVSense) ;
  
  Standard_EXPORT   Standard_Boolean VSense()  const;




  DEFINE_STANDARD_RTTI(StepGeom_SurfacePatch)

protected:




private: 


  Handle(StepGeom_BoundedSurface) parentSurface;
  StepGeom_TransitionCode uTransition;
  StepGeom_TransitionCode vTransition;
  Standard_Boolean uSense;
  Standard_Boolean vSense;


};







#endif // _StepGeom_SurfacePatch_HeaderFile
