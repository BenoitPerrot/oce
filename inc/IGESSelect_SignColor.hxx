// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SignColor_HeaderFile
#define _IGESSelect_SignColor_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SignColor.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <IFSelect_Signature.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class Standard_Transient;
class Interface_InterfaceModel;


//! Gives Color attached to an entity
//! Several forms are possible, according to <mode>
//! 1 : number : "Dnn" for entity, "Snn" for standard, "(none)" for 0
//! 2 : name : Of standard color, or of the color entity, or "(none)"
//! (if the color entity has no name, its label is taken)
//! 3 : RGB values, form R:nn,G:nn,B:nn
//! 4 : RED value   : an integer
//! 5 : GREEN value : an integer
//! 6 : BLUE value  : an integer
//! Other computable values can be added if needed :
//! CMY values, Percentages for Hue, Lightness, Saturation
class IGESSelect_SignColor : public IFSelect_Signature
{

public:

  
  //! Creates a SignColor
  //! mode : see above for the meaning
  //! modes 4,5,6 give a numeric integer value
  //! Name is initialised according to the mode
  Standard_EXPORT IGESSelect_SignColor(const Standard_Integer mode);
  
  //! Returns the value (see above)
  Standard_EXPORT   Standard_CString Value (const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SignColor)

protected:




private: 


  Standard_Integer themode;


};







#endif // _IGESSelect_SignColor_HeaderFile
