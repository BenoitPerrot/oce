// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SignLevelNumber_HeaderFile
#define _IGESSelect_SignLevelNumber_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SignLevelNumber.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <IFSelect_Signature.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class Standard_Transient;
class Interface_InterfaceModel;


//! Gives D.E. Level Number under two possible forms :
//! * for counter : "LEVEL nnnnnnn", " NO LEVEL", " LEVEL LIST"
//! * for selection : "/nnn/", "/0/", "/1/2/nnn/"
//!
//! For matching, giving /nn/ gets any entity attached to level nn
//! whatever simple or in a level list
class IGESSelect_SignLevelNumber : public IFSelect_Signature
{

public:

  
  //! Creates a SignLevelNumber
  //! <countmode> True : values are naturally displayed
  //! <countmode> False: values are separated by slashes
  //! in order to allow selection by signature by Draw or C++
  Standard_EXPORT IGESSelect_SignLevelNumber(const Standard_Boolean countmode);
  
  //! Returns the value (see above)
  Standard_EXPORT   Standard_CString Value (const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SignLevelNumber)

protected:




private: 


  Standard_Boolean thecountmode;


};







#endif // _IGESSelect_SignLevelNumber_HeaderFile
