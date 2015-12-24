// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeDelta_HeaderFile
#define _TDF_AttributeDelta_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDF/Handle_TDF_AttributeDelta.hxx>

#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TDF_Attribute;
class TDF_Label;
class Standard_GUID;


//! This class discribes the services we need to
//! implement Delta and Undo/Redo services.
//!
//! AttributeDeltas are applied in an unpredictable
//! order. But by the redefinition of the method
//! IsNowApplicable, a condition can be verified
//! before application. If the AttributeDelta is not
//! yet applicable, it is put at the end of the
//! AttributeDelta list, to be treated later. If a
//! dead lock if found on the list, the
//! AttributeDeltas are forced to be applied in an
//! unpredictable order.
class TDF_AttributeDelta : public MMgt_TShared
{

public:

  
  //! Applies the delta to the attribute.
  Standard_EXPORT virtual   void Apply()  = 0;
  
  //! Returns the label concerned by <me>.
  Standard_EXPORT   TDF_Label Label()  const;
  
  //! Returns the reference attribute.
  Standard_EXPORT   Handle(TDF_Attribute) Attribute()  const;
  
  //! Returns the ID of the attribute concerned by <me>.
  Standard_EXPORT   Standard_GUID ID()  const;
  
  //! Dumps the contents.
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& OS)  const;
  Standard_OStream& operator<< (Standard_OStream& OS)  const
{
  return Dump(OS);
}




  DEFINE_STANDARD_RTTI(TDF_AttributeDelta)

protected:

  
  Standard_EXPORT TDF_AttributeDelta(const Handle(TDF_Attribute)& anAttribute);



private: 


  Handle(TDF_Attribute) myAttribute;
  TDF_Label myLabel;


};







#endif // _TDF_AttributeDelta_HeaderFile
