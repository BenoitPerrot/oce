// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_SurfaceSideStyle_HeaderFile
#define _StepVisual_SurfaceSideStyle_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepVisual_SurfaceSideStyle.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepVisual_HArray1OfSurfaceStyleElementSelect.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TCollection_HAsciiString;
class StepVisual_HArray1OfSurfaceStyleElementSelect;
class StepVisual_SurfaceStyleElementSelect;



class StepVisual_SurfaceSideStyle : public MMgt_TShared
{

public:

  
  //! Returns a SurfaceSideStyle
  Standard_EXPORT StepVisual_SurfaceSideStyle();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfSurfaceStyleElementSelect)& aStyles) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetStyles (const Handle(StepVisual_HArray1OfSurfaceStyleElementSelect)& aStyles) ;
  
  Standard_EXPORT   Handle(StepVisual_HArray1OfSurfaceStyleElementSelect) Styles()  const;
  
  Standard_EXPORT   StepVisual_SurfaceStyleElementSelect StylesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbStyles()  const;




  DEFINE_STANDARD_RTTI(StepVisual_SurfaceSideStyle)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(StepVisual_HArray1OfSurfaceStyleElementSelect) styles;


};







#endif // _StepVisual_SurfaceSideStyle_HeaderFile
