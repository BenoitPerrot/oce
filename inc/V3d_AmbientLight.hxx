// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_AmbientLight_HeaderFile
#define _V3d_AmbientLight_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_V3d_AmbientLight.hxx>

#include <V3d_Light.hxx>
#include <Handle_V3d_Viewer.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
class V3d_Viewer;


//! Creation of an ambient light source in a viewer.
class V3d_AmbientLight : public V3d_Light
{

public:

  
  //! Constructs an ambient light source in the viewer VM.
  //! The default Color of this light source is WHITE.
  Standard_EXPORT V3d_AmbientLight(const Handle(V3d_Viewer)& VM, const Quantity_NameOfColor Color = Quantity_NOC_WHITE);




  DEFINE_STANDARD_RTTI(V3d_AmbientLight)

protected:




private: 




};







#endif // _V3d_AmbientLight_HeaderFile
