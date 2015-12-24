// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_SimpleBinderOfTransient_HeaderFile
#define _Transfer_SimpleBinderOfTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/Transfer/Handle_Transfer_SimpleBinderOfTransient.hxx>

#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/Transfer/Transfer_Binder.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Transfer/Handle_Transfer_Binder.hxx>
class Standard_Transient;
class Transfer_TransferFailure;
class Standard_Type;
class Transfer_Binder;


//! An adapted instantiation of SimpleBinder for Transient Result,
//! i.e. ResultType can be computed from the Result itself,
//! instead of being static
class Transfer_SimpleBinderOfTransient : public Transfer_Binder
{

public:

  
  //! Creates an empty SimpleBinderOfTransient
  //! Returns True if a starting object is bound with SEVERAL
  //! results : Here, returns allways False
  //! See Binder itself
  Standard_EXPORT Transfer_SimpleBinderOfTransient();
  
  //! Returns the Effective (Dynamic) Type of the Result
  //! (Standard_Transient if no Result is defined)
  Standard_EXPORT   Handle(Standard_Type) ResultType()  const;
  
  //! Returns the Effective Name of (Dynamic) Type of the Result
  //! (void) if no result is defined
  Standard_EXPORT   Standard_CString ResultTypeName()  const;
  
  //! Defines the Result
  Standard_EXPORT   void SetResult (const Handle(Standard_Transient)& res) ;
  
  //! Returns the defined Result, if there is one
  Standard_EXPORT  const  Handle(Standard_Transient)& Result()  const;
  
  //! Returns a transient result according to its type (IsKind)
  //! i.e. the result itself if IsKind(atype), else searches in
  //! NextResult, until first found, then returns True
  //! If not found, returns False (res is NOT touched)
  //!
  //! This syntactic form avoids to do DownCast : if a result is
  //! found with the good type, it is loaded in <res> and can be
  //! immediately used, well initialised
  Standard_EXPORT static   Standard_Boolean GetTypedResult (const Handle(Transfer_Binder)& bnd, const Handle(Standard_Type)& atype, Handle(Standard_Transient)& res) ;




  DEFINE_STANDARD_RTTI(Transfer_SimpleBinderOfTransient)

protected:




private: 


  Handle(Standard_Transient) theres;


};







#endif // _Transfer_SimpleBinderOfTransient_HeaderFile
