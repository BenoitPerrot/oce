// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_TransferResultInfo_HeaderFile
#define _TransferBRep_TransferResultInfo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TransferBRep_TransferResultInfo.hxx>

#include <Standard_Integer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>


//! Data structure for storing information on transfer result.
//! At the moment it dispatches information for the following types:
//! - result,
//! - result + warning(s),
//! - result + fail(s),
//! - result + warning(s) + fail(s)
//! - no result,
//! - no result + warning(s),
//! - no result + fail(s),
//! - no result + warning(s) + fail(s),
class TransferBRep_TransferResultInfo : public MMgt_TShared
{

public:

  
  //! Creates object with all fields nullified.
  Standard_EXPORT TransferBRep_TransferResultInfo();
  
  //! Resets all the fields.
  Standard_EXPORT   void Clear() ;
  
      Standard_Integer& Result() ;
  
      Standard_Integer& ResultWarning() ;
  
      Standard_Integer& ResultFail() ;
  
      Standard_Integer& ResultWarningFail() ;
  
      Standard_Integer& NoResult() ;
  
      Standard_Integer& NoResultWarning() ;
  
      Standard_Integer& NoResultFail() ;
  
      Standard_Integer& NoResultWarningFail() ;




  DEFINE_STANDARD_RTTI(TransferBRep_TransferResultInfo)

protected:




private: 


  Standard_Integer myR;
  Standard_Integer myRW;
  Standard_Integer myRF;
  Standard_Integer myRWF;
  Standard_Integer myNR;
  Standard_Integer myNRW;
  Standard_Integer myNRF;
  Standard_Integer myNRWF;


};


#include <TransferBRep_TransferResultInfo.lxx>





#endif // _TransferBRep_TransferResultInfo_HeaderFile
