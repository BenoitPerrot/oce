// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_Transaction_HeaderFile
#define _TDF_Transaction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/TDF/Handle_TDF_Data.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDF/Handle_TDF_Delta.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TDF_Data;
class Standard_DomainError;
class Standard_NullObject;
class TDF_Delta;
class TCollection_AsciiString;


//! This class offers services to open, commit or
//! abort a transaction in a more secure way than
//! using Data from TDF. If you forget to close a
//! transaction, it will be automaticaly aborted at
//! the destruction of this object, at the closure of
//! its scope.
//!
//! In case of catching errors, the effect will be the
//! same: aborting transactions until the good current
//! one.
class TDF_Transaction 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty transaction context, unable to be
  //! opened.
  Standard_EXPORT TDF_Transaction(const TCollection_AsciiString& aName = "");
  
  //! Creates a transaction context on <aDF>, ready to
  //! be opened.
  Standard_EXPORT TDF_Transaction(const Handle(TDF_Data)& aDF, const TCollection_AsciiString& aName = "");
  
  //! Aborts all the transactions on <myDF> and sets
  //! <aDF> to build a transaction context on <aDF>,
  //! ready to be opened.
  Standard_EXPORT   void Initialize (const Handle(TDF_Data)& aDF) ;
  
  //! If not yet done, opens a new transaction on
  //! <myDF>. Returns the index of the just opened
  //! transaction.
  //!
  //! It raises DomainError if the transaction is
  //! already open, and NullObject if there is no
  //! current Data framework.
  Standard_EXPORT   Standard_Integer Open() ;
  
  //! Commits the transactions until AND including the
  //! current opened one.
  Standard_EXPORT   Handle(TDF_Delta) Commit (const Standard_Boolean withDelta = Standard_False) ;
  
  //! Aborts the transactions until AND including the
  //! current opened one.
  Standard_EXPORT   void Abort() ;
~TDF_Transaction()
{
  Abort();
}
  
  //! Returns the Data from TDF.
      Handle(TDF_Data) Data()  const;
  
  //! Returns the number of the transaction opened by <me>.
      Standard_Integer Transaction()  const;
  
  //! Returns the transaction name.
  Standard_EXPORT  const  TCollection_AsciiString& Name()  const;
  
  //! Returns true if the transaction is open.
      Standard_Boolean IsOpen()  const;




protected:





private:

  
  //! Private to avoid copy.
  Standard_EXPORT TDF_Transaction(const TDF_Transaction& aTrans);


  Handle(TDF_Data) myDF;
  Standard_Integer myUntilTransaction;
  TCollection_AsciiString myName;


};


#include <OCAF/TDF/TDF_Transaction.lxx>





#endif // _TDF_Transaction_HeaderFile
