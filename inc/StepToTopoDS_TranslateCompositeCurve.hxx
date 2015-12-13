// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslateCompositeCurve_HeaderFile
#define _StepToTopoDS_TranslateCompositeCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Wire.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <StepToTopoDS_Root.hxx>
#include <Handle_StepGeom_CompositeCurve.hxx>
#include <Handle_Transfer_TransientProcess.hxx>
#include <Handle_StepGeom_Surface.hxx>
#include <Handle_Geom_Surface.hxx>
class StepGeom_CompositeCurve;
class Transfer_TransientProcess;
class StepGeom_Surface;
class Geom_Surface;
class TopoDS_Wire;


//! Translate STEP entity composite_curve to TopoDS_Wire
//! If surface is given, the curve is assumed to lie on that
//! surface and in case if any segment of it is a
//! curve_on_surface, the pcurve for that segment will be taken.
//! Note: a segment of composite_curve may be itself
//! composite_curve. Only one-level protection against
//! cyclic references is implemented.
class StepToTopoDS_TranslateCompositeCurve  : public StepToTopoDS_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepToTopoDS_TranslateCompositeCurve();
  
  //! Translates standalone composite_curve
  Standard_EXPORT StepToTopoDS_TranslateCompositeCurve(const Handle(StepGeom_CompositeCurve)& CC, const Handle(Transfer_TransientProcess)& TP);
  
  //! Translates composite_curve lying on surface
  Standard_EXPORT StepToTopoDS_TranslateCompositeCurve(const Handle(StepGeom_CompositeCurve)& CC, const Handle(Transfer_TransientProcess)& TP, const Handle(StepGeom_Surface)& S, const Handle(Geom_Surface)& Surf);
  
  //! Translates standalone composite_curve
  Standard_EXPORT   Standard_Boolean Init (const Handle(StepGeom_CompositeCurve)& CC, const Handle(Transfer_TransientProcess)& TP) ;
  
  //! Translates composite_curve lying on surface
  Standard_EXPORT   Standard_Boolean Init (const Handle(StepGeom_CompositeCurve)& CC, const Handle(Transfer_TransientProcess)& TP, const Handle(StepGeom_Surface)& S, const Handle(Geom_Surface)& Surf) ;
  
  //! Returns result of last translation or null wire if failed.
  Standard_EXPORT  const  TopoDS_Wire& Value()  const;
  
  //! Returns True if composite_curve contains a segment with infinite parameters.
      Standard_Boolean IsInfiniteSegment()  const;




protected:





private:



  TopoDS_Wire myWire;
  Standard_Boolean myInfiniteSegment;


};


#include <StepToTopoDS_TranslateCompositeCurve.lxx>





#endif // _StepToTopoDS_TranslateCompositeCurve_HeaderFile
