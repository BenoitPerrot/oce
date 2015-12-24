// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_RealVal_HeaderFile
#define _MoniTool_RealVal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/MoniTool/Handle_MoniTool_RealVal.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>


//! A Real through a Handle (i.e. managed as TShared)
class MoniTool_RealVal : public MMgt_TShared
{

public:

  
  Standard_EXPORT MoniTool_RealVal(const Standard_Real val = 0.0);
  
  Standard_EXPORT   Standard_Real Value()  const;
  
  Standard_EXPORT   Standard_Real& CValue() ;




  DEFINE_STANDARD_RTTI(MoniTool_RealVal)

protected:




private: 


  Standard_Real theval;


};







#endif // _MoniTool_RealVal_HeaderFile
