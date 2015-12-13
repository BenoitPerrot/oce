// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_PointAspect_HeaderFile
#define _VrmlConverter_PointAspect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_VrmlConverter_PointAspect.hxx>

#include <Handle_Vrml_Material.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class Vrml_Material;


//! qualifies the aspect properties for
//! the VRML conversation of a Point Set.
class VrmlConverter_PointAspect : public MMgt_TShared
{

public:

  
  //! create a default PointAspect.
  //! Default value: HasMaterial  =  False  - a  line  hasn't  own  material (color)
  Standard_EXPORT VrmlConverter_PointAspect();
  
  Standard_EXPORT VrmlConverter_PointAspect(const Handle(Vrml_Material)& aMaterial, const Standard_Boolean OnOff);
  
  Standard_EXPORT   void SetMaterial (const Handle(Vrml_Material)& aMaterial) ;
  
  Standard_EXPORT   Handle(Vrml_Material) Material()  const;
  
  //! defines the necessary of writing  own  Material from Vrml into  output  OStream.
  //! By default False  -  the material is not writing into OStream,
  //! True  -  the material is writing.
  Standard_EXPORT   void SetHasMaterial (const Standard_Boolean OnOff) ;
  
  //! returns True if the  materials is  writing into OStream.
  Standard_EXPORT   Standard_Boolean HasMaterial()  const;




  DEFINE_STANDARD_RTTI(VrmlConverter_PointAspect)

protected:




private: 


  Handle(Vrml_Material) myMaterial;
  Standard_Boolean myHasMaterial;


};







#endif // _VrmlConverter_PointAspect_HeaderFile
