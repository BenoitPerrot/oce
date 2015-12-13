// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignMultiple_HeaderFile
#define _IFSelect_SignMultiple_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SignMultiple.hxx>

#include <Foundation/TColStd/TColStd_SequenceOfTransient.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <IFSelect_Signature.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_IFSelect_Signature.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class IFSelect_Signature;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! Multiple Signature : ordered list of other Signatures
//! It concatenates on a same line the result of its sub-items
//! separated by sets of 3 blanks
//! It is possible to define tabulations between sub-items
//! Moreover, match rules are specific
class IFSelect_SignMultiple : public IFSelect_Signature
{

public:

  
  //! Creates an empty SignMultiple with a Name
  //! This name should take expected tabulations into account
  Standard_EXPORT IFSelect_SignMultiple(const Standard_CString name);
  
  //! Adds a Signature. Width, if given, gives the tabulation
  //! If <maxi> is True, it is a forced tabulation (overlength is
  //! replaced by a final dot)
  //! If <maxi> is False, just 3 blanks follow an overlength
  Standard_EXPORT   void Add (const Handle(IFSelect_Signature)& subsign, const Standard_Integer width = 0, const Standard_Boolean maxi = Standard_False) ;
  
  //! Concatenates the values of sub-signatures, with their
  //! tabulations
  Standard_EXPORT   Standard_CString Value (const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Specialized Match Rule
  //! If <exact> is False, simply checks if at least one sub-item
  //! matches
  //! If <exact> is True, standard match with Value
  //! (i.e. tabulations must be respected)
  Standard_EXPORT virtual   Standard_Boolean Matches (const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model, const TCollection_AsciiString& text, const Standard_Boolean exact)  const;




  DEFINE_STANDARD_RTTI(IFSelect_SignMultiple)

protected:




private: 


  TColStd_SequenceOfTransient thesubs;
  TColStd_SequenceOfInteger thetabs;


};







#endif // _IFSelect_SignMultiple_HeaderFile
